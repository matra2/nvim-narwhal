#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 321
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 31
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 56

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LF = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  sym_def_arg_pref = 7,
  sym_def_arg_suf = 8,
  sym_define_head = 9,
  sym_undefine_head = 10,
  sym_assign_head = 11,
  sym_label_def = 12,
  sym_ident = 13,
  sym_times_head = 14,
  aux_sym_pseudo_instr_head_token1 = 15,
  aux_sym_pseudo_instr_head_token2 = 16,
  aux_sym_pseudo_instr_head_token3 = 17,
  aux_sym_pseudo_instr_head_token4 = 18,
  sym_instr_prefix = 19,
  anon_sym_LBRACK2 = 20,
  anon_sym_wrt = 21,
  sym_wrt_special = 22,
  sym_instr_name = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_CARET_CARET = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_EQ = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_LT_GT = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_LT_EQ_GT = 35,
  anon_sym_PIPE = 36,
  anon_sym_CARET = 37,
  anon_sym_AMP = 38,
  anon_sym_LT_LT = 39,
  anon_sym_LT_LT_LT = 40,
  anon_sym_GT_GT = 41,
  anon_sym_GT_GT_GT = 42,
  anon_sym_PLUS = 43,
  anon_sym_DASH = 44,
  anon_sym_STAR = 45,
  anon_sym_SLASH = 46,
  anon_sym_SLASH_SLASH = 47,
  anon_sym_PERCENT = 48,
  anon_sym_PERCENT_PERCENT = 49,
  anon_sym_PERCENT_PLUS = 50,
  anon_sym_TILDE = 51,
  anon_sym_BANG = 52,
  aux_sym_expr_token1 = 53,
  anon_sym_LPAREN2 = 54,
  anon_sym_QMARK = 55,
  anon_sym_COLON = 56,
  sym_macro_name = 57,
  sym_op_size = 58,
  sym_dolar = 59,
  sym_float = 60,
  sym_packed_bcd = 61,
  sym_int = 62,
  sym_string = 63,
  sym_register = 64,
  aux_sym_comment_token1 = 65,
  aux_sym_directive_bits_token1 = 66,
  aux_sym_directive_bits_token2 = 67,
  aux_sym_directive_segment_token1 = 68,
  aux_sym_directive_segment_token2 = 69,
  aux_sym_directive_absolute_token1 = 70,
  aux_sym_directive_glob_ext_stat_token1 = 71,
  aux_sym_directive_glob_ext_stat_token2 = 72,
  aux_sym_directive_comm_token1 = 73,
  aux_sym_directive_comm_token2 = 74,
  aux_sym_directive_misc_token1 = 75,
  aux_sym_directive_misc_token2 = 76,
  aux_sym_directive_warning_token1 = 77,
  aux_sym_directive_warning_token2 = 78,
  aux_sym_directive_warning_token3 = 79,
  sym_program = 80,
  sym_macro = 81,
  sym_define = 82,
  sym_def_arg = 83,
  sym_undefine = 84,
  sym_assign = 85,
  sym_pseudo_instr = 86,
  sym_pseudo_instr_head = 87,
  sym_instr = 88,
  sym_op = 89,
  sym_address = 90,
  sym_op_wrt = 91,
  sym_expr = 92,
  sym_ident_wrt = 93,
  sym_call = 94,
  aux_sym__op_size = 95,
  sym__constant = 96,
  sym_comment = 97,
  sym_directive = 98,
  sym_directive_bits = 99,
  sym_directive_segment = 100,
  sym_directive_absolute = 101,
  sym_directive_glob_ext_stat = 102,
  sym_directive_comm = 103,
  sym_directive_misc = 104,
  sym_directive_warning = 105,
  aux_sym_program_repeat1 = 106,
  aux_sym_define_repeat1 = 107,
  aux_sym_pseudo_instr_repeat1 = 108,
  aux_sym_instr_repeat1 = 109,
  aux_sym_call_repeat1 = 110,
  aux_sym_directive_segment_repeat1 = 111,
  aux_sym_directive_glob_ext_stat_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_def_arg_pref] = "def_arg_pref",
  [sym_def_arg_suf] = "def_arg_suf",
  [sym_define_head] = "define_head",
  [sym_undefine_head] = "undefine_head",
  [sym_assign_head] = "assign_head",
  [sym_label_def] = "label_def",
  [sym_ident] = "ident",
  [sym_times_head] = "times_head",
  [aux_sym_pseudo_instr_head_token1] = "pseudo_instr_head_token1",
  [aux_sym_pseudo_instr_head_token2] = "pseudo_instr_head_token2",
  [aux_sym_pseudo_instr_head_token3] = "pseudo_instr_head_token3",
  [aux_sym_pseudo_instr_head_token4] = "pseudo_instr_head_token4",
  [sym_instr_prefix] = "instr_prefix",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_wrt] = "wrt",
  [sym_wrt_special] = "wrt_special",
  [sym_instr_name] = "instr_name",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_PERCENT_PLUS] = "%+",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [aux_sym_expr_token1] = "expr_token1",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [sym_macro_name] = "macro_name",
  [sym_op_size] = "op_size",
  [sym_dolar] = "dolar",
  [sym_float] = "float",
  [sym_packed_bcd] = "packed_bcd",
  [sym_int] = "int",
  [sym_string] = "string",
  [sym_register] = "register",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_directive_bits_token1] = "directive_bits_token1",
  [aux_sym_directive_bits_token2] = "directive_bits_token2",
  [aux_sym_directive_segment_token1] = "directive_segment_token1",
  [aux_sym_directive_segment_token2] = "directive_segment_token2",
  [aux_sym_directive_absolute_token1] = "directive_absolute_token1",
  [aux_sym_directive_glob_ext_stat_token1] = "directive_glob_ext_stat_token1",
  [aux_sym_directive_glob_ext_stat_token2] = "directive_glob_ext_stat_token2",
  [aux_sym_directive_comm_token1] = "directive_comm_token1",
  [aux_sym_directive_comm_token2] = "directive_comm_token2",
  [aux_sym_directive_misc_token1] = "directive_misc_token1",
  [aux_sym_directive_misc_token2] = "directive_misc_token2",
  [aux_sym_directive_warning_token1] = "directive_warning_token1",
  [aux_sym_directive_warning_token2] = "directive_warning_token2",
  [aux_sym_directive_warning_token3] = "directive_warning_token3",
  [sym_program] = "program",
  [sym_macro] = "macro",
  [sym_define] = "define",
  [sym_def_arg] = "def_arg",
  [sym_undefine] = "undefine",
  [sym_assign] = "assign",
  [sym_pseudo_instr] = "pseudo_instr",
  [sym_pseudo_instr_head] = "pseudo_instr_head",
  [sym_instr] = "instr",
  [sym_op] = "op",
  [sym_address] = "address",
  [sym_op_wrt] = "op_wrt",
  [sym_expr] = "expr",
  [sym_ident_wrt] = "ident_wrt",
  [sym_call] = "call",
  [aux_sym__op_size] = "_op_size",
  [sym__constant] = "_constant",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_directive_bits] = "directive_bits",
  [sym_directive_segment] = "directive_segment",
  [sym_directive_absolute] = "directive_absolute",
  [sym_directive_glob_ext_stat] = "directive_glob_ext_stat",
  [sym_directive_comm] = "directive_comm",
  [sym_directive_misc] = "directive_misc",
  [sym_directive_warning] = "directive_warning",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_define_repeat1] = "define_repeat1",
  [aux_sym_pseudo_instr_repeat1] = "pseudo_instr_repeat1",
  [aux_sym_instr_repeat1] = "instr_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
  [aux_sym_directive_segment_repeat1] = "directive_segment_repeat1",
  [aux_sym_directive_glob_ext_stat_repeat1] = "directive_glob_ext_stat_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_def_arg_pref] = sym_def_arg_pref,
  [sym_def_arg_suf] = sym_def_arg_suf,
  [sym_define_head] = sym_define_head,
  [sym_undefine_head] = sym_undefine_head,
  [sym_assign_head] = sym_assign_head,
  [sym_label_def] = sym_label_def,
  [sym_ident] = sym_ident,
  [sym_times_head] = sym_times_head,
  [aux_sym_pseudo_instr_head_token1] = aux_sym_pseudo_instr_head_token1,
  [aux_sym_pseudo_instr_head_token2] = aux_sym_pseudo_instr_head_token2,
  [aux_sym_pseudo_instr_head_token3] = aux_sym_pseudo_instr_head_token3,
  [aux_sym_pseudo_instr_head_token4] = aux_sym_pseudo_instr_head_token4,
  [sym_instr_prefix] = sym_instr_prefix,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_wrt] = anon_sym_wrt,
  [sym_wrt_special] = sym_wrt_special,
  [sym_instr_name] = sym_instr_name,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_PERCENT_PLUS] = anon_sym_PERCENT_PLUS,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_expr_token1] = aux_sym_expr_token1,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_macro_name] = sym_macro_name,
  [sym_op_size] = sym_op_size,
  [sym_dolar] = sym_dolar,
  [sym_float] = sym_float,
  [sym_packed_bcd] = sym_packed_bcd,
  [sym_int] = sym_int,
  [sym_string] = sym_string,
  [sym_register] = sym_register,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_directive_bits_token1] = aux_sym_directive_bits_token1,
  [aux_sym_directive_bits_token2] = aux_sym_directive_bits_token2,
  [aux_sym_directive_segment_token1] = aux_sym_directive_segment_token1,
  [aux_sym_directive_segment_token2] = aux_sym_directive_segment_token2,
  [aux_sym_directive_absolute_token1] = aux_sym_directive_absolute_token1,
  [aux_sym_directive_glob_ext_stat_token1] = aux_sym_directive_glob_ext_stat_token1,
  [aux_sym_directive_glob_ext_stat_token2] = aux_sym_directive_glob_ext_stat_token2,
  [aux_sym_directive_comm_token1] = aux_sym_directive_comm_token1,
  [aux_sym_directive_comm_token2] = aux_sym_directive_comm_token2,
  [aux_sym_directive_misc_token1] = aux_sym_directive_misc_token1,
  [aux_sym_directive_misc_token2] = aux_sym_directive_misc_token2,
  [aux_sym_directive_warning_token1] = aux_sym_directive_warning_token1,
  [aux_sym_directive_warning_token2] = aux_sym_directive_warning_token2,
  [aux_sym_directive_warning_token3] = aux_sym_directive_warning_token3,
  [sym_program] = sym_program,
  [sym_macro] = sym_macro,
  [sym_define] = sym_define,
  [sym_def_arg] = sym_def_arg,
  [sym_undefine] = sym_undefine,
  [sym_assign] = sym_assign,
  [sym_pseudo_instr] = sym_pseudo_instr,
  [sym_pseudo_instr_head] = sym_pseudo_instr_head,
  [sym_instr] = sym_instr,
  [sym_op] = sym_op,
  [sym_address] = sym_address,
  [sym_op_wrt] = sym_op_wrt,
  [sym_expr] = sym_expr,
  [sym_ident_wrt] = sym_ident_wrt,
  [sym_call] = sym_call,
  [aux_sym__op_size] = aux_sym__op_size,
  [sym__constant] = sym__constant,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_directive_bits] = sym_directive_bits,
  [sym_directive_segment] = sym_directive_segment,
  [sym_directive_absolute] = sym_directive_absolute,
  [sym_directive_glob_ext_stat] = sym_directive_glob_ext_stat,
  [sym_directive_comm] = sym_directive_comm,
  [sym_directive_misc] = sym_directive_misc,
  [sym_directive_warning] = sym_directive_warning,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_define_repeat1] = aux_sym_define_repeat1,
  [aux_sym_pseudo_instr_repeat1] = aux_sym_pseudo_instr_repeat1,
  [aux_sym_instr_repeat1] = aux_sym_instr_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
  [aux_sym_directive_segment_repeat1] = aux_sym_directive_segment_repeat1,
  [aux_sym_directive_glob_ext_stat_repeat1] = aux_sym_directive_glob_ext_stat_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_def_arg_pref] = {
    .visible = true,
    .named = true,
  },
  [sym_def_arg_suf] = {
    .visible = true,
    .named = true,
  },
  [sym_define_head] = {
    .visible = true,
    .named = true,
  },
  [sym_undefine_head] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_head] = {
    .visible = true,
    .named = true,
  },
  [sym_label_def] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_times_head] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pseudo_instr_head_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instr_head_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instr_head_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instr_head_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_instr_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wrt] = {
    .visible = true,
    .named = false,
  },
  [sym_wrt_special] = {
    .visible = true,
    .named = true,
  },
  [sym_instr_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_op_size] = {
    .visible = true,
    .named = true,
  },
  [sym_dolar] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_packed_bcd] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_bits_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_bits_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_segment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_segment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_absolute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_glob_ext_stat_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_glob_ext_stat_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_comm_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_comm_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_misc_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_misc_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_warning_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_warning_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_warning_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_def_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_undefine] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_instr] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_instr_head] = {
    .visible = true,
    .named = true,
  },
  [sym_instr] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_op_wrt] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_ident_wrt] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__op_size] = {
    .visible = false,
    .named = false,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_bits] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_glob_ext_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_comm] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_misc] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_warning] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_instr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_segment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_glob_ext_stat_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_address = 1,
  field_arg = 2,
  field_arg_prefix = 3,
  field_arg_sufix = 4,
  field_assign_name = 5,
  field_assign_val = 6,
  field_call_arg = 7,
  field_call_name = 8,
  field_cond = 9,
  field_cond_false = 10,
  field_cond_true = 11,
  field_def_arg = 12,
  field_def_name = 13,
  field_def_val = 14,
  field_dir_head = 15,
  field_directive_name = 16,
  field_expr = 17,
  field_head = 18,
  field_instr_name = 19,
  field_instr_prefix = 20,
  field_lhs = 21,
  field_name = 22,
  field_op = 23,
  field_op_size = 24,
  field_rhs = 25,
  field_sec_name = 26,
  field_size = 27,
  field_sub_instr = 28,
  field_times = 29,
  field_var_name = 30,
  field_warning_class = 31,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_arg] = "arg",
  [field_arg_prefix] = "arg_prefix",
  [field_arg_sufix] = "arg_sufix",
  [field_assign_name] = "assign_name",
  [field_assign_val] = "assign_val",
  [field_call_arg] = "call_arg",
  [field_call_name] = "call_name",
  [field_cond] = "cond",
  [field_cond_false] = "cond_false",
  [field_cond_true] = "cond_true",
  [field_def_arg] = "def_arg",
  [field_def_name] = "def_name",
  [field_def_val] = "def_val",
  [field_dir_head] = "dir_head",
  [field_directive_name] = "directive_name",
  [field_expr] = "expr",
  [field_head] = "head",
  [field_instr_name] = "instr_name",
  [field_instr_prefix] = "instr_prefix",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_op_size] = "op_size",
  [field_rhs] = "rhs",
  [field_sec_name] = "sec_name",
  [field_size] = "size",
  [field_sub_instr] = "sub_instr",
  [field_times] = "times",
  [field_var_name] = "var_name",
  [field_warning_class] = "warning_class",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 3},
  [16] = {.index = 22, .length = 3},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 3},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 2},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 3},
  [25] = {.index = 43, .length = 2},
  [26] = {.index = 45, .length = 1},
  [27] = {.index = 46, .length = 2},
  [28] = {.index = 48, .length = 1},
  [29] = {.index = 49, .length = 1},
  [30] = {.index = 50, .length = 3},
  [31] = {.index = 53, .length = 1},
  [32] = {.index = 54, .length = 2},
  [33] = {.index = 56, .length = 3},
  [34] = {.index = 59, .length = 3},
  [35] = {.index = 62, .length = 2},
  [36] = {.index = 64, .length = 2},
  [37] = {.index = 66, .length = 3},
  [38] = {.index = 69, .length = 2},
  [39] = {.index = 71, .length = 2},
  [40] = {.index = 73, .length = 3},
  [41] = {.index = 76, .length = 3},
  [42] = {.index = 79, .length = 1},
  [43] = {.index = 80, .length = 4},
  [44] = {.index = 84, .length = 4},
  [45] = {.index = 88, .length = 2},
  [46] = {.index = 90, .length = 1},
  [47] = {.index = 91, .length = 3},
  [48] = {.index = 94, .length = 2},
  [49] = {.index = 96, .length = 3},
  [50] = {.index = 99, .length = 4},
  [51] = {.index = 103, .length = 4},
  [52] = {.index = 107, .length = 5},
  [53] = {.index = 112, .length = 4},
  [54] = {.index = 116, .length = 5},
  [55] = {.index = 121, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_instr_prefix, 0},
  [1] =
    {field_dir_head, 0},
  [2] =
    {field_def_name, 1},
    {field_name, 0},
  [4] =
    {field_name, 0},
  [5] =
    {field_instr_name, 0},
  [6] =
    {field_op_size, 0},
  [7] =
    {field_address, 0},
  [8] =
    {field_expr, 0},
  [9] =
    {field_dir_head, 0},
    {field_sec_name, 1},
  [11] =
    {field_var_name, 0},
  [12] =
    {field_dir_head, 0},
    {field_var_name, 1, .inherited = true},
  [14] =
    {field_dir_head, 0},
    {field_warning_class, 1},
  [16] =
    {field_directive_name, 0},
  [17] =
    {field_instr_prefix, 0, .inherited = true},
    {field_instr_prefix, 1, .inherited = true},
  [19] =
    {field_def_name, 1},
    {field_def_val, 2},
    {field_name, 0},
  [22] =
    {field_assign_name, 1},
    {field_assign_val, 2},
    {field_name, 0},
  [25] =
    {field_arg, 1},
    {field_op, 0},
  [27] =
    {field_name, 0},
    {field_sub_instr, 2},
    {field_times, 1},
  [30] =
    {field_instr_name, 0},
    {field_op, 1},
  [32] =
    {field_address, 1},
    {field_op_size, 0, .inherited = true},
  [34] =
    {field_expr, 1},
    {field_op_size, 0, .inherited = true},
  [36] =
    {field_op_size, 0, .inherited = true},
    {field_op_size, 1, .inherited = true},
  [38] =
    {field_var_name, 0, .inherited = true},
    {field_var_name, 1, .inherited = true},
  [40] =
    {field_dir_head, 0},
    {field_size, 2},
    {field_var_name, 1},
  [43] =
    {field_dir_head, 0},
    {field_warning_class, 2},
  [45] =
    {field_head, 0},
  [46] =
    {field_instr_name, 1},
    {field_instr_prefix, 0, .inherited = true},
  [48] =
    {field_arg, 0},
  [49] =
    {field_call_name, 0},
  [50] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [53] =
    {field_expr, 1},
  [54] =
    {field_dir_head, 0},
    {field_warning_class, 3},
  [56] =
    {field_instr_name, 1},
    {field_instr_prefix, 0, .inherited = true},
    {field_op, 2},
  [59] =
    {field_def_name, 1},
    {field_def_val, 4},
    {field_name, 0},
  [62] =
    {field_arg, 1},
    {field_arg_prefix, 0},
  [64] =
    {field_arg, 0},
    {field_arg_sufix, 1},
  [66] =
    {field_def_arg, 3},
    {field_def_name, 1},
    {field_name, 0},
  [69] =
    {field_call_arg, 2},
    {field_call_name, 0},
  [71] =
    {field_expr, 2},
    {field_op_size, 1, .inherited = true},
  [73] =
    {field_instr_name, 0},
    {field_op, 1},
    {field_op, 3},
  [76] =
    {field_arg, 1},
    {field_arg_prefix, 0},
    {field_arg_sufix, 2},
  [79] =
    {field_def_arg, 1},
  [80] =
    {field_def_arg, 3},
    {field_def_name, 1},
    {field_def_val, 5},
    {field_name, 0},
  [84] =
    {field_def_arg, 3},
    {field_def_arg, 4, .inherited = true},
    {field_def_name, 1},
    {field_name, 0},
  [88] =
    {field_def_arg, 0, .inherited = true},
    {field_def_arg, 1, .inherited = true},
  [90] =
    {field_call_arg, 1},
  [91] =
    {field_call_arg, 2},
    {field_call_arg, 3, .inherited = true},
    {field_call_name, 0},
  [94] =
    {field_call_arg, 0, .inherited = true},
    {field_call_arg, 1, .inherited = true},
  [96] =
    {field_cond, 0},
    {field_cond_false, 4},
    {field_cond_true, 2},
  [99] =
    {field_instr_name, 1},
    {field_instr_prefix, 0, .inherited = true},
    {field_op, 2},
    {field_op, 4},
  [103] =
    {field_def_arg, 3},
    {field_def_name, 1},
    {field_def_val, 6},
    {field_name, 0},
  [107] =
    {field_def_arg, 3},
    {field_def_arg, 4, .inherited = true},
    {field_def_name, 1},
    {field_def_val, 6},
    {field_name, 0},
  [112] =
    {field_instr_name, 0},
    {field_op, 1},
    {field_op, 3},
    {field_op, 5},
  [116] =
    {field_def_arg, 3},
    {field_def_arg, 4, .inherited = true},
    {field_def_name, 1},
    {field_def_val, 7},
    {field_name, 0},
  [121] =
    {field_instr_name, 1},
    {field_instr_prefix, 0, .inherited = true},
    {field_op, 2},
    {field_op, 4},
    {field_op, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 2,
  [32] = 32,
  [33] = 3,
  [34] = 18,
  [35] = 26,
  [36] = 13,
  [37] = 37,
  [38] = 38,
  [39] = 14,
  [40] = 30,
  [41] = 41,
  [42] = 28,
  [43] = 27,
  [44] = 19,
  [45] = 24,
  [46] = 4,
  [47] = 16,
  [48] = 48,
  [49] = 29,
  [50] = 20,
  [51] = 25,
  [52] = 23,
  [53] = 22,
  [54] = 54,
  [55] = 21,
  [56] = 15,
  [57] = 10,
  [58] = 58,
  [59] = 59,
  [60] = 7,
  [61] = 61,
  [62] = 62,
  [63] = 2,
  [64] = 2,
  [65] = 29,
  [66] = 30,
  [67] = 27,
  [68] = 28,
  [69] = 30,
  [70] = 29,
  [71] = 16,
  [72] = 37,
  [73] = 26,
  [74] = 74,
  [75] = 74,
  [76] = 24,
  [77] = 4,
  [78] = 22,
  [79] = 21,
  [80] = 80,
  [81] = 20,
  [82] = 82,
  [83] = 74,
  [84] = 25,
  [85] = 13,
  [86] = 86,
  [87] = 23,
  [88] = 18,
  [89] = 3,
  [90] = 15,
  [91] = 91,
  [92] = 10,
  [93] = 93,
  [94] = 7,
  [95] = 14,
  [96] = 14,
  [97] = 13,
  [98] = 7,
  [99] = 10,
  [100] = 15,
  [101] = 26,
  [102] = 37,
  [103] = 3,
  [104] = 16,
  [105] = 19,
  [106] = 28,
  [107] = 74,
  [108] = 27,
  [109] = 19,
  [110] = 24,
  [111] = 4,
  [112] = 22,
  [113] = 21,
  [114] = 20,
  [115] = 25,
  [116] = 23,
  [117] = 18,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 120,
  [127] = 119,
  [128] = 121,
  [129] = 129,
  [130] = 130,
  [131] = 130,
  [132] = 121,
  [133] = 121,
  [134] = 119,
  [135] = 119,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 153,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 167,
  [172] = 167,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 185,
  [188] = 184,
  [189] = 189,
  [190] = 181,
  [191] = 185,
  [192] = 180,
  [193] = 181,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 175,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 174,
  [205] = 189,
  [206] = 203,
  [207] = 202,
  [208] = 208,
  [209] = 185,
  [210] = 201,
  [211] = 175,
  [212] = 199,
  [213] = 198,
  [214] = 197,
  [215] = 196,
  [216] = 195,
  [217] = 194,
  [218] = 181,
  [219] = 180,
  [220] = 189,
  [221] = 174,
  [222] = 203,
  [223] = 184,
  [224] = 202,
  [225] = 201,
  [226] = 175,
  [227] = 199,
  [228] = 195,
  [229] = 196,
  [230] = 197,
  [231] = 198,
  [232] = 199,
  [233] = 233,
  [234] = 201,
  [235] = 202,
  [236] = 203,
  [237] = 174,
  [238] = 189,
  [239] = 198,
  [240] = 197,
  [241] = 196,
  [242] = 195,
  [243] = 194,
  [244] = 184,
  [245] = 245,
  [246] = 180,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 256,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 256,
  [263] = 263,
  [264] = 264,
  [265] = 256,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 297,
  [304] = 304,
  [305] = 305,
  [306] = 295,
  [307] = 307,
  [308] = 308,
  [309] = 297,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 297,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 146,
  [319] = 319,
  [320] = 147,
};

