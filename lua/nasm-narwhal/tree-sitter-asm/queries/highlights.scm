
(comment) @comment

;(directive) @comment.note
[
    (directive)
    (directive_bits)
    ;(directive_default)
    (directive_segment)
 ]@string

(ident) @label
(label_def) @label

[
(instr_prefix)
(instr_name)
] @field

[
(pseudo_instr_head)
(times_head)
] @function


(register) @type
[
  (op_size)
  (op_wrt)
]@conceal

  (wrt_special) @variable

(int) @number
(float) @number.float
(string) @string
(packed_bcd) @number


(dolar) @constant.macro

[
    (define_head)
    (undefine_head)
    (assign_head)
]
@function

[
    (def_arg_suf)
    (def_arg_pref)
]
@function

[
  "||" "&&" "^^"
  "="  "=="  "!="  "<>"  "<" "<=" ">" ">=" "<=>"
  "|" "^" "&" "<<" "<<<" ">>" ">>>"
  "+" "-" "*" "/" "//" "%" "%%"
  "%+"
  "~" "!"
] @punctuation

[
 ","
] @punctuation.delimiter

[
 "(" ")" "[" "]" ":"
] @punctuation

;(directive "BITS" @string)
;(int "we" @number)

;((int) @constructor
 ;(#match? @string "[0-1]*"))
