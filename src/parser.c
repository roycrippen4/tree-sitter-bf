#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_increment = 1,
  sym_decrement = 2,
  sym_move_right = 3,
  sym_move_left = 4,
  sym_output = 5,
  sym_input = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  sym_comment = 9,
  sym_program = 10,
  sym__instruction = 11,
  sym_loop = 12,
  aux_sym_program_repeat1 = 13,
  aux_sym_loop_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_increment] = "increment",
  [sym_decrement] = "decrement",
  [sym_move_right] = "move_right",
  [sym_move_left] = "move_left",
  [sym_output] = "output",
  [sym_input] = "input",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__instruction] = "_instruction",
  [sym_loop] = "loop",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_loop_repeat1] = "loop_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_increment] = sym_increment,
  [sym_decrement] = sym_decrement,
  [sym_move_right] = sym_move_right,
  [sym_move_left] = sym_move_left,
  [sym_output] = sym_output,
  [sym_input] = sym_input,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__instruction] = sym__instruction,
  [sym_loop] = sym_loop,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_loop_repeat1] = aux_sym_loop_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_increment] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement] = {
    .visible = true,
    .named = true,
  },
  [sym_move_right] = {
    .visible = true,
    .named = true,
  },
  [sym_move_left] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_loop_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [7] = 4,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 10,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(5);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (eof) ADVANCE(2);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(5);
      if (lookahead == '[') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(12);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_increment);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_decrement);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_move_right);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_move_left);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_output);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_input);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '+' || '.' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          (lookahead < '+' || '.' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_increment] = ACTIONS(1),
    [sym_decrement] = ACTIONS(1),
    [sym_move_right] = ACTIONS(1),
    [sym_move_left] = ACTIONS(1),
    [sym_output] = ACTIONS(1),
    [sym_input] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym__instruction] = STATE(2),
    [sym_loop] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_increment] = ACTIONS(5),
    [sym_decrement] = ACTIONS(5),
    [sym_move_right] = ACTIONS(5),
    [sym_move_left] = ACTIONS(5),
    [sym_output] = ACTIONS(5),
    [sym_input] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym__instruction] = STATE(3),
    [sym_loop] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_increment] = ACTIONS(13),
    [sym_decrement] = ACTIONS(13),
    [sym_move_right] = ACTIONS(13),
    [sym_move_left] = ACTIONS(13),
    [sym_output] = ACTIONS(13),
    [sym_input] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(15),
  },
  [3] = {
    [sym__instruction] = STATE(3),
    [sym_loop] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_increment] = ACTIONS(19),
    [sym_decrement] = ACTIONS(19),
    [sym_move_right] = ACTIONS(19),
    [sym_move_left] = ACTIONS(19),
    [sym_output] = ACTIONS(19),
    [sym_input] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(22),
    [sym_comment] = ACTIONS(25),
  },
  [4] = {
    [sym__instruction] = STATE(5),
    [sym_loop] = STATE(5),
    [aux_sym_loop_repeat1] = STATE(5),
    [sym_increment] = ACTIONS(28),
    [sym_decrement] = ACTIONS(28),
    [sym_move_right] = ACTIONS(28),
    [sym_move_left] = ACTIONS(28),
    [sym_output] = ACTIONS(28),
    [sym_input] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(32),
  },
  [5] = {
    [sym__instruction] = STATE(6),
    [sym_loop] = STATE(6),
    [aux_sym_loop_repeat1] = STATE(6),
    [sym_increment] = ACTIONS(34),
    [sym_decrement] = ACTIONS(34),
    [sym_move_right] = ACTIONS(34),
    [sym_move_left] = ACTIONS(34),
    [sym_output] = ACTIONS(34),
    [sym_input] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(36),
  },
  [6] = {
    [sym__instruction] = STATE(6),
    [sym_loop] = STATE(6),
    [aux_sym_loop_repeat1] = STATE(6),
    [sym_increment] = ACTIONS(38),
    [sym_decrement] = ACTIONS(38),
    [sym_move_right] = ACTIONS(38),
    [sym_move_left] = ACTIONS(38),
    [sym_output] = ACTIONS(38),
    [sym_input] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(44),
  },
  [7] = {
    [sym__instruction] = STATE(8),
    [sym_loop] = STATE(8),
    [aux_sym_loop_repeat1] = STATE(8),
    [sym_increment] = ACTIONS(46),
    [sym_decrement] = ACTIONS(46),
    [sym_move_right] = ACTIONS(46),
    [sym_move_left] = ACTIONS(46),
    [sym_output] = ACTIONS(46),
    [sym_input] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(48),
  },
  [8] = {
    [sym__instruction] = STATE(6),
    [sym_loop] = STATE(6),
    [aux_sym_loop_repeat1] = STATE(6),
    [sym_increment] = ACTIONS(34),
    [sym_decrement] = ACTIONS(34),
    [sym_move_right] = ACTIONS(34),
    [sym_move_left] = ACTIONS(34),
    [sym_output] = ACTIONS(34),
    [sym_input] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(50),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_increment] = ACTIONS(54),
    [sym_decrement] = ACTIONS(54),
    [sym_move_right] = ACTIONS(54),
    [sym_move_left] = ACTIONS(54),
    [sym_output] = ACTIONS(54),
    [sym_input] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(54),
    [sym_comment] = ACTIONS(52),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_increment] = ACTIONS(58),
    [sym_decrement] = ACTIONS(58),
    [sym_move_right] = ACTIONS(58),
    [sym_move_left] = ACTIONS(58),
    [sym_output] = ACTIONS(58),
    [sym_input] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [sym_comment] = ACTIONS(56),
  },
  [11] = {
    [sym_increment] = ACTIONS(52),
    [sym_decrement] = ACTIONS(52),
    [sym_move_right] = ACTIONS(52),
    [sym_move_left] = ACTIONS(52),
    [sym_output] = ACTIONS(52),
    [sym_input] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(52),
  },
  [12] = {
    [sym_increment] = ACTIONS(56),
    [sym_decrement] = ACTIONS(56),
    [sym_move_right] = ACTIONS(56),
    [sym_move_left] = ACTIONS(56),
    [sym_output] = ACTIONS(56),
    [sym_input] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_RBRACK] = ACTIONS(56),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_loop_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_loop_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_brainfuck() {
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