static TSCharacterRange sym_int_character_set_1[] = {
  {'0', '9'}, {'A', 'F'}, {'H', 'H'}, {'O', 'O'}, {'Q', 'Q'}, {'T', 'T'}, {'X', 'Y'}, {'_', '_'},
  {'a', 'f'}, {'h', 'h'}, {'o', 'o'}, {'q', 'q'}, {'t', 't'}, {'x', 'y'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '\n', 82,
        '!', 661,
        '"', 25,
        '$', 673,
        '%', 656,
        '&', 643,
        '\'', 27,
        '(', 83,
        ')', 85,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '.', 94,
        '/', 653,
        ':', 666,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 665,
        'W', 291,
        '[', 80,
      );
      if (lookahead == '\\') SKIP(74);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == '_') ADVANCE(464);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '~') ADVANCE(659);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(347);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(357);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(323);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(458);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(325);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(296);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(374);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68);
      if (('H' <= lookahead && lookahead <= 'v')) ADVANCE(463);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 82,
        '!', 43,
        '$', 66,
        '%', 655,
        '&', 643,
        '(', 662,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '/', 653,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 665,
      );
      if (lookahead == '\\') SKIP(13);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == 'w') ADVANCE(286);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 82,
        '!', 43,
        '$', 66,
        '%', 655,
        '&', 643,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '/', 653,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 665,
      );
      if (lookahead == '\\') SKIP(15);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 82,
        '!', 43,
        '%', 655,
        '&', 643,
        '(', 662,
        ')', 85,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '.', 30,
        '/', 653,
        ':', 666,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 663,
      );
      if (lookahead == '\\') SKIP(10);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == 'w') ADVANCE(589);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(611);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == 'A' ||
          lookahead == 'O' ||
          lookahead == 'a' ||
          lookahead == 'o') ADVANCE(492);
      if (('C' <= lookahead && lookahead <= 'G') ||
          lookahead == 'S' ||
          ('c' <= lookahead && lookahead <= 'g') ||
          lookahead == 's') ADVANCE(622);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 82,
        '!', 43,
        '%', 655,
        '&', 643,
        '(', 662,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '/', 653,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 663,
      );
      if (lookahead == '\\') SKIP(12);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == 'w') ADVANCE(701);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(703);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 82,
        '!', 43,
        '%', 655,
        '&', 643,
        ')', 85,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '/', 653,
        ':', 666,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 663,
      );
      if (lookahead == '\\') SKIP(11);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(611);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == 'A' ||
          lookahead == 'O' ||
          lookahead == 'a' ||
          lookahead == 'o') ADVANCE(492);
      if (('C' <= lookahead && lookahead <= 'G') ||
          lookahead == 'S' ||
          ('c' <= lookahead && lookahead <= 'g') ||
          lookahead == 's') ADVANCE(622);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 82,
        '!', 43,
        '%', 655,
        '&', 643,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '/', 653,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 663,
      );
      if (lookahead == '\\') SKIP(14);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(703);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 82,
        '!', 660,
        '"', 25,
        '$', 672,
        '%', 28,
        '\'', 27,
        '(', 662,
        ')', 85,
        '+', 649,
        ',', 84,
        '-', 651,
        '0', 682,
        ':', 666,
        ';', 697,
      );
      if (lookahead == '\\') SKIP(17);
      if (lookahead == '_') ADVANCE(133);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '~') ADVANCE(659);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(321);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(459);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(372);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'W') ||
          ('h' <= lookahead && lookahead <= 'w')) ADVANCE(464);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 82,
        '!', 660,
        '"', 25,
        '$', 672,
        '%', 28,
        '\'', 27,
        '(', 662,
        '+', 649,
        '-', 651,
        '0', 682,
        ';', 697,
        '[', 483,
      );
      if (lookahead == '\\') SKIP(16);
      if (lookahead == '_') ADVANCE(133);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '~') ADVANCE(659);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(321);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(459);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(368);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(391);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(372);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(371);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (lookahead == 'O' ||
          lookahead == 'Q' ||
          lookahead == 'o' ||
          lookahead == 'q') ADVANCE(443);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('H' <= lookahead && lookahead <= 'V') ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(464);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ';') ADVANCE(697);
      if (lookahead == '\\') SKIP(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '=') ADVANCE(86);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(3);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(5);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(4);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(6);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(2);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(8);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(7);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(9);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(40);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(41);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(42);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '!', 660,
        '"', 25,
        '$', 672,
        '%', 28,
        '\'', 27,
        '(', 662,
        '+', 649,
        '-', 651,
        '0', 682,
        ';', 697,
      );
      if (lookahead == '\\') SKIP(18);
      if (lookahead == '_') ADVANCE(133);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '~') ADVANCE(659);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(722);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(721);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(726);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(720);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(724);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(716);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(715);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(750);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(733);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(708);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(737);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('H' <= lookahead && lookahead <= 'W') ||
          ('h' <= lookahead && lookahead <= 'w')) ADVANCE(752);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(688);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == ';') ADVANCE(697);
      if (lookahead == '\\') SKIP(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(757);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(688);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '?') ADVANCE(668);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '*', 44,
        '?', 668,
        'A', 62,
        'a', 62,
        'D', 50,
        'd', 50,
        'I', 47,
        'i', 47,
        'U', 60,
        'u', 60,
        'X', 48,
        'x', 48,
      );
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(699);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(475);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(479);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '4') ADVANCE(475);
      END_STATE();
    case 36:
      if (lookahead == '6') ADVANCE(699);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == '6') ADVANCE(479);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == '6') ADVANCE(475);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == ';') ADVANCE(697);
      if (lookahead == '\\') SKIP(20);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(611);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(603);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40);
      if (lookahead == 'A' ||
          lookahead == 'O' ||
          lookahead == 'a' ||
          lookahead == 'o') ADVANCE(492);
      if (('C' <= lookahead && lookahead <= 'G') ||
          lookahead == 'S' ||
          ('c' <= lookahead && lookahead <= 'g') ||
          lookahead == 's') ADVANCE(622);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 41:
      if (lookahead == ';') ADVANCE(697);
      if (lookahead == '\\') SKIP(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      END_STATE();
    case 42:
      if (lookahead == ';') ADVANCE(697);
      if (lookahead == '\\') SKIP(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(634);
      END_STATE();
    case 44:
      if (lookahead == '?') ADVANCE(668);
      END_STATE();
    case 45:
      if (lookahead == '`') ADVANCE(688);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(678);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(678);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      END_STATE();
    case 65:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 66:
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 67:
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 68:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '\n', 82,
        '!', 661,
        '"', 25,
        '$', 673,
        '%', 656,
        '&', 643,
        '\'', 27,
        '(', 662,
        ')', 85,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '.', 94,
        '/', 653,
        ':', 666,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 665,
        'W', 291,
        '[', 80,
      );
      if (lookahead == '\\') SKIP(74);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == '_') ADVANCE(464);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(285);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '~') ADVANCE(659);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(347);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(357);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(323);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(458);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(325);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(418);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(296);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(374);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68);
      if (('H' <= lookahead && lookahead <= 'v')) ADVANCE(463);
      END_STATE();
    case 69:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '\n', 82,
        '!', 43,
        '$', 67,
        '%', 656,
        '&', 643,
        '(', 662,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '/', 653,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 664,
        'W', 496,
        '[', 80,
      );
      if (lookahead == '\\') SKIP(76);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == 'w') ADVANCE(494);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(526);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(554);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(515);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(536);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(537);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(556);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(555);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(516);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 70:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '\n', 82,
        '!', 43,
        '$', 67,
        '%', 656,
        '&', 643,
        '*', 652,
        '+', 648,
        ',', 84,
        '-', 650,
        '/', 653,
        ';', 697,
        '<', 636,
        '=', 632,
        '>', 638,
        '?', 664,
        '[', 80,
      );
      if (lookahead == '\\') SKIP(75);
      if (lookahead == '^') ADVANCE(642);
      if (lookahead == '|') ADVANCE(641);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(526);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(554);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(515);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(536);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(537);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(556);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(555);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(516);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(496);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 71:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '\n', 82,
        '!', 660,
        '"', 25,
        '$', 671,
        '%', 29,
        '\'', 27,
        '(', 83,
        ')', 85,
        '+', 649,
        ',', 84,
        '-', 651,
        '/', 89,
        '0', 682,
        ';', 697,
        '[', 80,
      );
      if (lookahead == '\\') SKIP(78);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '~') ADVANCE(659);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(278);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(220);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('H' <= lookahead && lookahead <= 'V') ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(281);
      END_STATE();
    case 72:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '\n', 82,
        '!', 660,
        '"', 25,
        '$', 671,
        '%', 29,
        '\'', 27,
        '(', 662,
        ')', 85,
        '+', 649,
        ',', 84,
        '-', 651,
        '/', 89,
        '0', 682,
        ';', 697,
        '[', 80,
      );
      if (lookahead == '\\') SKIP(78);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '~') ADVANCE(659);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(278);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(220);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('H' <= lookahead && lookahead <= 'V') ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(281);
      END_STATE();
    case 73:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '\n', 82,
        '!', 660,
        '"', 25,
        '$', 671,
        '%', 29,
        '\'', 27,
        '(', 662,
        '+', 649,
        '-', 651,
        '0', 682,
        ';', 697,
        '[', 80,
      );
      if (lookahead == '\\') SKIP(77);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '~') ADVANCE(659);
      if (lookahead == '.' ||
          lookahead == '?') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(278);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(220);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('H' <= lookahead && lookahead <= 'V') ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(281);
      END_STATE();
    case 74:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') SKIP(68);
      END_STATE();
    case 75:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') SKIP(70);
      END_STATE();
    case 76:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') SKIP(69);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') SKIP(73);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') SKIP(72);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_def_arg_pref);
      if (lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '=') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_def_arg_suf);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_def_arg_suf);
      if (lookahead == 'S' ||
          lookahead == 'U' ||
          lookahead == 's' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_def_arg_suf);
      ADVANCE_MAP(
        'S', 87,
        'U', 87,
        's', 87,
        'u', 87,
        'B', 88,
        'D', 88,
        'H', 88,
        'O', 88,
        'Q', 88,
        'T', 88,
        'X', 88,
        'Y', 88,
        'b', 88,
        'd', 88,
        'h', 88,
        'o', 88,
        'q', 88,
        't', 88,
        'x', 88,
        'y', 88,
      );
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_define_head);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_undefine_head);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_assign_head);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_label_def);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        '1', 98,
        '3', 96,
        '6', 97,
        ':', 93,
        'B', 112,
        'b', 112,
        'D', 115,
        'd', 115,
        'E', 101,
        'e', 101,
        'L', 689,
        'l', 689,
        'P', 163,
        'p', 163,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (('O' <= lookahead && lookahead <= 'Q') ||
          lookahead == 'T' ||
          lookahead == 'Y' ||
          ('o' <= lookahead && lookahead <= 'q') ||
          lookahead == 't' ||
          lookahead == 'y') ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        '2', 105,
        ':', 93,
        'E', 99,
        'e', 99,
        'P', 164,
        'p', 164,
        'B', 105,
        'D', 105,
        'b', 105,
        'd', 105,
        'H', 282,
        'O', 282,
        'Q', 282,
        'T', 282,
        'X', 282,
        'Y', 282,
        'h', 282,
        'o', 282,
        'q', 282,
        't', 282,
        'x', 282,
        'y', 282,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        '4', 105,
        ':', 93,
        'E', 99,
        'e', 99,
        'P', 164,
        'p', 164,
        'B', 105,
        'D', 105,
        'b', 105,
        'd', 105,
        'H', 282,
        'O', 282,
        'Q', 282,
        'T', 282,
        'X', 282,
        'Y', 282,
        'h', 282,
        'o', 282,
        'q', 282,
        't', 282,
        'x', 282,
        'y', 282,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        '6', 105,
        ':', 93,
        'E', 99,
        'e', 99,
        'P', 164,
        'p', 164,
        'B', 105,
        'D', 105,
        'b', 105,
        'd', 105,
        'H', 282,
        'O', 282,
        'Q', 282,
        'T', 282,
        'X', 282,
        'Y', 282,
        'h', 282,
        'o', 282,
        'q', 282,
        't', 282,
        'x', 282,
        'y', 282,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        '+', 63,
        '-', 63,
        'E', 99,
        'e', 99,
        'P', 164,
        'p', 164,
        'B', 105,
        'D', 105,
        'b', 105,
        'd', 105,
        'A', 105,
        'C', 105,
        'F', 105,
        'a', 105,
        'c', 105,
        'f', 105,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(104);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(282);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        '+', 63,
        '-', 63,
        'E', 101,
        'e', 101,
        'F', 102,
        'f', 102,
        'P', 163,
        'p', 163,
        'A', 115,
        'C', 115,
        'a', 115,
        'c', 115,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(104);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        '+', 63,
        '-', 63,
        'E', 101,
        'e', 101,
        'P', 163,
        'p', 163,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(104);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'A', 113,
        'a', 113,
        'E', 101,
        'e', 101,
        'P', 163,
        'p', 163,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        'C', 115,
        'F', 115,
        'c', 115,
        'f', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'B', 111,
        'b', 111,
        'D', 106,
        'd', 106,
        'E', 101,
        'e', 101,
        'F', 109,
        'f', 109,
        'I', 239,
        'i', 239,
        'P', 163,
        'p', 163,
        'Q', 264,
        'q', 264,
        'S', 692,
        's', 692,
        'X', 260,
        'x', 260,
        'A', 114,
        'C', 114,
        'a', 114,
        'c', 114,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'H', 281,
        'O', 281,
        'T', 281,
        'Y', 281,
        'h', 281,
        'o', 281,
        't', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 99,
        'e', 99,
        'P', 164,
        'p', 164,
        'B', 105,
        'D', 105,
        'b', 105,
        'd', 105,
        'A', 105,
        'C', 105,
        'F', 105,
        'a', 105,
        'c', 105,
        'f', 105,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(104);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(282);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 99,
        'e', 99,
        'P', 164,
        'p', 164,
        'B', 105,
        'D', 105,
        'b', 105,
        'd', 105,
        'H', 282,
        'O', 282,
        'Q', 282,
        'T', 282,
        'X', 282,
        'Y', 282,
        'h', 282,
        'o', 282,
        'q', 282,
        't', 282,
        'x', 282,
        'y', 282,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'I', 689,
        'i', 689,
        'P', 163,
        'p', 163,
        'X', 689,
        'x', 689,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
        'H', 281,
        'O', 281,
        'Q', 281,
        'T', 281,
        'Y', 281,
        'h', 281,
        'o', 281,
        'q', 281,
        't', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'I', 258,
        'i', 258,
        'L', 689,
        'l', 689,
        'N', 185,
        'n', 185,
        'P', 690,
        'p', 690,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
        'O', 281,
        'Q', 281,
        'T', 281,
        'Y', 281,
        'o', 281,
        'q', 281,
        't', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'L', 166,
        'l', 166,
        'P', 160,
        'p', 160,
        'S', 689,
        's', 689,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'L', 167,
        'l', 167,
        'P', 163,
        'p', 163,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'O', 223,
        'o', 223,
        'P', 162,
        'p', 162,
        'R', 140,
        'r', 140,
        'S', 689,
        's', 689,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'L', 689,
        'W', 689,
        'l', 689,
        'w', 689,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
        'Q', 281,
        'T', 281,
        'Y', 281,
        'q', 281,
        't', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'P', 689,
        'p', 689,
        'X', 689,
        'x', 689,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
        'H', 281,
        'O', 281,
        'Q', 281,
        'T', 281,
        'Y', 281,
        'h', 281,
        'o', 281,
        'q', 281,
        't', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'P', 163,
        'p', 163,
        'S', 236,
        's', 236,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'P', 163,
        'p', 163,
        'U', 214,
        'u', 214,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'P', 163,
        'p', 163,
        'X', 689,
        'x', 689,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
        'H', 281,
        'O', 281,
        'Q', 281,
        'T', 281,
        'Y', 281,
        'h', 281,
        'o', 281,
        'q', 281,
        't', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 101,
        'e', 101,
        'P', 163,
        'p', 163,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(281);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 194,
        ':', 93,
        'E', 100,
        'e', 100,
        'I', 690,
        'i', 690,
        'L', 689,
        'l', 689,
        'P', 163,
        'p', 163,
        'R', 140,
        'r', 140,
        'S', 689,
        's', 689,
        'B', 115,
        'D', 115,
        'b', 115,
        'd', 115,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'W', 281,
        'Z', 281,
        'w', 281,
        'z', 281,
        '#', 282,
        '$', 282,
        '?', 282,
        '@', 282,
        '~', 282,
        'A', 115,
        'C', 115,
        'F', 115,
        'a', 115,
        'c', 115,
        'f', 115,
        'O', 281,
        'Q', 281,
        'T', 281,
        'Y', 281,
        'o', 281,
        'q', 281,
        't', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (('G' <= lookahead && lookahead <= 'V') ||
          ('g' <= lookahead && lookahead <= 'v')) ADVANCE(281);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        '2', 669,
        'E', 119,
        'e', 119,
        'P', 290,
        'p', 290,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'X', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'x', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        '3', 117,
        'B', 131,
        'b', 131,
        'D', 134,
        'd', 134,
        'E', 119,
        'e', 119,
        'L', 689,
        'l', 689,
        'P', 290,
        'p', 290,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        '+', 63,
        '-', 63,
        'E', 119,
        'e', 119,
        'P', 290,
        'p', 290,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'A', 134,
        'C', 134,
        'F', 134,
        'a', 134,
        'c', 134,
        'f', 134,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(133);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'B', 129,
        'b', 129,
        'D', 121,
        'd', 121,
        'E', 119,
        'e', 119,
        'F', 127,
        'f', 127,
        'I', 399,
        'i', 399,
        'P', 290,
        'p', 290,
        'S', 692,
        's', 692,
        'A', 132,
        'C', 132,
        'a', 132,
        'c', 132,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'I', 689,
        'i', 689,
        'P', 290,
        'p', 290,
        'X', 689,
        'x', 689,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'I', 690,
        'i', 690,
        'P', 290,
        'p', 290,
        'R', 142,
        'r', 142,
        'W', 391,
        'w', 391,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'L', 689,
        'S', 689,
        'l', 689,
        's', 689,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'I', 690,
        'i', 690,
        'P', 290,
        'p', 290,
        'R', 142,
        'r', 142,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'L', 689,
        'S', 689,
        'l', 689,
        's', 689,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'L', 689,
        'l', 689,
        'N', 319,
        'n', 319,
        'P', 690,
        'p', 690,
        'Y', 427,
        'y', 427,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'O', 464,
        'Q', 464,
        'T', 464,
        'o', 464,
        'q', 464,
        't', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'L', 689,
        'l', 689,
        'N', 319,
        'n', 319,
        'P', 690,
        'p', 690,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'L', 689,
        'l', 689,
        'P', 290,
        'p', 290,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'L', 294,
        'l', 294,
        'P', 290,
        'p', 290,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'X', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'x', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'L', 294,
        'l', 294,
        'P', 284,
        'p', 284,
        'S', 689,
        's', 689,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'X', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'x', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'P', 689,
        'p', 689,
        'X', 689,
        'x', 689,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'P', 290,
        'p', 290,
        'R', 142,
        'r', 142,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'L', 689,
        'S', 689,
        'W', 689,
        'l', 689,
        's', 689,
        'w', 689,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'P', 290,
        'p', 290,
        'S', 669,
        's', 669,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'X', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'x', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'P', 290,
        'p', 290,
        'X', 689,
        'x', 689,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'P', 290,
        'p', 290,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'A', 134,
        'C', 134,
        'F', 134,
        'a', 134,
        'c', 134,
        'f', 134,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(133);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '.', 335,
        'E', 119,
        'e', 119,
        'P', 290,
        'p', 290,
        'B', 134,
        'D', 134,
        'b', 134,
        'd', 134,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'X', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'x', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '1', 156,
        '3', 147,
        '6', 154,
        'B', 420,
        'b', 420,
        'H', 689,
        'L', 689,
        'X', 689,
        'h', 689,
        'l', 689,
        'x', 689,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(156);
      if (lookahead == '3') ADVANCE(147);
      if (lookahead == '6') ADVANCE(154);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '1', 457,
        'B', 453,
        'b', 453,
        'D', 450,
        'd', 450,
        'E', 400,
        'e', 400,
        'F', 361,
        'f', 361,
        'I', 398,
        'i', 398,
        'S', 448,
        's', 448,
        '8', 693,
        '9', 693,
        'A', 444,
        'C', 444,
        'a', 444,
        'c', 444,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '1', 457,
        'B', 454,
        'b', 454,
        'D', 451,
        'd', 451,
        'E', 360,
        'e', 360,
        'F', 359,
        'f', 359,
        'I', 399,
        'i', 399,
        'S', 449,
        's', 449,
        '8', 693,
        '9', 693,
        'A', 445,
        'C', 445,
        'a', 445,
        'c', 445,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '1', 457,
        'B', 454,
        'b', 454,
        'D', 451,
        'd', 451,
        'F', 359,
        'f', 359,
        'I', 399,
        'i', 399,
        'S', 449,
        's', 449,
        '8', 693,
        '9', 693,
        'A', 445,
        'C', 445,
        'a', 445,
        'c', 445,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(694);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(694);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(159);
      if (lookahead == '3') ADVANCE(150);
      if (lookahead == '6') ADVANCE(155);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        '1', 277,
        ':', 93,
        'B', 275,
        'b', 275,
        'D', 273,
        'd', 273,
        'E', 241,
        'e', 241,
        'F', 212,
        'f', 212,
        'I', 239,
        'i', 239,
        'S', 272,
        's', 272,
        '8', 693,
        '9', 693,
        'A', 269,
        'C', 269,
        'a', 269,
        'c', 269,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(158);
      if (lookahead == '3') ADVANCE(149);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(157);
      if (lookahead == '3') ADVANCE(148);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(699);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(282);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(691);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(691);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(691);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(282);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(699);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(282);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        ':', 93,
        '_', 180,
        '+', 63,
        '-', 63,
        '#', 282,
        '$', 282,
        '.', 282,
        '?', 282,
        '@', 282,
        '~', 282,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(193);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        ':', 93,
        '+', 63,
        '-', 63,
        'U', 753,
        'u', 753,
        '#', 282,
        '$', 282,
        '.', 282,
        '?', 282,
        '@', 282,
        '~', 282,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        ':', 93,
        'A', 262,
        'a', 262,
        '#', 282,
        '$', 282,
        '.', 282,
        '9', 282,
        '?', 282,
        '@', 282,
        '_', 282,
        '~', 282,
      );
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(689);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(230);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(206);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(170);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        ':', 93,
        'C', 250,
        'c', 250,
        'D', 274,
        'd', 274,
        'I', 240,
        'i', 240,
        'O', 242,
        'o', 242,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        ':', 93,
        'E', 183,
        'e', 183,
        'S', 689,
        's', 689,
        'T', 169,
        't', 169,
        'W', 689,
        'w', 689,
        'I', 690,
        'P', 690,
        'i', 690,
        'p', 690,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(193);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(755);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(249);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(218);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (lookahead == 'E' ||
          lookahead == 'Z' ||
          lookahead == 'e' ||
          lookahead == 'z') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(281);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(265);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(267);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(698);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(204);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        ':', 93,
        'B', 270,
        'D', 270,
        'b', 270,
        'd', 270,
        'H', 282,
        'O', 282,
        'Q', 282,
        'T', 282,
        'X', 282,
        'Y', 282,
        'h', 282,
        'o', 282,
        'q', 282,
        't', 282,
        'x', 282,
        'y', 282,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'Z' ||
          lookahead == 'e' ||
          lookahead == 'z') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'P' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'X' ||
          lookahead == 'i' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'S' ||
          lookahead == 'p' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'p' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(693);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        ':', 93,
        'B', 281,
        'D', 281,
        'O', 281,
        'Q', 281,
        'T', 281,
        'W', 281,
        'Y', 281,
        'Z', 281,
        'b', 281,
        'd', 281,
        'o', 281,
        'q', 281,
        't', 281,
        'w', 281,
        'y', 281,
        'z', 281,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'X') ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(309);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(308);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(334);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(366);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'A', 433,
        'a', 433,
        '#', 464,
        '$', 464,
        '.', 464,
        '9', 464,
        '?', 464,
        '@', 464,
        '_', 464,
        '~', 464,
      );
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(689);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'B', 453,
        'b', 453,
        'D', 450,
        'd', 450,
        'F', 361,
        'f', 361,
        'I', 398,
        'i', 398,
        'Q', 435,
        'q', 435,
        'S', 692,
        's', 692,
        'X', 431,
        'x', 431,
        'A', 444,
        'C', 444,
        'a', 444,
        'c', 444,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(387);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(298);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(353);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(402);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'C', 417,
        'c', 417,
        'D', 452,
        'd', 452,
        'I', 399,
        'i', 399,
        'O', 401,
        'o', 401,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'C', 417,
        'c', 417,
        'D', 452,
        'd', 452,
        'I', 399,
        'i', 399,
        'O', 401,
        'o', 401,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(432);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(380);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(456);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(428);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(428);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(428);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'E', 342,
        'e', 342,
        'I', 690,
        'i', 690,
        'R', 141,
        'r', 141,
        'S', 689,
        's', 689,
        'H', 689,
        'L', 689,
        'X', 689,
        'h', 689,
        'l', 689,
        'x', 689,
        'B', 463,
        'D', 463,
        'O', 463,
        'Q', 463,
        'T', 463,
        'W', 463,
        'Y', 463,
        'Z', 463,
        'b', 463,
        'd', 463,
        'o', 463,
        'q', 463,
        't', 463,
        'w', 463,
        'y', 463,
        'z', 463,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'V') ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(463);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'E', 315,
        'e', 315,
        'S', 689,
        's', 689,
        'T', 297,
        't', 297,
        'W', 689,
        'w', 689,
        'I', 690,
        'P', 690,
        'i', 690,
        'p', 690,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'E', 343,
        'e', 343,
        'T', 407,
        't', 407,
        'I', 690,
        'P', 690,
        'i', 690,
        'p', 690,
        'S', 689,
        'W', 689,
        's', 689,
        'w', 689,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'E', 343,
        'e', 343,
        'T', 460,
        't', 460,
        'I', 690,
        'P', 690,
        'i', 690,
        'p', 690,
        'S', 689,
        'W', 689,
        's', 689,
        'w', 689,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(334);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(417);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(755);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(416);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'I', 430,
        'i', 430,
        'N', 317,
        'n', 317,
        'P', 690,
        'p', 690,
        'H', 689,
        'L', 689,
        'X', 689,
        'h', 689,
        'l', 689,
        'x', 689,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(413);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(283);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(439);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(314);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(311);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(369);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(369);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(370);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(339);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(340);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead == 'E' ||
          lookahead == 'Z' ||
          lookahead == 'e' ||
          lookahead == 'z') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(463);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(408);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'O', 379,
        'o', 379,
        'P', 436,
        'p', 436,
        'R', 141,
        'r', 141,
        'S', 689,
        's', 689,
        'H', 689,
        'L', 689,
        'W', 689,
        'X', 689,
        'h', 689,
        'l', 689,
        'w', 689,
        'x', 689,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(383);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(437);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(305);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(440);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '9' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(698);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(349);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(355);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'B', 446,
        'D', 446,
        'b', 446,
        'd', 446,
        'H', 464,
        'O', 464,
        'Q', 464,
        'T', 464,
        'X', 464,
        'Y', 464,
        'h', 464,
        'o', 464,
        'q', 464,
        't', 464,
        'x', 464,
        'y', 464,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'E' ||
          lookahead == 'Z' ||
          lookahead == 'e' ||
          lookahead == 'z') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(463);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'P' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'P' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'X' ||
          lookahead == 'i' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'I' ||
          lookahead == 'X' ||
          lookahead == 'i' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'P' ||
          lookahead == 'S' ||
          lookahead == 'p' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'p' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'p' ||
          lookahead == 'x') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(693);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '9' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      ADVANCE_MAP(
        'B', 463,
        'D', 463,
        'O', 463,
        'Q', 463,
        'T', 463,
        'W', 463,
        'Y', 463,
        'Z', 463,
        'b', 463,
        'd', 463,
        'o', 463,
        'q', 463,
        't', 463,
        'w', 463,
        'y', 463,
        'z', 463,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'X') ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_times_head);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_times_head);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_pseudo_instr_head_token1);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_pseudo_instr_head_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_pseudo_instr_head_token2);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_pseudo_instr_head_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_pseudo_instr_head_token3);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_pseudo_instr_head_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_pseudo_instr_head_token4);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_pseudo_instr_head_token4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_instr_prefix);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_instr_prefix);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(477);
      if (lookahead == 'E' ||
          lookahead == 'Z' ||
          lookahead == 'e' ||
          lookahead == 'z') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(588);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_instr_prefix);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'Z' ||
          lookahead == 'e' ||
          lookahead == 'z') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(588);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_instr_prefix);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_instr_prefix);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(39);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_instr_prefix);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(481);
      if (lookahead == 'E' ||
          lookahead == 'Z' ||
          lookahead == 'e' ||
          lookahead == 'z') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(628);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_instr_prefix);
      if (lookahead == 'E' ||
          lookahead == 'Z' ||
          lookahead == 'e' ||
          lookahead == 'z') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(628);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_instr_prefix);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_wrt);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_wrt);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_wrt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_wrt);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(703);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_wrt);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_wrt_special);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(572);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == '6') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(548);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(500);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(578);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(544);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(504);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_instr_name);
      ADVANCE_MAP(
        ':', 93,
        'E', 524,
        'e', 524,
        'S', 478,
        's', 478,
        'B', 467,
        'D', 467,
        'O', 467,
        'Q', 467,
        'T', 467,
        'W', 467,
        'Y', 467,
        'Z', 467,
        'b', 467,
        'd', 467,
        'o', 467,
        'q', 467,
        't', 467,
        'w', 467,
        'y', 467,
        'z', 467,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'X') ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(588);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(755);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(561);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(520);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(559);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(471);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(581);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(583);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(587);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(582);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(577);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(586);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(553);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(512);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(698);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(529);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(473);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(528);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(580);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(533);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_instr_name);
      ADVANCE_MAP(
        ':', 93,
        'B', 469,
        'D', 469,
        'O', 469,
        'Q', 469,
        'T', 469,
        'W', 469,
        'Y', 469,
        'Z', 469,
        'b', 469,
        'd', 469,
        'o', 469,
        'q', 469,
        't', 469,
        'w', 469,
        'y', 469,
        'z', 469,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'X') ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(588);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'r') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 't') ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(601);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(480);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(625);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_instr_name);
      ADVANCE_MAP(
        'S', 482,
        's', 482,
        'B', 468,
        'D', 468,
        'O', 468,
        'Q', 468,
        'T', 468,
        'W', 468,
        'Y', 468,
        'Z', 468,
        'b', 468,
        'd', 468,
        'o', 468,
        'q', 468,
        't', 468,
        'w', 468,
        'y', 468,
        'z', 468,
      );
      if (('A' <= lookahead && lookahead <= 'X') ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(628);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_instr_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_instr_name);
      ADVANCE_MAP(
        'B', 470,
        'D', 470,
        'O', 470,
        'Q', 470,
        'T', 470,
        'W', 470,
        'Y', 470,
        'Z', 470,
        'b', 470,
        'd', 470,
        'o', 470,
        'q', 470,
        't', 470,
        'w', 470,
        'y', 470,
        'z', 470,
      );
      if (('A' <= lookahead && lookahead <= 'X') ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_instr_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(644);
      if (lookahead == '=') ADVANCE(637);
      if (lookahead == '>') ADVANCE(635);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(640);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(639);
      if (lookahead == '>') ADVANCE(646);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(629);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(630);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(631);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '0') ADVANCE(682);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(684);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '0') ADVANCE(682);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(684);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(657);
      if (lookahead == '+') ADVANCE(658);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '%', 657,
        '+', 658,
        'A', 62,
        'a', 62,
        'D', 50,
        'd', 50,
        'I', 47,
        'i', 47,
        'U', 60,
        'u', 60,
        'X', 48,
        'x', 48,
      );
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_PERCENT_PLUS);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(634);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(39);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(464);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_macro_name);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '?') ADVANCE(667);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_op_size);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_dolar);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_dolar);
      if (lookahead == '$') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_dolar);
      if (lookahead == '$') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_dolar);
      if (lookahead == '$') ADVANCE(670);
      if (lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_float);
      ADVANCE_MAP(
        '.', 677,
        'E', 681,
        'e', 681,
        'P', 46,
        'p', 46,
        'B', 684,
        'D', 684,
        'b', 684,
        'd', 684,
        'A', 684,
        'C', 684,
        'F', 684,
        'a', 684,
        'c', 684,
        'f', 684,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(674);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(680);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(676);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_packed_bcd);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(678);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_int);
      ADVANCE_MAP(
        '.', 677,
        '+', 63,
        '-', 63,
        'E', 681,
        'e', 681,
        'P', 46,
        'p', 46,
        'B', 684,
        'D', 684,
        'b', 684,
        'd', 684,
        'A', 684,
        'C', 684,
        'F', 684,
        'a', 684,
        'c', 684,
        'f', 684,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(674);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(680);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_int);
      ADVANCE_MAP(
        '.', 677,
        'B', 684,
        'b', 684,
        'D', 684,
        'd', 684,
        'E', 681,
        'e', 681,
        'P', 679,
        'p', 679,
        'O', 686,
        'T', 686,
        'o', 686,
        't', 686,
        'A', 684,
        'C', 684,
        'F', 684,
        'a', 684,
        'c', 684,
        'f', 684,
        'H', 687,
        'Q', 687,
        'X', 687,
        'Y', 687,
        'h', 687,
        'q', 687,
        'x', 687,
        'y', 687,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_int);
      ADVANCE_MAP(
        '.', 677,
        'E', 681,
        'e', 681,
        'P', 679,
        'p', 679,
        'B', 684,
        'D', 684,
        'b', 684,
        'd', 684,
        'A', 684,
        'C', 684,
        'F', 684,
        'a', 684,
        'c', 684,
        'f', 684,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(683);
      if (set_contains(sym_int_character_set_1, 14, lookahead)) ADVANCE(680);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_int);
      ADVANCE_MAP(
        '.', 677,
        'E', 681,
        'e', 681,
        'P', 46,
        'p', 46,
        'B', 684,
        'D', 684,
        'b', 684,
        'd', 684,
        'H', 680,
        'O', 680,
        'Q', 680,
        'T', 680,
        'X', 680,
        'Y', 680,
        'h', 680,
        'o', 680,
        'q', 680,
        't', 680,
        'x', 680,
        'y', 680,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_int);
      ADVANCE_MAP(
        'B', 685,
        'D', 685,
        'b', 685,
        'd', 685,
        'H', 680,
        'O', 680,
        'Q', 680,
        'T', 680,
        'X', 680,
        'Y', 680,
        'h', 680,
        'o', 680,
        'q', 680,
        't', 680,
        'x', 680,
        'y', 680,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(685);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(684);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(689);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'I' ||
          lookahead == 'P' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(689);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'W' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'w') ADVANCE(689);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(689);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(689);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_directive_bits_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_directive_bits_token2);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_directive_segment_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_directive_segment_token2);
      if (lookahead == 'r') ADVANCE(702);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(703);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_directive_segment_token2);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_directive_segment_token2);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_directive_absolute_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_directive_glob_ext_stat_token1);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_directive_glob_ext_stat_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_directive_comm_token1);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        '1', 457,
        'B', 748,
        'b', 748,
        'D', 747,
        'd', 747,
        'F', 732,
        'f', 732,
        'I', 738,
        'i', 738,
        'S', 746,
        's', 746,
        '8', 693,
        '9', 693,
        'A', 745,
        'C', 745,
        'a', 745,
        'c', 745,
      );
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == '1') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == '3') ADVANCE(691);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == '_') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'B', 725,
        'b', 725,
        'D', 719,
        'd', 719,
        'E', 728,
        'e', 728,
        'F', 723,
        'f', 723,
        'I', 738,
        'i', 738,
        'P', 752,
        'p', 752,
        'S', 692,
        's', 692,
        'A', 727,
        'C', 727,
        'a', 727,
        'c', 727,
        'H', 752,
        'O', 752,
        'Q', 752,
        'T', 752,
        'X', 752,
        'Y', 752,
        'h', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'x', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'I', 689,
        'i', 689,
        'P', 752,
        'p', 752,
        'X', 689,
        'x', 689,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'H', 752,
        'O', 752,
        'Q', 752,
        'T', 752,
        'Y', 752,
        'h', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'I', 690,
        'i', 690,
        'P', 752,
        'p', 752,
        'R', 709,
        'r', 709,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'L', 689,
        'S', 689,
        'l', 689,
        's', 689,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'O', 752,
        'Q', 752,
        'T', 752,
        'Y', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'L', 689,
        'l', 689,
        'N', 718,
        'n', 718,
        'P', 690,
        'p', 690,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'O', 752,
        'Q', 752,
        'T', 752,
        'Y', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'L', 689,
        'l', 689,
        'P', 752,
        'p', 752,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'O', 752,
        'Q', 752,
        'T', 752,
        'Y', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'L', 712,
        'l', 712,
        'P', 752,
        'p', 752,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'H', 752,
        'O', 752,
        'Q', 752,
        'T', 752,
        'X', 752,
        'Y', 752,
        'h', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'x', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'L', 712,
        'l', 712,
        'P', 711,
        'p', 711,
        'S', 689,
        's', 689,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'H', 752,
        'O', 752,
        'Q', 752,
        'T', 752,
        'X', 752,
        'Y', 752,
        'h', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'x', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'P', 689,
        'p', 689,
        'X', 689,
        'x', 689,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'H', 752,
        'O', 752,
        'Q', 752,
        'T', 752,
        'Y', 752,
        'h', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'P', 752,
        'p', 752,
        'R', 709,
        'r', 709,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'H', 689,
        'X', 689,
        'h', 689,
        'x', 689,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'L', 689,
        'S', 689,
        'W', 689,
        'l', 689,
        's', 689,
        'w', 689,
        'O', 752,
        'Q', 752,
        'T', 752,
        'Y', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'P', 752,
        'p', 752,
        'X', 689,
        'x', 689,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'H', 752,
        'O', 752,
        'Q', 752,
        'T', 752,
        'Y', 752,
        'h', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 728,
        'e', 728,
        'P', 752,
        'p', 752,
        'B', 728,
        'D', 728,
        'b', 728,
        'd', 728,
        'A', 728,
        'C', 728,
        'F', 728,
        'a', 728,
        'c', 728,
        'f', 728,
        'H', 752,
        'O', 752,
        'Q', 752,
        'T', 752,
        'X', 752,
        'Y', 752,
        'h', 752,
        'o', 752,
        'q', 752,
        't', 752,
        'x', 752,
        'y', 752,
      );
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      ADVANCE_MAP(
        'E', 730,
        'e', 730,
        'T', 751,
        't', 751,
        'I', 690,
        'P', 690,
        'i', 690,
        'p', 690,
        'S', 689,
        'W', 689,
        's', 689,
        'w', 689,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(709);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(714);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(709);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(710);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(735);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(734);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'I' ||
          lookahead == 'P' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'I' ||
          lookahead == 'X' ||
          lookahead == 'i' ||
          lookahead == 'x') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'p' ||
          lookahead == 'x') ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_directive_comm_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_directive_misc_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_directive_misc_token2);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_directive_warning_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_directive_warning_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_directive_warning_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 69},
  [3] = {.lex_state = 70},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 70},
  [8] = {.lex_state = 70},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 70},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 70},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 71},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 73},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 73},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 73},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 70},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 70},
  [146] = {.lex_state = 70},
  [147] = {.lex_state = 70},
  [148] = {.lex_state = 70},
  [149] = {.lex_state = 70},
  [150] = {.lex_state = 70},
  [151] = {.lex_state = 70},
  [152] = {.lex_state = 70},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 70},
  [155] = {.lex_state = 70},
  [156] = {.lex_state = 70},
  [157] = {.lex_state = 70},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 70},
  [160] = {.lex_state = 70},
  [161] = {.lex_state = 70},
  [162] = {.lex_state = 70},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 24},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 71},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 40},
  [271] = {.lex_state = 71},
  [272] = {.lex_state = 26},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 40},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 40},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 41},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 3},
  [315] = {.lex_state = 42},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_define_head] = ACTIONS(1),
    [sym_undefine_head] = ACTIONS(1),
    [sym_assign_head] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_times_head] = ACTIONS(1),
    [aux_sym_pseudo_instr_head_token1] = ACTIONS(1),
    [aux_sym_pseudo_instr_head_token2] = ACTIONS(1),
    [aux_sym_pseudo_instr_head_token3] = ACTIONS(1),
    [aux_sym_pseudo_instr_head_token4] = ACTIONS(1),
    [sym_instr_prefix] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_wrt] = ACTIONS(1),
    [sym_wrt_special] = ACTIONS(1),
    [sym_instr_name] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_PLUS] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_expr_token1] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_dolar] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_directive_bits_token1] = ACTIONS(1),
    [aux_sym_directive_bits_token2] = ACTIONS(1),
    [aux_sym_directive_segment_token1] = ACTIONS(1),
    [aux_sym_directive_absolute_token1] = ACTIONS(1),
    [aux_sym_directive_glob_ext_stat_token1] = ACTIONS(1),
    [aux_sym_directive_comm_token1] = ACTIONS(1),
    [aux_sym_directive_misc_token1] = ACTIONS(1),
    [aux_sym_directive_warning_token1] = ACTIONS(1),
    [aux_sym_directive_warning_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(300),
    [sym_macro] = STATE(62),
    [sym_define] = STATE(154),
    [sym_undefine] = STATE(154),
    [sym_assign] = STATE(154),
    [sym_pseudo_instr] = STATE(62),
    [sym_pseudo_instr_head] = STATE(182),
    [sym_instr] = STATE(62),
    [sym_comment] = STATE(1),
    [sym_directive] = STATE(62),
    [sym_directive_bits] = STATE(306),
    [sym_directive_segment] = STATE(306),
    [sym_directive_absolute] = STATE(306),
    [sym_directive_glob_ext_stat] = STATE(306),
    [sym_directive_comm] = STATE(306),
    [sym_directive_misc] = STATE(306),
    [sym_directive_warning] = STATE(306),
    [aux_sym_program_repeat1] = STATE(62),
    [aux_sym_instr_repeat1] = STATE(276),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [sym_define_head] = ACTIONS(11),
    [sym_undefine_head] = ACTIONS(13),
    [sym_assign_head] = ACTIONS(15),
    [sym_label_def] = ACTIONS(17),
    [sym_times_head] = ACTIONS(19),
    [aux_sym_pseudo_instr_head_token1] = ACTIONS(21),
    [aux_sym_pseudo_instr_head_token2] = ACTIONS(21),
    [aux_sym_pseudo_instr_head_token3] = ACTIONS(21),
    [aux_sym_pseudo_instr_head_token4] = ACTIONS(21),
    [sym_instr_prefix] = ACTIONS(23),
    [sym_instr_name] = ACTIONS(25),
    [aux_sym_comment_token1] = ACTIONS(27),
    [aux_sym_directive_bits_token1] = ACTIONS(29),
    [aux_sym_directive_bits_token2] = ACTIONS(31),
    [aux_sym_directive_segment_token1] = ACTIONS(33),
    [aux_sym_directive_absolute_token1] = ACTIONS(35),
    [aux_sym_directive_glob_ext_stat_token1] = ACTIONS(37),
    [aux_sym_directive_comm_token1] = ACTIONS(39),
    [aux_sym_directive_misc_token1] = ACTIONS(41),
    [aux_sym_directive_warning_token1] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(49), 1,
      anon_sym_wrt,
    ACTIONS(51), 1,
      anon_sym_LPAREN2,
    STATE(2), 1,
      sym_comment,
    STATE(16), 1,
      sym_op_wrt,
    ACTIONS(47), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(45), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [69] = 6,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    STATE(3), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 18,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
    ACTIONS(53), 28,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [135] = 15,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    STATE(4), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(55), 9,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_QMARK,
    ACTIONS(53), 18,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [219] = 19,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    STATE(5), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(85), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(81), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [311] = 19,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    STATE(6), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(95), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(93), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [403] = 3,
    STATE(7), 1,
      sym_comment,
    ACTIONS(99), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(97), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [463] = 19,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    STATE(8), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(103), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(101), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [555] = 19,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    STATE(9), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(107), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(105), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [647] = 3,
    STATE(10), 1,
      sym_comment,
    ACTIONS(55), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(53), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [707] = 19,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    STATE(11), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(111), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(109), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [799] = 19,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    STATE(12), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(115), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(113), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [891] = 17,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    STATE(13), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(119), 9,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_QMARK,
    ACTIONS(117), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [979] = 3,
    STATE(14), 1,
      sym_comment,
    ACTIONS(123), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(121), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1039] = 4,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    STATE(15), 1,
      sym_comment,
    ACTIONS(55), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(53), 31,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1101] = 3,
    STATE(16), 1,
      sym_comment,
    ACTIONS(127), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(125), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1161] = 19,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(131), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(129), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1253] = 7,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    STATE(18), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 18,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
    ACTIONS(53), 26,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1321] = 18,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    STATE(19), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(55), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(53), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1411] = 11,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    STATE(20), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 14,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_QMARK,
    ACTIONS(53), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1487] = 12,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    STATE(21), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 13,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(53), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1565] = 14,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    STATE(22), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(55), 9,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_QMARK,
    ACTIONS(53), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1647] = 9,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    STATE(23), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 16,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(53), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1719] = 16,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      anon_sym_CARET_CARET,
    STATE(24), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(65), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(67), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(55), 9,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_QMARK,
    ACTIONS(53), 17,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1805] = 10,
    ACTIONS(61), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(73), 1,
      anon_sym_AMP,
    STATE(25), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 15,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_QMARK,
    ACTIONS(53), 24,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1879] = 3,
    STATE(26), 1,
      sym_comment,
    ACTIONS(135), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(133), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1939] = 3,
    STATE(27), 1,
      sym_comment,
    ACTIONS(139), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(137), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [1999] = 3,
    STATE(28), 1,
      sym_comment,
    ACTIONS(143), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(141), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [2059] = 3,
    STATE(29), 1,
      sym_comment,
    ACTIONS(147), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(145), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [2119] = 3,
    STATE(30), 1,
      sym_comment,
    ACTIONS(151), 20,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(149), 32,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [2179] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(153), 1,
      anon_sym_wrt,
    ACTIONS(155), 1,
      anon_sym_LPAREN2,
    STATE(31), 1,
      sym_comment,
    STATE(47), 1,
      sym_op_wrt,
    ACTIONS(47), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(45), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2239] = 12,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    STATE(6), 1,
      sym_expr,
    STATE(32), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
    ACTIONS(161), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(157), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [2307] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    STATE(33), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 16,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 18,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2364] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    STATE(34), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(53), 16,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(55), 16,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2423] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(135), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(133), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2474] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    STATE(36), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(117), 6,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(119), 7,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
  [2553] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(205), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(203), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2604] = 11,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(8), 1,
      sym_expr,
    STATE(38), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
    ACTIONS(209), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(207), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [2669] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(123), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(121), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2720] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(151), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(149), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2771] = 25,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      sym_times_head,
    ACTIONS(23), 1,
      sym_instr_prefix,
    ACTIONS(25), 1,
      sym_instr_name,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    STATE(41), 1,
      sym_comment,
    STATE(182), 1,
      sym_pseudo_instr_head,
    STATE(276), 1,
      aux_sym_instr_repeat1,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    STATE(145), 2,
      sym_pseudo_instr,
      sym_instr,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(21), 4,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [2864] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(143), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(141), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2915] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(139), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(137), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [2966] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(53), 5,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(55), 7,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
  [3047] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    STATE(45), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(53), 7,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(55), 7,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
  [3124] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    STATE(46), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(55), 7,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(53), 8,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3199] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(127), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(125), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3250] = 11,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(11), 1,
      sym_expr,
    STATE(48), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
    ACTIONS(219), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(217), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [3315] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(147), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(145), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3366] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    STATE(50), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 12,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(53), 14,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3433] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(197), 1,
      anon_sym_AMP,
    STATE(51), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 13,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(53), 14,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3498] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    STATE(52), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(53), 14,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
    ACTIONS(55), 14,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [3561] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    STATE(53), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(55), 7,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(53), 9,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3634] = 11,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(9), 1,
      sym_expr,
    STATE(54), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
    ACTIONS(223), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(221), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [3699] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    STATE(55), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 11,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(53), 14,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3768] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    STATE(56), 1,
      sym_comment,
    ACTIONS(55), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 21,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3821] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(55), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [3872] = 11,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(12), 1,
      sym_expr,
    STATE(58), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
    ACTIONS(227), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(225), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [3937] = 11,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(17), 1,
      sym_expr,
    STATE(59), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
    ACTIONS(231), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(229), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [4002] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(99), 18,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(97), 22,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      anon_sym_COLON,
  [4053] = 25,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      sym_define_head,
    ACTIONS(244), 1,
      sym_undefine_head,
    ACTIONS(247), 1,
      sym_assign_head,
    ACTIONS(250), 1,
      sym_label_def,
    ACTIONS(253), 1,
      sym_times_head,
    ACTIONS(259), 1,
      sym_instr_prefix,
    ACTIONS(262), 1,
      sym_instr_name,
    ACTIONS(265), 1,
      aux_sym_comment_token1,
    ACTIONS(268), 1,
      aux_sym_directive_bits_token1,
    ACTIONS(271), 1,
      aux_sym_directive_bits_token2,
    ACTIONS(274), 1,
      aux_sym_directive_segment_token1,
    ACTIONS(277), 1,
      aux_sym_directive_absolute_token1,
    ACTIONS(280), 1,
      aux_sym_directive_glob_ext_stat_token1,
    ACTIONS(283), 1,
      aux_sym_directive_comm_token1,
    ACTIONS(286), 1,
      aux_sym_directive_misc_token1,
    ACTIONS(289), 1,
      aux_sym_directive_warning_token1,
    STATE(182), 1,
      sym_pseudo_instr_head,
    STATE(276), 1,
      aux_sym_instr_repeat1,
    STATE(154), 3,
      sym_define,
      sym_undefine,
      sym_assign,
    ACTIONS(256), 4,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
    STATE(61), 6,
      sym_macro,
      sym_pseudo_instr,
      sym_instr,
      sym_comment,
      sym_directive,
      aux_sym_program_repeat1,
    STATE(306), 7,
      sym_directive_bits,
      sym_directive_segment,
      sym_directive_absolute,
      sym_directive_glob_ext_stat,
      sym_directive_comm,
      sym_directive_misc,
      sym_directive_warning,
  [4145] = 26,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_define_head,
    ACTIONS(13), 1,
      sym_undefine_head,
    ACTIONS(15), 1,
      sym_assign_head,
    ACTIONS(19), 1,
      sym_times_head,
    ACTIONS(23), 1,
      sym_instr_prefix,
    ACTIONS(25), 1,
      sym_instr_name,
    ACTIONS(27), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      aux_sym_directive_bits_token1,
    ACTIONS(31), 1,
      aux_sym_directive_bits_token2,
    ACTIONS(33), 1,
      aux_sym_directive_segment_token1,
    ACTIONS(35), 1,
      aux_sym_directive_absolute_token1,
    ACTIONS(37), 1,
      aux_sym_directive_glob_ext_stat_token1,
    ACTIONS(39), 1,
      aux_sym_directive_comm_token1,
    ACTIONS(41), 1,
      aux_sym_directive_misc_token1,
    ACTIONS(43), 1,
      aux_sym_directive_warning_token1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 1,
      sym_label_def,
    STATE(62), 1,
      sym_comment,
    STATE(182), 1,
      sym_pseudo_instr_head,
    STATE(276), 1,
      aux_sym_instr_repeat1,
    STATE(154), 3,
      sym_define,
      sym_undefine,
      sym_assign,
    ACTIONS(21), 4,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
    STATE(61), 5,
      sym_macro,
      sym_pseudo_instr,
      sym_instr,
      sym_directive,
      aux_sym_program_repeat1,
    STATE(306), 7,
      sym_directive_bits,
      sym_directive_segment,
      sym_directive_absolute,
      sym_directive_glob_ext_stat,
      sym_directive_comm,
      sym_directive_misc,
      sym_directive_warning,
  [4239] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(298), 1,
      anon_sym_wrt,
    ACTIONS(300), 1,
      anon_sym_LPAREN2,
    STATE(63), 1,
      sym_comment,
    STATE(104), 1,
      sym_op_wrt,
    ACTIONS(47), 12,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_directive_segment_token2,
    ACTIONS(45), 19,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
  [4290] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(302), 1,
      anon_sym_wrt,
    ACTIONS(304), 1,
      anon_sym_LPAREN2,
    STATE(64), 1,
      sym_comment,
    STATE(71), 1,
      sym_op_wrt,
    ACTIONS(47), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(45), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [4341] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(147), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(145), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [4383] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(151), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(149), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [4425] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(139), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(137), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [4467] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(143), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(141), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [4509] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(151), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(149), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [4551] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(147), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(145), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [4593] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(71), 1,
      sym_comment,
    ACTIONS(127), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(125), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [4635] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(205), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(203), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [4677] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(135), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(133), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [4719] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_comment,
    STATE(256), 1,
      aux_sym_call_repeat1,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [4793] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_comment,
    STATE(262), 1,
      aux_sym_call_repeat1,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [4867] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      anon_sym_CARET_CARET,
    ACTIONS(314), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(76), 1,
      sym_comment,
    ACTIONS(55), 2,
      sym_ident,
      anon_sym_QMARK,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(318), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [4935] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(314), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(77), 1,
      sym_comment,
    ACTIONS(55), 2,
      sym_ident,
      anon_sym_QMARK,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(53), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(318), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5001] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(78), 1,
      sym_comment,
    ACTIONS(55), 2,
      sym_ident,
      anon_sym_QMARK,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(53), 5,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
    ACTIONS(318), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5065] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(79), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 6,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_QMARK,
    ACTIONS(53), 10,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5125] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      anon_sym_CARET_CARET,
    ACTIONS(314), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      sym_ident,
    ACTIONS(344), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(346), 1,
      anon_sym_QMARK,
    STATE(80), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(318), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5199] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(81), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 7,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_QMARK,
    ACTIONS(53), 10,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5257] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(354), 1,
      anon_sym_CARET_CARET,
    ACTIONS(356), 1,
      anon_sym_AMP_AMP,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    STATE(82), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_LF,
      aux_sym_directive_segment_token2,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(358), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(360), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5329] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(258), 1,
      aux_sym_call_repeat1,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5403] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(84), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 8,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_QMARK,
    ACTIONS(53), 10,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5459] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(352), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(354), 1,
      anon_sym_CARET_CARET,
    ACTIONS(356), 1,
      anon_sym_AMP_AMP,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(85), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(117), 4,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
    ACTIONS(358), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(360), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5527] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym_comment,
    STATE(269), 1,
      aux_sym_pseudo_instr_repeat1,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5601] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(87), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 9,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(53), 10,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5655] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(88), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 11,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
    ACTIONS(53), 12,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
  [5705] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(89), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 11,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_QMARK,
    ACTIONS(53), 14,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5753] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    STATE(90), 1,
      sym_comment,
    ACTIONS(55), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(53), 17,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
  [5797] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      anon_sym_CARET_CARET,
    ACTIONS(314), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(344), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(346), 1,
      anon_sym_QMARK,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      sym_ident,
    STATE(91), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(318), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5871] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(55), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(53), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [5913] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      anon_sym_COLON,
    STATE(93), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [5987] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(99), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(97), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [6029] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(123), 13,
      sym_ident,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
    ACTIONS(121), 18,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
  [6071] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(123), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(121), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6113] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      anon_sym_CARET_CARET,
    ACTIONS(314), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(344), 1,
      anon_sym_PIPE_PIPE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(119), 2,
      sym_ident,
      anon_sym_QMARK,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(318), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6183] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(98), 1,
      sym_comment,
    ACTIONS(99), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(97), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6225] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(99), 1,
      sym_comment,
    ACTIONS(55), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6267] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(100), 1,
      sym_comment,
    ACTIONS(55), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 19,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6311] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(135), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(133), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6353] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(102), 1,
      sym_comment,
    ACTIONS(205), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(203), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6395] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(103), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 9,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 16,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6443] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(127), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(125), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6485] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      sym_ident,
    ACTIONS(312), 1,
      anon_sym_CARET_CARET,
    ACTIONS(314), 1,
      anon_sym_AMP_AMP,
    ACTIONS(320), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(344), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(346), 1,
      anon_sym_QMARK,
    STATE(105), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(326), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(328), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(334), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(332), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(318), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6557] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(106), 1,
      sym_comment,
    ACTIONS(143), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(141), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6599] = 20,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_comment,
    STATE(265), 1,
      aux_sym_call_repeat1,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6673] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(108), 1,
      sym_comment,
    ACTIONS(139), 11,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(137), 20,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT_PLUS,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6715] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(352), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(354), 1,
      anon_sym_CARET_CARET,
    ACTIONS(356), 1,
      anon_sym_AMP_AMP,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    STATE(109), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(53), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_directive_segment_token2,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(358), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(360), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6785] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      anon_sym_CARET_CARET,
    ACTIONS(356), 1,
      anon_sym_AMP_AMP,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(110), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(358), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(53), 5,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
    ACTIONS(360), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [6851] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_AMP_AMP,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(111), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(358), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(360), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(53), 6,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6915] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(112), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(358), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(360), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
    ACTIONS(53), 7,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [6977] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(113), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(53), 12,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [7037] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      anon_sym_CARET,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(114), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 5,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(53), 12,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [7095] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(115), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 6,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(53), 12,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [7151] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(116), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(370), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 7,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
    ACTIONS(53), 12,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [7205] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(378), 1,
      anon_sym_PERCENT_PLUS,
    STATE(117), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(374), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(55), 9,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(53), 14,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET_CARET,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_QMARK,
      aux_sym_directive_segment_token2,
  [7255] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    STATE(118), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(400), 2,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7324] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7395] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(404), 1,
      anon_sym_LF,
    STATE(120), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7466] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(406), 1,
      anon_sym_COLON,
    STATE(121), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7537] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(408), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7608] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7679] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(412), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7750] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    STATE(125), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7819] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    STATE(126), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(404), 2,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7888] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [7959] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(418), 1,
      anon_sym_COLON,
    STATE(128), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8030] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    STATE(129), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8099] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    STATE(130), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(420), 2,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8168] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(420), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8239] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(422), 1,
      anon_sym_COLON,
    STATE(132), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8310] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(424), 1,
      anon_sym_COLON,
    STATE(133), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8381] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8452] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8523] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    STATE(136), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(400), 2,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8592] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8663] = 19,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_PLUS,
    ACTIONS(183), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_CARET_CARET,
    ACTIONS(187), 1,
      anon_sym_AMP_AMP,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_QMARK,
    ACTIONS(432), 1,
      anon_sym_LF,
    STATE(138), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_LT_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(175), 3,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
    ACTIONS(191), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ_GT,
  [8734] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(434), 1,
      anon_sym_LF,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(130), 1,
      sym_expr,
    STATE(139), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__op_size,
    STATE(277), 1,
      sym_op,
    STATE(289), 1,
      sym_address,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [8797] = 18,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(456), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_expr,
    STATE(140), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__op_size,
    STATE(287), 1,
      sym_op,
    STATE(289), 1,
      sym_address,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [8860] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(131), 1,
      sym_expr,
    STATE(141), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym__op_size,
    STATE(289), 1,
      sym_address,
    STATE(308), 1,
      sym_op,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [8920] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(131), 1,
      sym_expr,
    STATE(142), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym__op_size,
    STATE(289), 1,
      sym_address,
    STATE(319), 1,
      sym_op,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [8980] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(130), 1,
      sym_expr,
    STATE(143), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__op_size,
    STATE(278), 1,
      sym_op,
    STATE(289), 1,
      sym_address,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9040] = 17,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(130), 1,
      sym_expr,
    STATE(144), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__op_size,
    STATE(280), 1,
      sym_op,
    STATE(289), 1,
      sym_address,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9100] = 3,
    STATE(145), 1,
      sym_comment,
    ACTIONS(460), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(458), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9131] = 3,
    STATE(146), 1,
      sym_comment,
    ACTIONS(464), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(462), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9162] = 3,
    STATE(147), 1,
      sym_comment,
    ACTIONS(468), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(466), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9193] = 3,
    STATE(148), 1,
      sym_comment,
    ACTIONS(472), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(470), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9224] = 3,
    STATE(149), 1,
      sym_comment,
    ACTIONS(476), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(474), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9255] = 3,
    STATE(150), 1,
      sym_comment,
    ACTIONS(480), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(478), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9286] = 3,
    STATE(151), 1,
      sym_comment,
    ACTIONS(484), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(482), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9317] = 3,
    STATE(152), 1,
      sym_comment,
    ACTIONS(488), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(486), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9348] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(120), 1,
      sym_expr,
    STATE(153), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym__op_size,
    STATE(286), 1,
      sym_address,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9405] = 3,
    STATE(154), 1,
      sym_comment,
    ACTIONS(492), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(490), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9436] = 3,
    STATE(155), 1,
      sym_comment,
    ACTIONS(496), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(494), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9467] = 3,
    STATE(156), 1,
      sym_comment,
    ACTIONS(500), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(498), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9498] = 3,
    STATE(157), 1,
      sym_comment,
    ACTIONS(504), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(502), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9529] = 16,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(438), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(126), 1,
      sym_expr,
    STATE(158), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym__op_size,
    STATE(286), 1,
      sym_address,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9586] = 3,
    STATE(159), 1,
      sym_comment,
    ACTIONS(508), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(506), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9617] = 3,
    STATE(160), 1,
      sym_comment,
    ACTIONS(512), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(510), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9648] = 3,
    STATE(161), 1,
      sym_comment,
    ACTIONS(516), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(514), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9679] = 3,
    STATE(162), 1,
      sym_comment,
    ACTIONS(520), 8,
      sym_label_def,
      sym_times_head,
      aux_sym_pseudo_instr_head_token1,
      aux_sym_pseudo_instr_head_token2,
      aux_sym_pseudo_instr_head_token3,
      aux_sym_pseudo_instr_head_token4,
      sym_instr_prefix,
      sym_instr_name,
    ACTIONS(518), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
      sym_define_head,
      sym_undefine_head,
      sym_assign_head,
      aux_sym_comment_token1,
      aux_sym_directive_bits_token1,
      aux_sym_directive_bits_token2,
      aux_sym_directive_segment_token1,
      aux_sym_directive_absolute_token1,
      aux_sym_directive_glob_ext_stat_token1,
      aux_sym_directive_comm_token1,
      aux_sym_directive_misc_token1,
      aux_sym_directive_warning_token1,
  [9710] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      anon_sym_LF,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      sym_ident,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(535), 1,
      anon_sym_COLON,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    STATE(91), 1,
      sym_expr,
    STATE(163), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9764] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      sym_ident,
    STATE(80), 1,
      sym_expr,
    STATE(164), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9815] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(123), 1,
      sym_expr,
    STATE(165), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym__op_size,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9866] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      sym_op_size,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(137), 1,
      sym_expr,
    STATE(165), 1,
      aux_sym__op_size,
    STATE(166), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9917] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_expr,
    STATE(167), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [9965] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(554), 1,
      sym_ident,
    STATE(105), 1,
      sym_expr,
    STATE(168), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10013] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_expr,
    STATE(169), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10061] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(560), 1,
      sym_ident,
    STATE(105), 1,
      sym_expr,
    STATE(170), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10109] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_expr,
    STATE(171), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10157] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_expr,
    STATE(172), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10205] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    ACTIONS(566), 1,
      aux_sym_directive_comm_token2,
    STATE(138), 1,
      sym_expr,
    STATE(173), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10253] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(100), 1,
      sym_expr,
    STATE(174), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10298] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(84), 1,
      sym_expr,
    STATE(175), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10343] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(129), 1,
      sym_expr,
    STATE(176), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10388] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(125), 1,
      sym_expr,
    STATE(177), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10433] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(122), 1,
      sym_expr,
    STATE(178), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10478] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(124), 1,
      sym_expr,
    STATE(179), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10523] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(85), 1,
      sym_expr,
    STATE(180), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10568] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(128), 1,
      sym_expr,
    STATE(181), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10613] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(86), 1,
      sym_expr,
    STATE(182), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10658] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(5), 1,
      sym_expr,
    STATE(183), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [10699] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(49), 1,
      sym_expr,
    STATE(184), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10744] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(119), 1,
      sym_expr,
    STATE(185), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10789] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(82), 1,
      sym_expr,
    STATE(186), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10834] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(135), 1,
      sym_expr,
    STATE(187), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10879] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(29), 1,
      sym_expr,
    STATE(188), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [10920] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(99), 1,
      sym_expr,
    STATE(189), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [10965] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(132), 1,
      sym_expr,
    STATE(190), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11010] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(134), 1,
      sym_expr,
    STATE(191), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11055] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(36), 1,
      sym_expr,
    STATE(192), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11100] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(133), 1,
      sym_expr,
    STATE(193), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11145] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(19), 1,
      sym_expr,
    STATE(194), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11186] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(24), 1,
      sym_expr,
    STATE(195), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11227] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(4), 1,
      sym_expr,
    STATE(196), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11268] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(22), 1,
      sym_expr,
    STATE(197), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11309] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(21), 1,
      sym_expr,
    STATE(198), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11350] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(20), 1,
      sym_expr,
    STATE(199), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11391] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(25), 1,
      sym_expr,
    STATE(200), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11432] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(23), 1,
      sym_expr,
    STATE(201), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11473] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(18), 1,
      sym_expr,
    STATE(202), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11514] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(3), 1,
      sym_expr,
    STATE(203), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11555] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(15), 1,
      sym_expr,
    STATE(204), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11596] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(10), 1,
      sym_expr,
    STATE(205), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [11637] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(103), 1,
      sym_expr,
    STATE(206), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11682] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(117), 1,
      sym_expr,
    STATE(207), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11727] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(118), 1,
      sym_expr,
    STATE(208), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11772] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(127), 1,
      sym_expr,
    STATE(209), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11817] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(116), 1,
      sym_expr,
    STATE(210), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11862] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(115), 1,
      sym_expr,
    STATE(211), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11907] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(114), 1,
      sym_expr,
    STATE(212), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11952] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(113), 1,
      sym_expr,
    STATE(213), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [11997] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(112), 1,
      sym_expr,
    STATE(214), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12042] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(111), 1,
      sym_expr,
    STATE(215), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12087] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(110), 1,
      sym_expr,
    STATE(216), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12132] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(109), 1,
      sym_expr,
    STATE(217), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12177] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(121), 1,
      sym_expr,
    STATE(218), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12222] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_LPAREN2,
    STATE(13), 1,
      sym_expr,
    STATE(219), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(165), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(171), 3,
      sym_macro_name,
      sym_string,
      sym_register,
    STATE(26), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
    ACTIONS(173), 4,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [12263] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(57), 1,
      sym_expr,
    STATE(220), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12308] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(56), 1,
      sym_expr,
    STATE(221), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12353] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(33), 1,
      sym_expr,
    STATE(222), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12398] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(70), 1,
      sym_expr,
    STATE(223), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12443] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(34), 1,
      sym_expr,
    STATE(224), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12488] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(52), 1,
      sym_expr,
    STATE(225), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12533] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(51), 1,
      sym_expr,
    STATE(226), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12578] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(50), 1,
      sym_expr,
    STATE(227), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12623] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(76), 1,
      sym_expr,
    STATE(228), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12668] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(77), 1,
      sym_expr,
    STATE(229), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12713] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(78), 1,
      sym_expr,
    STATE(230), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12758] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(79), 1,
      sym_expr,
    STATE(231), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12803] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(81), 1,
      sym_expr,
    STATE(232), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12848] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(41), 1,
      sym_expr,
    STATE(233), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12893] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(87), 1,
      sym_expr,
    STATE(234), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12938] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(88), 1,
      sym_expr,
    STATE(235), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [12983] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(89), 1,
      sym_expr,
    STATE(236), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13028] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(90), 1,
      sym_expr,
    STATE(237), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13073] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(92), 1,
      sym_expr,
    STATE(238), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13118] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(55), 1,
      sym_expr,
    STATE(239), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13163] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(53), 1,
      sym_expr,
    STATE(240), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13208] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(46), 1,
      sym_expr,
    STATE(241), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13253] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(45), 1,
      sym_expr,
    STATE(242), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13298] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(44), 1,
      sym_expr,
    STATE(243), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13343] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(574), 1,
      anon_sym_LPAREN2,
    ACTIONS(578), 1,
      sym_dolar,
    ACTIONS(582), 1,
      sym_string,
    STATE(65), 1,
      sym_expr,
    STATE(244), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(576), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(570), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(580), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(101), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13388] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(136), 1,
      sym_expr,
    STATE(245), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13433] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN2,
    ACTIONS(539), 1,
      sym_dolar,
    ACTIONS(543), 1,
      sym_string,
    ACTIONS(584), 1,
      sym_ident,
    STATE(97), 1,
      sym_expr,
    STATE(246), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(529), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(541), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(73), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13478] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ident,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      sym_dolar,
    ACTIONS(454), 1,
      sym_string,
    STATE(93), 1,
      sym_expr,
    STATE(247), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(446), 2,
      sym_macro_name,
      sym_register,
    ACTIONS(440), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
    ACTIONS(452), 3,
      sym_float,
      sym_packed_bcd,
      sym_int,
    STATE(35), 3,
      sym_ident_wrt,
      sym_call,
      sym__constant,
  [13523] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(590), 1,
      sym_op_size,
    STATE(248), 2,
      aux_sym__op_size,
      sym_comment,
    ACTIONS(588), 7,
      anon_sym_LBRACK2,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_LPAREN2,
      sym_macro_name,
      sym_string,
      sym_register,
    ACTIONS(586), 8,
      sym_ident,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [13553] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(249), 1,
      sym_comment,
    ACTIONS(595), 7,
      anon_sym_LBRACK2,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_LPAREN2,
      sym_macro_name,
      sym_string,
      sym_register,
    ACTIONS(593), 9,
      sym_ident,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
      sym_op_size,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [13580] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      aux_sym_directive_bits_token1,
    ACTIONS(31), 1,
      aux_sym_directive_bits_token2,
    ACTIONS(33), 1,
      aux_sym_directive_segment_token1,
    ACTIONS(35), 1,
      aux_sym_directive_absolute_token1,
    ACTIONS(37), 1,
      aux_sym_directive_glob_ext_stat_token1,
    ACTIONS(39), 1,
      aux_sym_directive_comm_token1,
    ACTIONS(41), 1,
      aux_sym_directive_misc_token1,
    ACTIONS(43), 1,
      aux_sym_directive_warning_token1,
    STATE(250), 1,
      sym_comment,
    STATE(301), 1,
      sym_directive,
    STATE(295), 7,
      sym_directive_bits,
      sym_directive_segment,
      sym_directive_absolute,
      sym_directive_glob_ext_stat,
      sym_directive_comm,
      sym_directive_misc,
      sym_directive_warning,
  [13623] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(251), 1,
      sym_comment,
    ACTIONS(599), 6,
      anon_sym_TILDE,
      anon_sym_BANG,
      anon_sym_LPAREN2,
      sym_macro_name,
      sym_string,
      sym_register,
    ACTIONS(597), 8,
      sym_ident,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_expr_token1,
      sym_dolar,
      sym_float,
      sym_packed_bcd,
      sym_int,
  [13648] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    ACTIONS(603), 1,
      sym_def_arg_pref,
    ACTIONS(605), 1,
      sym_ident,
    STATE(252), 1,
      sym_comment,
    STATE(291), 1,
      sym_def_arg,
  [13667] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(603), 1,
      sym_def_arg_pref,
    ACTIONS(605), 1,
      sym_ident,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym_comment,
    STATE(291), 1,
      sym_def_arg,
  [13686] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(603), 1,
      sym_def_arg_pref,
    ACTIONS(605), 1,
      sym_ident,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      sym_comment,
    STATE(257), 1,
      sym_def_arg,
  [13705] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      aux_sym_directive_segment_token2,
    STATE(255), 1,
      sym_comment,
    STATE(264), 1,
      aux_sym_directive_segment_repeat1,
  [13721] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_call_repeat1,
  [13737] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      sym_comment,
    STATE(273), 1,
      aux_sym_define_repeat1,
  [13753] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym_comment,
    STATE(261), 1,
      aux_sym_call_repeat1,
  [13769] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(259), 2,
      sym_comment,
      aux_sym_pseudo_instr_repeat1,
  [13783] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(630), 1,
      sym_def_arg_suf,
    STATE(260), 1,
      sym_comment,
    ACTIONS(628), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13797] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(261), 2,
      sym_comment,
      aux_sym_call_repeat1,
  [13811] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_call_repeat1,
    STATE(262), 1,
      sym_comment,
  [13827] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(641), 1,
      anon_sym_EQ,
    STATE(263), 1,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_LF,
      aux_sym_directive_segment_token2,
  [13841] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(613), 1,
      aux_sym_directive_segment_token2,
    ACTIONS(643), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_directive_segment_repeat1,
  [13857] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_call_repeat1,
    STATE(265), 1,
      sym_comment,
  [13873] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      sym_ident,
    STATE(266), 1,
      sym_comment,
    STATE(267), 1,
      aux_sym_directive_glob_ext_stat_repeat1,
  [13889] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 1,
      sym_ident,
    STATE(267), 2,
      sym_comment,
      aux_sym_directive_glob_ext_stat_repeat1,
  [13903] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(268), 2,
      sym_comment,
      aux_sym_define_repeat1,
  [13917] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_pseudo_instr_repeat1,
    STATE(269), 1,
      sym_comment,
  [13933] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(665), 1,
      sym_instr_prefix,
    ACTIONS(668), 1,
      sym_instr_name,
    STATE(270), 2,
      sym_comment,
      aux_sym_instr_repeat1,
  [13947] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(672), 1,
      sym_def_arg_suf,
    STATE(271), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13961] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(674), 1,
      sym_ident,
    ACTIONS(676), 1,
      aux_sym_directive_warning_token2,
    ACTIONS(678), 1,
      aux_sym_directive_warning_token3,
    STATE(272), 1,
      sym_comment,
  [13977] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      aux_sym_define_repeat1,
    STATE(273), 1,
      sym_comment,
  [13993] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(686), 1,
      aux_sym_directive_segment_token2,
    STATE(274), 2,
      sym_comment,
      aux_sym_directive_segment_repeat1,
  [14007] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(603), 1,
      sym_def_arg_pref,
    ACTIONS(605), 1,
      sym_ident,
    STATE(275), 1,
      sym_comment,
    STATE(291), 1,
      sym_def_arg,
  [14023] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      sym_instr_prefix,
    ACTIONS(689), 1,
      sym_instr_name,
    STATE(270), 1,
      aux_sym_instr_repeat1,
    STATE(276), 1,
      sym_comment,
  [14039] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      sym_comment,
  [14052] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(695), 1,
      anon_sym_LF,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      sym_comment,
  [14065] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(279), 1,
      sym_comment,
    ACTIONS(699), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14076] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      sym_comment,
  [14089] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(281), 1,
      sym_comment,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14100] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(282), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [14111] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(649), 1,
      sym_ident,
    STATE(266), 1,
      aux_sym_directive_glob_ext_stat_repeat1,
    STATE(283), 1,
      sym_comment,
  [14124] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(284), 1,
      sym_comment,
    ACTIONS(709), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [14135] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(285), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_LF,
      sym_ident,
  [14146] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(286), 1,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [14157] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(713), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      sym_comment,
  [14170] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(288), 1,
      sym_comment,
    ACTIONS(717), 2,
      sym_instr_prefix,
      sym_instr_name,
  [14181] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(289), 1,
      sym_comment,
    ACTIONS(719), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [14192] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(290), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_LF,
      sym_ident,
  [14203] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(291), 1,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14214] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(723), 1,
      sym_ident,
    STATE(292), 1,
      sym_comment,
  [14224] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(725), 1,
      sym_ident,
    STATE(293), 1,
      sym_comment,
  [14234] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(727), 1,
      sym_ident,
    STATE(294), 1,
      sym_comment,
  [14244] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(295), 1,
      sym_comment,
  [14254] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(731), 1,
      anon_sym_EQ,
    STATE(296), 1,
      sym_comment,
  [14264] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(733), 1,
      sym_wrt_special,
    STATE(297), 1,
      sym_comment,
  [14274] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(432), 1,
      anon_sym_LF,
    STATE(298), 1,
      sym_comment,
  [14284] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(735), 1,
      anon_sym_LF,
    STATE(299), 1,
      sym_comment,
  [14294] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      sym_comment,
  [14304] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      sym_comment,
  [14314] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(741), 1,
      aux_sym_directive_misc_token2,
    STATE(302), 1,
      sym_comment,
  [14324] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(743), 1,
      sym_wrt_special,
    STATE(303), 1,
      sym_comment,
  [14334] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(745), 1,
      sym_ident,
    STATE(304), 1,
      sym_comment,
  [14344] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(747), 1,
      anon_sym_LF,
    STATE(305), 1,
      sym_comment,
  [14354] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(749), 1,
      anon_sym_LF,
    STATE(306), 1,
      sym_comment,
  [14364] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(751), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_comment,
  [14374] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(753), 1,
      anon_sym_LF,
    STATE(308), 1,
      sym_comment,
  [14384] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(755), 1,
      sym_wrt_special,
    STATE(309), 1,
      sym_comment,
  [14394] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(757), 1,
      anon_sym_LF,
    STATE(310), 1,
      sym_comment,
  [14404] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(759), 1,
      sym_ident,
    STATE(311), 1,
      sym_comment,
  [14414] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(761), 1,
      sym_ident,
    STATE(312), 1,
      sym_comment,
  [14424] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(763), 1,
      sym_ident,
    STATE(313), 1,
      sym_comment,
  [14434] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(765), 1,
      sym_wrt_special,
    STATE(314), 1,
      sym_comment,
  [14444] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(767), 1,
      aux_sym_directive_glob_ext_stat_token2,
    STATE(315), 1,
      sym_comment,
  [14454] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(769), 1,
      anon_sym_LF,
    STATE(316), 1,
      sym_comment,
  [14464] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(771), 1,
      sym_ident,
    STATE(317), 1,
      sym_comment,
  [14474] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(318), 1,
      sym_comment,
  [14484] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(773), 1,
      anon_sym_LF,
    STATE(319), 1,
      sym_comment,
  [14494] = 1,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 135,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 403,
  [SMALL_STATE(8)] = 463,
  [SMALL_STATE(9)] = 555,
  [SMALL_STATE(10)] = 647,
  [SMALL_STATE(11)] = 707,
  [SMALL_STATE(12)] = 799,
  [SMALL_STATE(13)] = 891,
  [SMALL_STATE(14)] = 979,
  [SMALL_STATE(15)] = 1039,
  [SMALL_STATE(16)] = 1101,
  [SMALL_STATE(17)] = 1161,
  [SMALL_STATE(18)] = 1253,
  [SMALL_STATE(19)] = 1321,
  [SMALL_STATE(20)] = 1411,
  [SMALL_STATE(21)] = 1487,
  [SMALL_STATE(22)] = 1565,
  [SMALL_STATE(23)] = 1647,
  [SMALL_STATE(24)] = 1719,
  [SMALL_STATE(25)] = 1805,
  [SMALL_STATE(26)] = 1879,
  [SMALL_STATE(27)] = 1939,
  [SMALL_STATE(28)] = 1999,
  [SMALL_STATE(29)] = 2059,
  [SMALL_STATE(30)] = 2119,
  [SMALL_STATE(31)] = 2179,
  [SMALL_STATE(32)] = 2239,
  [SMALL_STATE(33)] = 2307,
  [SMALL_STATE(34)] = 2364,
  [SMALL_STATE(35)] = 2423,
  [SMALL_STATE(36)] = 2474,
  [SMALL_STATE(37)] = 2553,
  [SMALL_STATE(38)] = 2604,
  [SMALL_STATE(39)] = 2669,
  [SMALL_STATE(40)] = 2720,
  [SMALL_STATE(41)] = 2771,
  [SMALL_STATE(42)] = 2864,
  [SMALL_STATE(43)] = 2915,
  [SMALL_STATE(44)] = 2966,
  [SMALL_STATE(45)] = 3047,
  [SMALL_STATE(46)] = 3124,
  [SMALL_STATE(47)] = 3199,
  [SMALL_STATE(48)] = 3250,
  [SMALL_STATE(49)] = 3315,
  [SMALL_STATE(50)] = 3366,
  [SMALL_STATE(51)] = 3433,
  [SMALL_STATE(52)] = 3498,
  [SMALL_STATE(53)] = 3561,
  [SMALL_STATE(54)] = 3634,
  [SMALL_STATE(55)] = 3699,
  [SMALL_STATE(56)] = 3768,
  [SMALL_STATE(57)] = 3821,
  [SMALL_STATE(58)] = 3872,
  [SMALL_STATE(59)] = 3937,
  [SMALL_STATE(60)] = 4002,
  [SMALL_STATE(61)] = 4053,
  [SMALL_STATE(62)] = 4145,
  [SMALL_STATE(63)] = 4239,
  [SMALL_STATE(64)] = 4290,
  [SMALL_STATE(65)] = 4341,
  [SMALL_STATE(66)] = 4383,
  [SMALL_STATE(67)] = 4425,
  [SMALL_STATE(68)] = 4467,
  [SMALL_STATE(69)] = 4509,
  [SMALL_STATE(70)] = 4551,
  [SMALL_STATE(71)] = 4593,
  [SMALL_STATE(72)] = 4635,
  [SMALL_STATE(73)] = 4677,
  [SMALL_STATE(74)] = 4719,
  [SMALL_STATE(75)] = 4793,
  [SMALL_STATE(76)] = 4867,
  [SMALL_STATE(77)] = 4935,
  [SMALL_STATE(78)] = 5001,
  [SMALL_STATE(79)] = 5065,
  [SMALL_STATE(80)] = 5125,
  [SMALL_STATE(81)] = 5199,
  [SMALL_STATE(82)] = 5257,
  [SMALL_STATE(83)] = 5329,
  [SMALL_STATE(84)] = 5403,
  [SMALL_STATE(85)] = 5459,
  [SMALL_STATE(86)] = 5527,
  [SMALL_STATE(87)] = 5601,
  [SMALL_STATE(88)] = 5655,
  [SMALL_STATE(89)] = 5705,
  [SMALL_STATE(90)] = 5753,
  [SMALL_STATE(91)] = 5797,
  [SMALL_STATE(92)] = 5871,
  [SMALL_STATE(93)] = 5913,
  [SMALL_STATE(94)] = 5987,
  [SMALL_STATE(95)] = 6029,
  [SMALL_STATE(96)] = 6071,
  [SMALL_STATE(97)] = 6113,
  [SMALL_STATE(98)] = 6183,
  [SMALL_STATE(99)] = 6225,
  [SMALL_STATE(100)] = 6267,
  [SMALL_STATE(101)] = 6311,
  [SMALL_STATE(102)] = 6353,
  [SMALL_STATE(103)] = 6395,
  [SMALL_STATE(104)] = 6443,
  [SMALL_STATE(105)] = 6485,
  [SMALL_STATE(106)] = 6557,
  [SMALL_STATE(107)] = 6599,
  [SMALL_STATE(108)] = 6673,
  [SMALL_STATE(109)] = 6715,
  [SMALL_STATE(110)] = 6785,
  [SMALL_STATE(111)] = 6851,
  [SMALL_STATE(112)] = 6915,
  [SMALL_STATE(113)] = 6977,
  [SMALL_STATE(114)] = 7037,
  [SMALL_STATE(115)] = 7095,
  [SMALL_STATE(116)] = 7151,
  [SMALL_STATE(117)] = 7205,
  [SMALL_STATE(118)] = 7255,
  [SMALL_STATE(119)] = 7324,
  [SMALL_STATE(120)] = 7395,
  [SMALL_STATE(121)] = 7466,
  [SMALL_STATE(122)] = 7537,
  [SMALL_STATE(123)] = 7608,
  [SMALL_STATE(124)] = 7679,
  [SMALL_STATE(125)] = 7750,
  [SMALL_STATE(126)] = 7819,
  [SMALL_STATE(127)] = 7888,
  [SMALL_STATE(128)] = 7959,
  [SMALL_STATE(129)] = 8030,
  [SMALL_STATE(130)] = 8099,
  [SMALL_STATE(131)] = 8168,
  [SMALL_STATE(132)] = 8239,
  [SMALL_STATE(133)] = 8310,
  [SMALL_STATE(134)] = 8381,
  [SMALL_STATE(135)] = 8452,
  [SMALL_STATE(136)] = 8523,
  [SMALL_STATE(137)] = 8592,
  [SMALL_STATE(138)] = 8663,
  [SMALL_STATE(139)] = 8734,
  [SMALL_STATE(140)] = 8797,
  [SMALL_STATE(141)] = 8860,
  [SMALL_STATE(142)] = 8920,
  [SMALL_STATE(143)] = 8980,
  [SMALL_STATE(144)] = 9040,
  [SMALL_STATE(145)] = 9100,
  [SMALL_STATE(146)] = 9131,
  [SMALL_STATE(147)] = 9162,
  [SMALL_STATE(148)] = 9193,
  [SMALL_STATE(149)] = 9224,
  [SMALL_STATE(150)] = 9255,
  [SMALL_STATE(151)] = 9286,
  [SMALL_STATE(152)] = 9317,
  [SMALL_STATE(153)] = 9348,
  [SMALL_STATE(154)] = 9405,
  [SMALL_STATE(155)] = 9436,
  [SMALL_STATE(156)] = 9467,
  [SMALL_STATE(157)] = 9498,
  [SMALL_STATE(158)] = 9529,
  [SMALL_STATE(159)] = 9586,
  [SMALL_STATE(160)] = 9617,
  [SMALL_STATE(161)] = 9648,
  [SMALL_STATE(162)] = 9679,
  [SMALL_STATE(163)] = 9710,
  [SMALL_STATE(164)] = 9764,
  [SMALL_STATE(165)] = 9815,
  [SMALL_STATE(166)] = 9866,
  [SMALL_STATE(167)] = 9917,
  [SMALL_STATE(168)] = 9965,
  [SMALL_STATE(169)] = 10013,
  [SMALL_STATE(170)] = 10061,
  [SMALL_STATE(171)] = 10109,
  [SMALL_STATE(172)] = 10157,
  [SMALL_STATE(173)] = 10205,
  [SMALL_STATE(174)] = 10253,
  [SMALL_STATE(175)] = 10298,
  [SMALL_STATE(176)] = 10343,
  [SMALL_STATE(177)] = 10388,
  [SMALL_STATE(178)] = 10433,
  [SMALL_STATE(179)] = 10478,
  [SMALL_STATE(180)] = 10523,
  [SMALL_STATE(181)] = 10568,
  [SMALL_STATE(182)] = 10613,
  [SMALL_STATE(183)] = 10658,
  [SMALL_STATE(184)] = 10699,
  [SMALL_STATE(185)] = 10744,
  [SMALL_STATE(186)] = 10789,
  [SMALL_STATE(187)] = 10834,
  [SMALL_STATE(188)] = 10879,
  [SMALL_STATE(189)] = 10920,
  [SMALL_STATE(190)] = 10965,
  [SMALL_STATE(191)] = 11010,
  [SMALL_STATE(192)] = 11055,
  [SMALL_STATE(193)] = 11100,
  [SMALL_STATE(194)] = 11145,
  [SMALL_STATE(195)] = 11186,
  [SMALL_STATE(196)] = 11227,
  [SMALL_STATE(197)] = 11268,
  [SMALL_STATE(198)] = 11309,
  [SMALL_STATE(199)] = 11350,
  [SMALL_STATE(200)] = 11391,
  [SMALL_STATE(201)] = 11432,
  [SMALL_STATE(202)] = 11473,
  [SMALL_STATE(203)] = 11514,
  [SMALL_STATE(204)] = 11555,
  [SMALL_STATE(205)] = 11596,
  [SMALL_STATE(206)] = 11637,
  [SMALL_STATE(207)] = 11682,
  [SMALL_STATE(208)] = 11727,
  [SMALL_STATE(209)] = 11772,
  [SMALL_STATE(210)] = 11817,
  [SMALL_STATE(211)] = 11862,
  [SMALL_STATE(212)] = 11907,
  [SMALL_STATE(213)] = 11952,
  [SMALL_STATE(214)] = 11997,
  [SMALL_STATE(215)] = 12042,
  [SMALL_STATE(216)] = 12087,
  [SMALL_STATE(217)] = 12132,
  [SMALL_STATE(218)] = 12177,
  [SMALL_STATE(219)] = 12222,
  [SMALL_STATE(220)] = 12263,
  [SMALL_STATE(221)] = 12308,
  [SMALL_STATE(222)] = 12353,
  [SMALL_STATE(223)] = 12398,
  [SMALL_STATE(224)] = 12443,
  [SMALL_STATE(225)] = 12488,
  [SMALL_STATE(226)] = 12533,
  [SMALL_STATE(227)] = 12578,
  [SMALL_STATE(228)] = 12623,
  [SMALL_STATE(229)] = 12668,
  [SMALL_STATE(230)] = 12713,
  [SMALL_STATE(231)] = 12758,
  [SMALL_STATE(232)] = 12803,
  [SMALL_STATE(233)] = 12848,
  [SMALL_STATE(234)] = 12893,
  [SMALL_STATE(235)] = 12938,
  [SMALL_STATE(236)] = 12983,
  [SMALL_STATE(237)] = 13028,
  [SMALL_STATE(238)] = 13073,
  [SMALL_STATE(239)] = 13118,
  [SMALL_STATE(240)] = 13163,
  [SMALL_STATE(241)] = 13208,
  [SMALL_STATE(242)] = 13253,
  [SMALL_STATE(243)] = 13298,
  [SMALL_STATE(244)] = 13343,
  [SMALL_STATE(245)] = 13388,
  [SMALL_STATE(246)] = 13433,
  [SMALL_STATE(247)] = 13478,
  [SMALL_STATE(248)] = 13523,
  [SMALL_STATE(249)] = 13553,
  [SMALL_STATE(250)] = 13580,
  [SMALL_STATE(251)] = 13623,
  [SMALL_STATE(252)] = 13648,
  [SMALL_STATE(253)] = 13667,
  [SMALL_STATE(254)] = 13686,
  [SMALL_STATE(255)] = 13705,
  [SMALL_STATE(256)] = 13721,
  [SMALL_STATE(257)] = 13737,
  [SMALL_STATE(258)] = 13753,
  [SMALL_STATE(259)] = 13769,
  [SMALL_STATE(260)] = 13783,
  [SMALL_STATE(261)] = 13797,
  [SMALL_STATE(262)] = 13811,
  [SMALL_STATE(263)] = 13827,
  [SMALL_STATE(264)] = 13841,
  [SMALL_STATE(265)] = 13857,
  [SMALL_STATE(266)] = 13873,
  [SMALL_STATE(267)] = 13889,
  [SMALL_STATE(268)] = 13903,
  [SMALL_STATE(269)] = 13917,
  [SMALL_STATE(270)] = 13933,
  [SMALL_STATE(271)] = 13947,
  [SMALL_STATE(272)] = 13961,
  [SMALL_STATE(273)] = 13977,
  [SMALL_STATE(274)] = 13993,
  [SMALL_STATE(275)] = 14007,
  [SMALL_STATE(276)] = 14023,
  [SMALL_STATE(277)] = 14039,
  [SMALL_STATE(278)] = 14052,
  [SMALL_STATE(279)] = 14065,
  [SMALL_STATE(280)] = 14076,
  [SMALL_STATE(281)] = 14089,
  [SMALL_STATE(282)] = 14100,
  [SMALL_STATE(283)] = 14111,
  [SMALL_STATE(284)] = 14124,
  [SMALL_STATE(285)] = 14135,
  [SMALL_STATE(286)] = 14146,
  [SMALL_STATE(287)] = 14157,
  [SMALL_STATE(288)] = 14170,
  [SMALL_STATE(289)] = 14181,
  [SMALL_STATE(290)] = 14192,
  [SMALL_STATE(291)] = 14203,
  [SMALL_STATE(292)] = 14214,
  [SMALL_STATE(293)] = 14224,
  [SMALL_STATE(294)] = 14234,
  [SMALL_STATE(295)] = 14244,
  [SMALL_STATE(296)] = 14254,
  [SMALL_STATE(297)] = 14264,
  [SMALL_STATE(298)] = 14274,
  [SMALL_STATE(299)] = 14284,
  [SMALL_STATE(300)] = 14294,
  [SMALL_STATE(301)] = 14304,
  [SMALL_STATE(302)] = 14314,
  [SMALL_STATE(303)] = 14324,
  [SMALL_STATE(304)] = 14334,
  [SMALL_STATE(305)] = 14344,
  [SMALL_STATE(306)] = 14354,
  [SMALL_STATE(307)] = 14364,
  [SMALL_STATE(308)] = 14374,
  [SMALL_STATE(309)] = 14384,
  [SMALL_STATE(310)] = 14394,
  [SMALL_STATE(311)] = 14404,
  [SMALL_STATE(312)] = 14414,
  [SMALL_STATE(313)] = 14424,
  [SMALL_STATE(314)] = 14434,
  [SMALL_STATE(315)] = 14444,
  [SMALL_STATE(316)] = 14454,
  [SMALL_STATE(317)] = 14464,
  [SMALL_STATE(318)] = 14474,
  [SMALL_STATE(319)] = 14484,
  [SMALL_STATE(320)] = 14494,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_wrt, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_wrt, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 30),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3, 0, 30),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign, 3, 0, 16),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3, 0, 15),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3, 0, 15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 38),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 38),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 5, 0, 34),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 5, 0, 34),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 7, 0, 51),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 7, 0, 51),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 7, 0, 52),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 7, 0, 52),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 8, 0, 54),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 8, 0, 54),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5, 0, 49),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5, 0, 49),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, 0, 47),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, 0, 47),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_wrt, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_wrt, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 6, 0, 43),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 6, 0, 43),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 29),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 29),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 17),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2, 0, 17),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_wrt, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_wrt, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 2, 0, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 2, 0, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 4, 0, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 4, 0, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 6, 0, 44),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 6, 0, 44),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 6, 0, 37),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 6, 0, 37),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 7, 0, 44),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 7, 0, 44),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 5, 0, 37),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 5, 0, 37),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(312),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 4, 0, 10),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 4, 0, 10),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_segment_repeat1, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 2, 0, 10),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 2, 0, 10),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_comm, 3, 0, 24),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_instr_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 2, 0, 21),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_bits, 2, 0, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_absolute, 2, 0, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 46),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1, 0, 8),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_comm, 5, 0, 24),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_instr, 3, 0, 18),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_instr, 3, 0, 18),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 13),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 13),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 5, 0, 40),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 5, 0, 40),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 4, 0, 33),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 4, 0, 33),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 6, 0, 50),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 6, 0, 50),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 8, 0, 55),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 8, 0, 55),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_instr, 4, 0, 26),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_instr, 4, 0, 26),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefine, 2, 0, 4),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_undefine, 2, 0, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 2, 0, 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 2, 0, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_instr, 3, 0, 26),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_instr, 3, 0, 26),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 3, 0, 19),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 3, 0, 19),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 7, 0, 53),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 7, 0, 53),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 3, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 3, 0, 27),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 3, 0, 27),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 1, 0, 10),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 1, 0, 10), SHIFT_REPEAT(64),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 3, 0, 10),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 3, 0, 10), SHIFT_REPEAT(64),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 3, 0, 10),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 5, 0, 10),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 5, 0, 10),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__op_size, 2, 0, 22),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__op_size, 2, 0, 22),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__op_size, 2, 0, 22), SHIFT_REPEAT(249),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__op_size, 1, 0, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__op_size, 1, 0, 6),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_instr_head, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_instr_head, 1, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_segment, 2, 0, 9),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_instr_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_arg, 2, 0, 35),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 48), SHIFT_REPEAT(177),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 48),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_segment_repeat1, 1, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_segment, 3, 0, 9),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_glob_ext_stat, 2, 0, 11),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 2, 0, 23),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_glob_ext_stat_repeat1, 2, 0, 23), SHIFT_REPEAT(163),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_repeat1, 2, 0, 45), SHIFT_REPEAT(275),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_repeat1, 2, 0, 45),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instr_repeat1, 2, 0, 14), SHIFT_REPEAT(288),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instr_repeat1, 2, 0, 14),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_arg, 1, 0, 28),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_segment_repeat1, 2, 0, 0),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_arg, 3, 0, 41),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_arg, 2, 0, 36),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 39),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 31),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 2, 0, 20),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instr_repeat1, 1, 0, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1, 0, 7),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_repeat1, 2, 0, 42),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_bits, 1, 0, 2),
  [737] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_warning, 2, 0, 12),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_misc, 2, 0, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_warning, 4, 0, 32),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_warning, 3, 0, 25),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
