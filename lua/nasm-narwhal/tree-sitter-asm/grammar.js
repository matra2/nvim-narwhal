var dict = {};


module.exports = grammar({
  name: 'asm',

  extras: $ => [
    / |\t|\r/,
    '\\\n',
    $.comment,
  ],

  rules: {

    program: $ => repeat(choice(
      $.pseudo_instr,
      seq(token(prec(2,'[')), $.directive, ']'),
      $.directive,
      $.comment,
      $.label_def,
      $.macro,
      $.instr,
      '\n',
    )),

                  /*  M A C R O  */
    //todo define now only expr
    macro: $ => choice(
      $.define,
      $.undefine,
      $.assign,
    ),

    define: $ => seq(
      field('name', $.define_head),
      field('def_name', $.ident),
      optional(seq(
        token.immediate('('),
        optional(seq(
          field('def_arg', $.def_arg),
          repeat(seq(
            ',',
            field('def_arg', $.def_arg),
          )),
          optional(','),
        )),
        ')'
      )),
      optional(field('def_val', $.expr)),
    ),

    def_arg: $ => seq(
      optional(field('arg_prefix', $.def_arg_pref)),
      field('arg', $.ident),
      optional(field('arg_sufix', $.def_arg_suf)),
    ),

    def_arg_pref: $ => /[&!=]+/,

    def_arg_suf: $ => /\/[byoqdthx]?[us]?/i,

    undefine: $ => seq(
      field('name', $.undefine_head),
      $.ident,
    ),

    assign: $ => seq(
      field('name', $.assign_head),
      field('assign_name', $.ident),
      field('assign_val', $.expr),
    ),

    define_head: $ => /%i?x?define/i,
    undefine_head: $ => /%undef/i,
    assign_head: $ => /%i?assign/i,


                  /*  L A B E L  */

    label_def: $ => token(
      /\$?[a-zA-Z_\.\?][a-zA-Z0-9_\.\?$#@~]*:/
    ),

    /*label_def: $ => seq(*/
    /*$.label,*/
    /*':',*/
    /*),*/


    ident: $ => token(
      /\$?[a-zA-Z_\.\?][a-zA-Z0-9_\.\?$#@~]*/
    ),


            /* P S E U D O    I N S T R U C T I O N  */

    pseudo_instr: $ => choice(

      seq(
        field('head', $.pseudo_instr_head),
        $.expr,
        repeat(seq(',', $.expr)),
        '\n',
                      /*todo dup syntax && ?*/
      ),

      field("times", seq(
        field('name', $.times_head),
        $.expr,
        field("sub_instr", choice($.instr, $.pseudo_instr)),
      ))
    ),

    times_head: $ => /times/i,

    pseudo_instr_head: $ => choice(
        /d[bwdqtoyz]/i,
        /res[bwdqtoyz]/i,
        /incbin/i,
        /equ/i,
    ),



            /*  I N S T R U C T I O N  */


    instr: $ => seq(
      repeat(field('instr_prefix', $.instr_prefix)),
      field('instr_name', $.instr_name),
      optional(seq(
        field('op', $.op),
        optional(seq(
          ',',
          field('op', $.op),
          optional(seq(
            ',',
            field('op', $.op),
          ))
        ))
      )),
      '\n'
    ),

    instr_prefix: $ => token(prec(0,choice(
      /lock/i,
      /repn?[ez]?/i,
      /xacquire|xrelease/i,
      /(no)?bnd/i,
      /[oa](16|32|64)/i,
      /[cdefgs]s/i
    ))),

    op: $ => seq(
      optional($._op_size),
      choice(
        field('address', $.address),
        field('expr', $.expr),
      )
    ),

    address: $ => seq(
      '[',
      optional($._op_size),
      field("expr", $.expr),
      ']'
    ),      //todo broadcasting

    op_wrt: $ => seq(
      'wrt',
      $.wrt_special,
    ),

    wrt_special: $ => (
      /\.\.[a-zA-Z]+/
    ),


      //todo wrt, seg

    instr_name: $ =>  token(prec(0,
      /[a-z]+/i
    )),



                    /* E X P R E T I O N */



    expr: $ => choice(
      ...[
        [',', -1],
        ['||', 2],
        ['^^', 3],
        ['&&', 4],
        ['=', 5], ['==', 5], ['!=', 5], ['<>', 5],
        ['<', 5], ['<=', 5], ['>', 5], ['>=',5], ['<=>', 5],
        ['|', 6],
        ['^', 7],
        ['&', 8],
        ['<<', 9], ['<<<', 9], ['>>', 9], ['>>>', 9],
        ['+', 10], ['-', 10],
        ['*', 11], ['/', 11], ['//', 11], ['%', 11], ['%%', 11],
        ['%+', 12],
      ].map(([op, p]) => prec.left( p, seq(
        field('lhs', $.expr),
        field('op', op),
        field('rhs', $.expr),
      ))),
      ...[
        ['-', 12],
        ['+', 12],
        ['~', 12],
        ['!', 12],
        [/seg/i, 12],
      ].map(([op, p]) => prec.left( p, seq(
        field('op', op),
        field('arg', $.expr)),
      )),
      seq('(', $.expr, ')'),
      /*seq('%[', $.call, ']'),*/       //todo %[...]
      $.ident_wrt,
      $._constant,
      $.register,
      $.dolar,
      $.call,
      $.macro_name,
      prec.left(seq(
        field("cond", $.expr),
        '?',
        field("cond_true", $.expr),
        ':',
        field("cond_false", $.expr),
      )),

    ),

    ident_wrt: $ => seq(
      $.ident,
      optional($.op_wrt),
    ),

    call: $ => seq(
      field('call_name', $.ident),
      '(',
      optional(seq(
        field('call_arg', $.expr),
        repeat(seq(
          ',',
          field('call_arg', $.expr),
        )),
      )),
      ')'
    ),

    seg_reg: $ => /[cdefgs]s:/i,

    macro_name: $ => /%\*?\?\??/,

    _op_size: $ => repeat1(
      field('op_size', $.op_size),
    ),


    op_size: $ => token(prec(2, choice(
      /strict/i,
      /abs|a32|rel/i,
      /byte|[dqtoyz]?word/i,
    ))),


    dolar: $ => /\$\$?/,

    _constant: $ => choice(
      $.int,
      $.float,
      $.packed_bcd,
      $.string,
    ),
    //todo special operators
    //
    float: $ => token(choice(
      /[\+\-]?(0[xhbyq])?[0-9a-f_]+\.[0-9a-f_]*([ep][\+\-]?[0-9_]+)?/i,
      /[\+\-]?(0[xhbyq])?[0-9a-f_]+[ep][\+\-]?[0-9_]+/i,
    )),

    packed_bcd: $ => token(choice(
      seq(
        /[\+\-]?/,
        /[0-9_]+/,
        /p/i,
      ),
        /*/[\+\-]?[0-9_]+p/i,*/
      /[\+\-]?0p[0-9_]+/i
    )),

    int: $ => token(
      /[\+\-]?(0[hxdtqoby]|0x|\$)?[0-9a-f_]+[hxdtqoby]?/i
    ),

    string: $ => token(
      /"[^"]*"|'[^']*'|`[^`]*`/
    ),

    register: $ => token(prec(3, choice(

          //general purpose
      /[er]?[a-d]x/i,
      /[er]?[sb]p/i,
      /[er]?[sd]i/i,
      /[er]?ip/i,
      /r(8|9|1[0-5])[bwd]?/i,
      /[a-d][hl]/i,
      /(sp|bp|di|si)l/i,

          //the bigger
      /[xy]?mm([0-9]|1[0-5])/i,
      /zmm([12]?[0-9]|3[01])/i,
      /st[0-8]/i,

          //segment
      /[cdefgs]s/i,

          //debug and control
      /[dc]r([0-9]|1[0-5])/i,

          //misc
      /[er]?flags/i,
      /(gd|id|ld)?tr/i,
      /msw|mxcsr|[cst]w/i,
      /fp_(ip|dp|cs|ds|opc)/i,
      /k[0-7]/i,
      /tr[0-7]/i,
      /bnd[0-3]/i,
    ))),




                    /*  C O M M E N T  */

    comment: $ => seq(
      /;.*/,
      /*'\n'*/
    ),



                    /*  D I R E C T I V E  */

    directive: $ => choice(
        seq(
        field('directive_name', choice(
          $.directive_bits,
          /*$.directive_default,*/
          $.directive_segment,
          $.directive_absolute,
          $.directive_glob_ext_stat,
          $.directive_comm,
          $.directive_misc,
          $.directive_warning,
          /*prefix*/
        )),
        '\n'
      ),
    ),


    directive_bits: $ => choice(
      seq(
        field("dir_head", token(prec(2,/bits/i))),
        $.expr,
      ),
      field("dir_head", token(prec(2,/use(16|32)/i))),
    ),

    directive_segment: $ => seq(
      field("dir_head", token(prec(2,/section|segment/i))),
      field("sec_name", $.ident),
      repeat(seq(
        /[a-zA-Z\.]+/,
        optional(seq( '=', $.expr )),
      ))
    ),

    directive_absolute: $ => seq(
      field("dir_head", token(prec(2,/absolute/i))),
      $.expr,
    ),

    directive_glob_ext_stat: $ => seq(
      field("dir_head", token(prec(2,/global|extern|require|static/i))),
      repeat1(seq(
        field("var_name", $.ident),
        optional(seq(':', /[a-zA-Z]+/)),
        optional($.expr),
        optional(','),
      ))
    ),

    directive_comm: $ => seq(
      field("dir_head", token(prec(2,/common/i))),
      field("var_name", $.ident),
      field("size", $.expr),
      optional(seq(':', choice(
        token(prec(2,/[a-zA-Z]+/)),
        $.expr
      ))),
    ),

    directive_misc: $ => seq(
      field("dir_head", token(prec(2,/cpu|float|default/i))),
      /[a-zA-Z_\-\+\*\=]+/,
    ),

    directive_warning: $ => seq(
      field("dir_head", token(prec(2,/warning/i))),
      choice(
        seq(
          token(prec(2, /error/i)),
          '=',
          field('warning_class', $.ident),
        ),

        seq(
          optional(/\+|\-|\*/),
          field('warning_class', $.ident),
        ),
      ),

    ),




  }




});

