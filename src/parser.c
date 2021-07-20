#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 1
#define TOKEN_COUNT 113
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_module = 1,
  anon_sym_submodule = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  sym_extension_keyword = 6,
  sym_identifier = 7,
  sym_node_identifier = 8,
  aux_sym_integer_token1 = 9,
  aux_sym_integer_token2 = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_SQUOTE = 14,
  anon_sym_PLUS = 15,
  sym__unescaped_double_string_fragment = 16,
  sym__unescaped_single_string_fragment = 17,
  sym__escape_sequence = 18,
  sym_date = 19,
  sym_unquoted_range = 20,
  sym_quoted_range = 21,
  sym_keypath = 22,
  anon_sym_1_DOT1 = 23,
  sym_unquoted_string = 24,
  sym_glob = 25,
  sym_comment = 26,
  sym__sep = 27,
  anon_sym_binary = 28,
  anon_sym_bits = 29,
  anon_sym_boolean = 30,
  anon_sym_decimal64 = 31,
  anon_sym_empty = 32,
  anon_sym_enumeration = 33,
  anon_sym_identityref = 34,
  anon_sym_instance_DASHidentifier = 35,
  anon_sym_int8 = 36,
  anon_sym_int16 = 37,
  anon_sym_int32 = 38,
  anon_sym_int64 = 39,
  anon_sym_leafref = 40,
  anon_sym_string = 41,
  anon_sym_uint8 = 42,
  anon_sym_uint16 = 43,
  anon_sym_uint32 = 44,
  anon_sym_uint64 = 45,
  anon_sym_union = 46,
  anon_sym_action = 47,
  anon_sym_anydata = 48,
  anon_sym_anyxml = 49,
  anon_sym_argument = 50,
  anon_sym_augment = 51,
  anon_sym_base = 52,
  anon_sym_belongs_DASHto = 53,
  anon_sym_bit = 54,
  anon_sym_case = 55,
  anon_sym_choice = 56,
  anon_sym_config = 57,
  anon_sym_contact = 58,
  anon_sym_container = 59,
  anon_sym_default = 60,
  anon_sym_description = 61,
  anon_sym_deviate = 62,
  anon_sym_deviation = 63,
  anon_sym_enum = 64,
  anon_sym_error_DASHapp_DASHtag = 65,
  anon_sym_error_DASHmessage = 66,
  anon_sym_extension = 67,
  anon_sym_feature = 68,
  anon_sym_fraction_DASHdigits = 69,
  anon_sym_grouping = 70,
  anon_sym_identity = 71,
  anon_sym_if_DASHfeature = 72,
  anon_sym_import = 73,
  anon_sym_include = 74,
  anon_sym_input = 75,
  anon_sym_key = 76,
  anon_sym_leaf = 77,
  anon_sym_leaf_DASHlist = 78,
  anon_sym_length = 79,
  anon_sym_list = 80,
  anon_sym_mandatory = 81,
  anon_sym_max_DASHelements = 82,
  anon_sym_min_DASHelements = 83,
  anon_sym_modifier = 84,
  anon_sym_must = 85,
  anon_sym_namespace = 86,
  anon_sym_notification = 87,
  anon_sym_ordered_DASHby = 88,
  anon_sym_organization = 89,
  anon_sym_output = 90,
  anon_sym_path = 91,
  anon_sym_pattern = 92,
  anon_sym_position = 93,
  anon_sym_prefix = 94,
  anon_sym_presence = 95,
  anon_sym_range = 96,
  anon_sym_reference = 97,
  anon_sym_refine = 98,
  anon_sym_require_DASHinstance = 99,
  anon_sym_revision = 100,
  anon_sym_revision_DASHdate = 101,
  anon_sym_rpc = 102,
  anon_sym_status = 103,
  anon_sym_type = 104,
  anon_sym_typedef = 105,
  anon_sym_unique = 106,
  anon_sym_units = 107,
  anon_sym_uses = 108,
  anon_sym_value = 109,
  anon_sym_when = 110,
  anon_sym_yang_DASHversion = 111,
  anon_sym_yin_DASHelement = 112,
  sym_yang = 113,
  sym_module = 114,
  sym_submodule = 115,
  sym_block = 116,
  sym_statement = 117,
  sym_extension_statement = 118,
  sym_argument = 119,
  sym_integer = 120,
  sym_boolean = 121,
  sym_string = 122,
  sym_string_concatenation = 123,
  sym_range = 124,
  sym_yang_version = 125,
  sym_built_in_type = 126,
  sym_statement_keyword = 127,
  aux_sym_block_repeat1 = 128,
  aux_sym_string_repeat1 = 129,
  aux_sym_string_repeat2 = 130,
  aux_sym_string_concatenation_repeat1 = 131,
  alias_sym_escape_sequence = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_submodule] = "submodule",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [sym_extension_keyword] = "extension_keyword",
  [sym_identifier] = "identifier",
  [sym_node_identifier] = "node_identifier",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PLUS] = "plus_symbol",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym__unescaped_single_string_fragment] = "_unescaped_single_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_date] = "date",
  [sym_unquoted_range] = "unquoted_range",
  [sym_quoted_range] = "quoted_range",
  [sym_keypath] = "keypath",
  [anon_sym_1_DOT1] = "1.1",
  [sym_unquoted_string] = "unquoted_string",
  [sym_glob] = "glob",
  [sym_comment] = "comment",
  [sym__sep] = "_sep",
  [anon_sym_binary] = "binary",
  [anon_sym_bits] = "bits",
  [anon_sym_boolean] = "boolean",
  [anon_sym_decimal64] = "decimal64",
  [anon_sym_empty] = "empty",
  [anon_sym_enumeration] = "enumeration",
  [anon_sym_identityref] = "identityref",
  [anon_sym_instance_DASHidentifier] = "instance-identifier",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_leafref] = "leafref",
  [anon_sym_string] = "string",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_union] = "union",
  [anon_sym_action] = "action",
  [anon_sym_anydata] = "anydata",
  [anon_sym_anyxml] = "anyxml",
  [anon_sym_argument] = "argument",
  [anon_sym_augment] = "augment",
  [anon_sym_base] = "base",
  [anon_sym_belongs_DASHto] = "belongs-to",
  [anon_sym_bit] = "bit",
  [anon_sym_case] = "case",
  [anon_sym_choice] = "choice",
  [anon_sym_config] = "config",
  [anon_sym_contact] = "contact",
  [anon_sym_container] = "container",
  [anon_sym_default] = "default",
  [anon_sym_description] = "description",
  [anon_sym_deviate] = "deviate",
  [anon_sym_deviation] = "deviation",
  [anon_sym_enum] = "enum",
  [anon_sym_error_DASHapp_DASHtag] = "error-app-tag",
  [anon_sym_error_DASHmessage] = "error-message",
  [anon_sym_extension] = "extension",
  [anon_sym_feature] = "feature",
  [anon_sym_fraction_DASHdigits] = "fraction-digits",
  [anon_sym_grouping] = "grouping",
  [anon_sym_identity] = "identity",
  [anon_sym_if_DASHfeature] = "if-feature",
  [anon_sym_import] = "import",
  [anon_sym_include] = "include",
  [anon_sym_input] = "input",
  [anon_sym_key] = "key",
  [anon_sym_leaf] = "leaf",
  [anon_sym_leaf_DASHlist] = "leaf-list",
  [anon_sym_length] = "length",
  [anon_sym_list] = "list",
  [anon_sym_mandatory] = "mandatory",
  [anon_sym_max_DASHelements] = "max-elements",
  [anon_sym_min_DASHelements] = "min-elements",
  [anon_sym_modifier] = "modifier",
  [anon_sym_must] = "must",
  [anon_sym_namespace] = "namespace",
  [anon_sym_notification] = "notification",
  [anon_sym_ordered_DASHby] = "ordered-by",
  [anon_sym_organization] = "organization",
  [anon_sym_output] = "output",
  [anon_sym_path] = "path",
  [anon_sym_pattern] = "pattern",
  [anon_sym_position] = "position",
  [anon_sym_prefix] = "prefix",
  [anon_sym_presence] = "presence",
  [anon_sym_range] = "range",
  [anon_sym_reference] = "reference",
  [anon_sym_refine] = "refine",
  [anon_sym_require_DASHinstance] = "require-instance",
  [anon_sym_revision] = "revision",
  [anon_sym_revision_DASHdate] = "revision-date",
  [anon_sym_rpc] = "rpc",
  [anon_sym_status] = "status",
  [anon_sym_type] = "type",
  [anon_sym_typedef] = "typedef",
  [anon_sym_unique] = "unique",
  [anon_sym_units] = "units",
  [anon_sym_uses] = "uses",
  [anon_sym_value] = "value",
  [anon_sym_when] = "when",
  [anon_sym_yang_DASHversion] = "yang-version",
  [anon_sym_yin_DASHelement] = "yin-element",
  [sym_yang] = "yang",
  [sym_module] = "module",
  [sym_submodule] = "submodule",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_extension_statement] = "extension_statement",
  [sym_argument] = "argument",
  [sym_integer] = "integer",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_string_concatenation] = "string_concatenation",
  [sym_range] = "range",
  [sym_yang_version] = "yang_version",
  [sym_built_in_type] = "built_in_type",
  [sym_statement_keyword] = "statement_keyword",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_concatenation_repeat1] = "string_concatenation_repeat1",
  [alias_sym_escape_sequence] = "escape_sequence",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_submodule] = anon_sym_submodule,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_extension_keyword] = sym_extension_keyword,
  [sym_identifier] = sym_identifier,
  [sym_node_identifier] = sym_node_identifier,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym__unescaped_double_string_fragment] = sym__unescaped_double_string_fragment,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_date] = sym_date,
  [sym_unquoted_range] = sym_unquoted_range,
  [sym_quoted_range] = sym_quoted_range,
  [sym_keypath] = sym_keypath,
  [anon_sym_1_DOT1] = anon_sym_1_DOT1,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_glob] = sym_glob,
  [sym_comment] = sym_comment,
  [sym__sep] = sym__sep,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_decimal64] = anon_sym_decimal64,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_enumeration] = anon_sym_enumeration,
  [anon_sym_identityref] = anon_sym_identityref,
  [anon_sym_instance_DASHidentifier] = anon_sym_instance_DASHidentifier,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_leafref] = anon_sym_leafref,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_anydata] = anon_sym_anydata,
  [anon_sym_anyxml] = anon_sym_anyxml,
  [anon_sym_argument] = anon_sym_argument,
  [anon_sym_augment] = anon_sym_augment,
  [anon_sym_base] = anon_sym_base,
  [anon_sym_belongs_DASHto] = anon_sym_belongs_DASHto,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_choice] = anon_sym_choice,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_contact] = anon_sym_contact,
  [anon_sym_container] = anon_sym_container,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_deviate] = anon_sym_deviate,
  [anon_sym_deviation] = anon_sym_deviation,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_error_DASHapp_DASHtag] = anon_sym_error_DASHapp_DASHtag,
  [anon_sym_error_DASHmessage] = anon_sym_error_DASHmessage,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_feature] = anon_sym_feature,
  [anon_sym_fraction_DASHdigits] = anon_sym_fraction_DASHdigits,
  [anon_sym_grouping] = anon_sym_grouping,
  [anon_sym_identity] = anon_sym_identity,
  [anon_sym_if_DASHfeature] = anon_sym_if_DASHfeature,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_leaf] = anon_sym_leaf,
  [anon_sym_leaf_DASHlist] = anon_sym_leaf_DASHlist,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_mandatory] = anon_sym_mandatory,
  [anon_sym_max_DASHelements] = anon_sym_max_DASHelements,
  [anon_sym_min_DASHelements] = anon_sym_min_DASHelements,
  [anon_sym_modifier] = anon_sym_modifier,
  [anon_sym_must] = anon_sym_must,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_notification] = anon_sym_notification,
  [anon_sym_ordered_DASHby] = anon_sym_ordered_DASHby,
  [anon_sym_organization] = anon_sym_organization,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_position] = anon_sym_position,
  [anon_sym_prefix] = anon_sym_prefix,
  [anon_sym_presence] = anon_sym_presence,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_reference] = anon_sym_reference,
  [anon_sym_refine] = anon_sym_refine,
  [anon_sym_require_DASHinstance] = anon_sym_require_DASHinstance,
  [anon_sym_revision] = anon_sym_revision,
  [anon_sym_revision_DASHdate] = anon_sym_revision_DASHdate,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_units] = anon_sym_units,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_yang_DASHversion] = anon_sym_yang_DASHversion,
  [anon_sym_yin_DASHelement] = anon_sym_yin_DASHelement,
  [sym_yang] = sym_yang,
  [sym_module] = sym_module,
  [sym_submodule] = sym_submodule,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_extension_statement] = sym_extension_statement,
  [sym_argument] = sym_argument,
  [sym_integer] = sym_integer,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_string_concatenation] = sym_string_concatenation,
  [sym_range] = sym_range,
  [sym_yang_version] = sym_yang_version,
  [sym_built_in_type] = sym_built_in_type,
  [sym_statement_keyword] = sym_statement_keyword,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_concatenation_repeat1] = aux_sym_string_concatenation_repeat1,
  [alias_sym_escape_sequence] = alias_sym_escape_sequence,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_submodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_extension_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_node_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_range] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_range] = {
    .visible = true,
    .named = true,
  },
  [sym_keypath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_glob] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__sep] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enumeration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_identityref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance_DASHidentifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leafref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anydata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anyxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_argument] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_augment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_belongs_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_container] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deviate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deviation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error_DASHapp_DASHtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error_DASHmessage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_feature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fraction_DASHdigits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grouping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_identity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHfeature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leaf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leaf_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mandatory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHelements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min_DASHelements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_must] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notification] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ordered_DASHby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_organization] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_presence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require_DASHinstance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revision_DASHdate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_units] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yang_DASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yin_DASHelement] = {
    .visible = true,
    .named = false,
  },
  [sym_yang] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_submodule] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_extension_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_yang_version] = {
    .visible = true,
    .named = true,
  },
  [sym_built_in_type] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_module_block = 1,
  field_module_name = 2,
  field_submodule_block = 3,
  field_submodule_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_module_block] = "module_block",
  [field_module_name] = "module_name",
  [field_submodule_block] = "submodule_block",
  [field_submodule_name] = "submodule_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module_block, 2},
    {field_module_name, 1},
  [2] =
    {field_submodule_block, 2},
    {field_submodule_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_escape_sequence,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_unquoted_string_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < ';'
        ? c == '\''
        : c <= ';')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(387);
      if (lookahead == '"') ADVANCE(503);
      if (lookahead == '\'') ADVANCE(818);
      if (lookahead == '*') ADVANCE(818);
      if (lookahead == '+') ADVANCE(818);
      if (lookahead == '-') ADVANCE(533);
      if (lookahead == '/') ADVANCE(507);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == '1') ADVANCE(532);
      if (lookahead == ';') ADVANCE(818);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'b') ADVANCE(541);
      if (lookahead == 'c') ADVANCE(542);
      if (lookahead == 'd') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == 'f') ADVANCE(547);
      if (lookahead == 'g') ADVANCE(743);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == 'k') ADVANCE(600);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == 's') ADVANCE(768);
      if (lookahead == 't') ADVANCE(742);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(549);
      if (lookahead == 'w') ADVANCE(645);
      if (lookahead == 'y') ADVANCE(567);
      if (lookahead == '{') ADVANCE(818);
      if (lookahead == '}') ADVANCE(818);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(818);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(503);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '*') ADVANCE(852);
      if (lookahead == '-') ADVANCE(839);
      if (lookahead == '/') ADVANCE(833);
      if (lookahead == '0') ADVANCE(491);
      if (lookahead == '1') ADVANCE(496);
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == '{') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(856);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(851);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(856);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '/') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(818);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '/') ADVANCE(820);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0) ADVANCE(823);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(854);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(853);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(378);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(877);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'b') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(931);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(927);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(897);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(915);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'q') ADVANCE(344);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(10);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(920);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(908);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(878);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(893);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 'x') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(892);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(896);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(918);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(940);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 214:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 215:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 216:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 217:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 225:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 226:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 227:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 228:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(882);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'q') ADVANCE(347);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 263:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 264:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(913);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(911);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(912);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(883);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(909);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(904);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(902);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(880);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(879);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(923);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(905);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(900);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(917);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'z') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 362:
      if (lookahead == 'b') ADVANCE(369);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 369:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 372:
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == 'x') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(826);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 373:
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 374:
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 375:
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 376:
      if (lookahead == '{') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 377:
      if (lookahead == '}') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(824);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 383:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 384:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(854);
      if (lookahead == '\r') ADVANCE(855);
      END_STATE();
    case 385:
      if (eof) ADVANCE(387);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '\'') ADVANCE(504);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '{') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(856);
      END_STATE();
    case 386:
      if (eof) ADVANCE(387);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'g') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '}') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(856);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_submodule);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_submodule);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_extension_keyword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '1') ADVANCE(405);
      if (lookahead == '3') ADVANCE(400);
      if (lookahead == '6') ADVANCE(402);
      if (lookahead == '8') ADVANCE(865);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '1') ADVANCE(406);
      if (lookahead == '3') ADVANCE(401);
      if (lookahead == '6') ADVANCE(403);
      if (lookahead == '8') ADVANCE(871);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '2') ADVANCE(867);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '2') ADVANCE(873);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '4') ADVANCE(868);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '4') ADVANCE(874);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '4') ADVANCE(860);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '6') ADVANCE(866);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '6') ADVANCE(872);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == '6') ADVANCE(404);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(446);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(447);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(454);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(482);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'c') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'c') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead == 'n') ADVANCE(473);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'd') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(500);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(501);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(397);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(432);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(469);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'f') ADVANCE(869);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'f') ADVANCE(863);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'f') ADVANCE(470);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'f') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'g') ADVANCE(870);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'o') ADVANCE(461);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(462);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(452);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(451);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(478);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(463);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'l') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'l') ADVANCE(407);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'l') ADVANCE(429);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead == 'n') ADVANCE(483);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'm') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'm') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(875);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(859);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(862);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 't') ADVANCE(472);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(480);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(481);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'p') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(864);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(484);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 's') ADVANCE(858);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(398);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 's') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 't') ADVANCE(485);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 't') ADVANCE(468);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 't') ADVANCE(399);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 't') ADVANCE(487);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 't') ADVANCE(412);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 't') ADVANCE(443);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 't') ADVANCE(442);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 't') ADVANCE(444);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'u') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'u') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'y') ADVANCE(861);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'y') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == 'y') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(847);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(845);
      if (lookahead == '.') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(838);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(509);
      if (lookahead == '/') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(508);
      if (lookahead == '/') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(632);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(803);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(560);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(570);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(589);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(785);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(784);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(662);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(814);
      if (lookahead == '.') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(592);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == '1') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(526);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '0') ADVANCE(810);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '1') ADVANCE(537);
      if (lookahead == '3') ADVANCE(535);
      if (lookahead == '6') ADVANCE(536);
      if (lookahead == '8') ADVANCE(809);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '2') ADVANCE(809);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '4') ADVANCE(809);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '6') ADVANCE(809);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '6') ADVANCE(536);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'i') ADVANCE(697);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(639);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'p') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(770);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead == 'r') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead == 'm') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(783);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(778);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'i') ADVANCE(716);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(782);
      if (lookahead == 'r') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'a') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'b') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'b') ADVANCE(688);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(773);
      if (lookahead == 'n') ADVANCE(806);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead == 'u') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(750);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'f') ADVANCE(557);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == 'v') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(680);
      if (lookahead == 'p') ADVANCE(796);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(767);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'c') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(604);
      if (lookahead == 'f') ADVANCE(510);
      if (lookahead == 'm') ADVANCE(733);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(513);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead == 'g') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(563);
      if (lookahead == 'x') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(752);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead == 'i') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(609);
      if (lookahead == 'q') ADVANCE(798);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 't') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(648);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'g') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'g') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'g') ADVANCE(758);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'g') ADVANCE(771);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'g') ADVANCE(667);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'g') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'g') ADVANCE(799);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'h') ADVANCE(809);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'h') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'h') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(804);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'u') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead == 's') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(711);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(775);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(776);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(753);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(759);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(650);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(802);
      if (lookahead == 'r') ADVANCE(745);
      if (lookahead == 'x') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(618);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(630);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == 'x') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(636);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(635);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(765);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(787);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(793);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(655);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(744);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(681);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead == 'q') ADVANCE(794);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(707);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(796);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(586);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(794);
      if (lookahead == 'y') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(737);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(764);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(807);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(731);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(792);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'u') ADVANCE(689);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'v') ADVANCE(616);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'x') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'y') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'y') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'y') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == 'z') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(818);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(819);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(822);
      if (lookahead == '/') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(823);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(821);
      if (lookahead == '/') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(822);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(822);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(823);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(824);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(825);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_date);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_unquoted_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_quoted_range);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_keypath);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(849);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(830);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_keypath);
      if (lookahead == '/') ADVANCE(847);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(831);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '*') ADVANCE(835);
      if (lookahead == '/') ADVANCE(840);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(830);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '*') ADVANCE(834);
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '*') ADVANCE(834);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(835);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(846);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '.') ADVANCE(842);
      if (lookahead == '1') ADVANCE(832);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '.') ADVANCE(842);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '0') ADVANCE(497);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\\') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(840);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(854);
      if (lookahead == '\r') ADVANCE(855);
      if (lookahead != 0) ADVANCE(840);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(830);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(831);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_glob);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(854);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(854);
      if (lookahead == '\\') ADVANCE(384);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__sep);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_decimal64);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_empty);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_enumeration);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_identityref);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_instance_DASHidentifier);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_leafref);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '/') ADVANCE(847);
      if (lookahead == ':') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(851);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_anydata);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_anyxml);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_argument);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_augment);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_belongs_DASHto);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_choice);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_contact);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_container);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_deviate);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_deviation);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_error_DASHapp_DASHtag);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_error_DASHmessage);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_extension);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_feature);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_fraction_DASHdigits);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_grouping);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_identity);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_if_DASHfeature);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_leaf);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_leaf_DASHlist);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_mandatory);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_max_DASHelements);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_min_DASHelements);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_modifier);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_must);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_notification);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_ordered_DASHby);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_organization);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_prefix);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_presence);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_reference);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_refine);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_require_DASHinstance);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_revision);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_revision_DASHdate);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_rpc);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_status);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_unique);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_units);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_yang_DASHversion);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_yin_DASHelement);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 385},
  [2] = {.lex_state = 386},
  [3] = {.lex_state = 386},
  [4] = {.lex_state = 386},
  [5] = {.lex_state = 386},
  [6] = {.lex_state = 386},
  [7] = {.lex_state = 386},
  [8] = {.lex_state = 386},
  [9] = {.lex_state = 386},
  [10] = {.lex_state = 386},
  [11] = {.lex_state = 386},
  [12] = {.lex_state = 386},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 385},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 385},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 385},
  [26] = {.lex_state = 385},
  [27] = {.lex_state = 385},
  [28] = {.lex_state = 385},
  [29] = {.lex_state = 385},
  [30] = {.lex_state = 385},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 385},
  [33] = {.lex_state = 385},
  [34] = {.lex_state = 385},
  [35] = {.lex_state = 385},
  [36] = {.lex_state = 385},
  [37] = {.lex_state = 385},
  [38] = {.lex_state = 385},
  [39] = {.lex_state = 385},
  [40] = {.lex_state = 385},
  [41] = {.lex_state = 385},
  [42] = {.lex_state = 385},
  [43] = {.lex_state = 385},
  [44] = {.lex_state = 385},
  [45] = {.lex_state = 385},
  [46] = {.lex_state = 385},
  [47] = {.lex_state = 385},
  [48] = {.lex_state = 385},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_submodule] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_extension_keyword] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym__unescaped_double_string_fragment] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_unquoted_range] = ACTIONS(1),
    [sym_quoted_range] = ACTIONS(1),
    [anon_sym_1_DOT1] = ACTIONS(1),
    [sym_glob] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__sep] = ACTIONS(3),
    [anon_sym_binary] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_decimal64] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_enumeration] = ACTIONS(1),
    [anon_sym_identityref] = ACTIONS(1),
    [anon_sym_instance_DASHidentifier] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_leafref] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_anydata] = ACTIONS(1),
    [anon_sym_anyxml] = ACTIONS(1),
    [anon_sym_argument] = ACTIONS(1),
    [anon_sym_augment] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_belongs_DASHto] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_choice] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_contact] = ACTIONS(1),
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_deviate] = ACTIONS(1),
    [anon_sym_deviation] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(1),
    [anon_sym_error_DASHmessage] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_feature] = ACTIONS(1),
    [anon_sym_fraction_DASHdigits] = ACTIONS(1),
    [anon_sym_grouping] = ACTIONS(1),
    [anon_sym_identity] = ACTIONS(1),
    [anon_sym_if_DASHfeature] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_leaf] = ACTIONS(1),
    [anon_sym_leaf_DASHlist] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_mandatory] = ACTIONS(1),
    [anon_sym_max_DASHelements] = ACTIONS(1),
    [anon_sym_min_DASHelements] = ACTIONS(1),
    [anon_sym_modifier] = ACTIONS(1),
    [anon_sym_must] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_notification] = ACTIONS(1),
    [anon_sym_ordered_DASHby] = ACTIONS(1),
    [anon_sym_organization] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_prefix] = ACTIONS(1),
    [anon_sym_presence] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_reference] = ACTIONS(1),
    [anon_sym_refine] = ACTIONS(1),
    [anon_sym_require_DASHinstance] = ACTIONS(1),
    [anon_sym_revision] = ACTIONS(1),
    [anon_sym_revision_DASHdate] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_units] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_yang_DASHversion] = ACTIONS(1),
    [anon_sym_yin_DASHelement] = ACTIONS(1),
  },
  [1] = {
    [sym_yang] = STATE(43),
    [sym_module] = STATE(47),
    [sym_submodule] = STATE(47),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_submodule] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_extension_statement] = STATE(3),
    [sym_statement_keyword] = STATE(36),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_submodule] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(13),
    [sym_extension_keyword] = ACTIONS(15),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(11),
    [anon_sym_anydata] = ACTIONS(11),
    [anon_sym_anyxml] = ACTIONS(11),
    [anon_sym_argument] = ACTIONS(11),
    [anon_sym_augment] = ACTIONS(11),
    [anon_sym_base] = ACTIONS(11),
    [anon_sym_belongs_DASHto] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_choice] = ACTIONS(11),
    [anon_sym_config] = ACTIONS(11),
    [anon_sym_contact] = ACTIONS(11),
    [anon_sym_container] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_description] = ACTIONS(11),
    [anon_sym_deviate] = ACTIONS(11),
    [anon_sym_deviation] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(11),
    [anon_sym_error_DASHmessage] = ACTIONS(11),
    [anon_sym_extension] = ACTIONS(11),
    [anon_sym_feature] = ACTIONS(11),
    [anon_sym_fraction_DASHdigits] = ACTIONS(11),
    [anon_sym_grouping] = ACTIONS(11),
    [anon_sym_identity] = ACTIONS(11),
    [anon_sym_if_DASHfeature] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_input] = ACTIONS(11),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_leaf] = ACTIONS(11),
    [anon_sym_leaf_DASHlist] = ACTIONS(11),
    [anon_sym_length] = ACTIONS(11),
    [anon_sym_list] = ACTIONS(11),
    [anon_sym_mandatory] = ACTIONS(11),
    [anon_sym_max_DASHelements] = ACTIONS(11),
    [anon_sym_min_DASHelements] = ACTIONS(11),
    [anon_sym_modifier] = ACTIONS(11),
    [anon_sym_must] = ACTIONS(11),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_notification] = ACTIONS(11),
    [anon_sym_ordered_DASHby] = ACTIONS(11),
    [anon_sym_organization] = ACTIONS(11),
    [anon_sym_output] = ACTIONS(11),
    [anon_sym_path] = ACTIONS(11),
    [anon_sym_pattern] = ACTIONS(11),
    [anon_sym_position] = ACTIONS(11),
    [anon_sym_prefix] = ACTIONS(11),
    [anon_sym_presence] = ACTIONS(11),
    [anon_sym_range] = ACTIONS(11),
    [anon_sym_reference] = ACTIONS(11),
    [anon_sym_refine] = ACTIONS(11),
    [anon_sym_require_DASHinstance] = ACTIONS(11),
    [anon_sym_revision] = ACTIONS(11),
    [anon_sym_revision_DASHdate] = ACTIONS(11),
    [anon_sym_rpc] = ACTIONS(11),
    [anon_sym_status] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_unique] = ACTIONS(11),
    [anon_sym_units] = ACTIONS(11),
    [anon_sym_uses] = ACTIONS(11),
    [anon_sym_value] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_yang_DASHversion] = ACTIONS(11),
    [anon_sym_yin_DASHelement] = ACTIONS(11),
  },
  [3] = {
    [sym_statement] = STATE(4),
    [sym_extension_statement] = STATE(4),
    [sym_statement_keyword] = STATE(36),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_submodule] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(17),
    [sym_extension_keyword] = ACTIONS(15),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(11),
    [anon_sym_anydata] = ACTIONS(11),
    [anon_sym_anyxml] = ACTIONS(11),
    [anon_sym_argument] = ACTIONS(11),
    [anon_sym_augment] = ACTIONS(11),
    [anon_sym_base] = ACTIONS(11),
    [anon_sym_belongs_DASHto] = ACTIONS(11),
    [anon_sym_bit] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_choice] = ACTIONS(11),
    [anon_sym_config] = ACTIONS(11),
    [anon_sym_contact] = ACTIONS(11),
    [anon_sym_container] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(11),
    [anon_sym_description] = ACTIONS(11),
    [anon_sym_deviate] = ACTIONS(11),
    [anon_sym_deviation] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(11),
    [anon_sym_error_DASHmessage] = ACTIONS(11),
    [anon_sym_extension] = ACTIONS(11),
    [anon_sym_feature] = ACTIONS(11),
    [anon_sym_fraction_DASHdigits] = ACTIONS(11),
    [anon_sym_grouping] = ACTIONS(11),
    [anon_sym_identity] = ACTIONS(11),
    [anon_sym_if_DASHfeature] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_input] = ACTIONS(11),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_leaf] = ACTIONS(11),
    [anon_sym_leaf_DASHlist] = ACTIONS(11),
    [anon_sym_length] = ACTIONS(11),
    [anon_sym_list] = ACTIONS(11),
    [anon_sym_mandatory] = ACTIONS(11),
    [anon_sym_max_DASHelements] = ACTIONS(11),
    [anon_sym_min_DASHelements] = ACTIONS(11),
    [anon_sym_modifier] = ACTIONS(11),
    [anon_sym_must] = ACTIONS(11),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_notification] = ACTIONS(11),
    [anon_sym_ordered_DASHby] = ACTIONS(11),
    [anon_sym_organization] = ACTIONS(11),
    [anon_sym_output] = ACTIONS(11),
    [anon_sym_path] = ACTIONS(11),
    [anon_sym_pattern] = ACTIONS(11),
    [anon_sym_position] = ACTIONS(11),
    [anon_sym_prefix] = ACTIONS(11),
    [anon_sym_presence] = ACTIONS(11),
    [anon_sym_range] = ACTIONS(11),
    [anon_sym_reference] = ACTIONS(11),
    [anon_sym_refine] = ACTIONS(11),
    [anon_sym_require_DASHinstance] = ACTIONS(11),
    [anon_sym_revision] = ACTIONS(11),
    [anon_sym_revision_DASHdate] = ACTIONS(11),
    [anon_sym_rpc] = ACTIONS(11),
    [anon_sym_status] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_unique] = ACTIONS(11),
    [anon_sym_units] = ACTIONS(11),
    [anon_sym_uses] = ACTIONS(11),
    [anon_sym_value] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_yang_DASHversion] = ACTIONS(11),
    [anon_sym_yin_DASHelement] = ACTIONS(11),
  },
  [4] = {
    [sym_statement] = STATE(4),
    [sym_extension_statement] = STATE(4),
    [sym_statement_keyword] = STATE(36),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_module] = ACTIONS(19),
    [anon_sym_submodule] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(22),
    [sym_extension_keyword] = ACTIONS(24),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(19),
    [anon_sym_anydata] = ACTIONS(19),
    [anon_sym_anyxml] = ACTIONS(19),
    [anon_sym_argument] = ACTIONS(19),
    [anon_sym_augment] = ACTIONS(19),
    [anon_sym_base] = ACTIONS(19),
    [anon_sym_belongs_DASHto] = ACTIONS(19),
    [anon_sym_bit] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(19),
    [anon_sym_choice] = ACTIONS(19),
    [anon_sym_config] = ACTIONS(19),
    [anon_sym_contact] = ACTIONS(19),
    [anon_sym_container] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_description] = ACTIONS(19),
    [anon_sym_deviate] = ACTIONS(19),
    [anon_sym_deviation] = ACTIONS(19),
    [anon_sym_enum] = ACTIONS(19),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(19),
    [anon_sym_error_DASHmessage] = ACTIONS(19),
    [anon_sym_extension] = ACTIONS(19),
    [anon_sym_feature] = ACTIONS(19),
    [anon_sym_fraction_DASHdigits] = ACTIONS(19),
    [anon_sym_grouping] = ACTIONS(19),
    [anon_sym_identity] = ACTIONS(19),
    [anon_sym_if_DASHfeature] = ACTIONS(19),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_input] = ACTIONS(19),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_leaf] = ACTIONS(19),
    [anon_sym_leaf_DASHlist] = ACTIONS(19),
    [anon_sym_length] = ACTIONS(19),
    [anon_sym_list] = ACTIONS(19),
    [anon_sym_mandatory] = ACTIONS(19),
    [anon_sym_max_DASHelements] = ACTIONS(19),
    [anon_sym_min_DASHelements] = ACTIONS(19),
    [anon_sym_modifier] = ACTIONS(19),
    [anon_sym_must] = ACTIONS(19),
    [anon_sym_namespace] = ACTIONS(19),
    [anon_sym_notification] = ACTIONS(19),
    [anon_sym_ordered_DASHby] = ACTIONS(19),
    [anon_sym_organization] = ACTIONS(19),
    [anon_sym_output] = ACTIONS(19),
    [anon_sym_path] = ACTIONS(19),
    [anon_sym_pattern] = ACTIONS(19),
    [anon_sym_position] = ACTIONS(19),
    [anon_sym_prefix] = ACTIONS(19),
    [anon_sym_presence] = ACTIONS(19),
    [anon_sym_range] = ACTIONS(19),
    [anon_sym_reference] = ACTIONS(19),
    [anon_sym_refine] = ACTIONS(19),
    [anon_sym_require_DASHinstance] = ACTIONS(19),
    [anon_sym_revision] = ACTIONS(19),
    [anon_sym_revision_DASHdate] = ACTIONS(19),
    [anon_sym_rpc] = ACTIONS(19),
    [anon_sym_status] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_typedef] = ACTIONS(19),
    [anon_sym_unique] = ACTIONS(19),
    [anon_sym_units] = ACTIONS(19),
    [anon_sym_uses] = ACTIONS(19),
    [anon_sym_value] = ACTIONS(19),
    [anon_sym_when] = ACTIONS(19),
    [anon_sym_yang_DASHversion] = ACTIONS(19),
    [anon_sym_yin_DASHelement] = ACTIONS(19),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_module] = ACTIONS(29),
    [anon_sym_submodule] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_extension_keyword] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(29),
    [anon_sym_anydata] = ACTIONS(29),
    [anon_sym_anyxml] = ACTIONS(29),
    [anon_sym_argument] = ACTIONS(29),
    [anon_sym_augment] = ACTIONS(29),
    [anon_sym_base] = ACTIONS(29),
    [anon_sym_belongs_DASHto] = ACTIONS(29),
    [anon_sym_bit] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_choice] = ACTIONS(29),
    [anon_sym_config] = ACTIONS(29),
    [anon_sym_contact] = ACTIONS(29),
    [anon_sym_container] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_description] = ACTIONS(29),
    [anon_sym_deviate] = ACTIONS(29),
    [anon_sym_deviation] = ACTIONS(29),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(29),
    [anon_sym_error_DASHmessage] = ACTIONS(29),
    [anon_sym_extension] = ACTIONS(29),
    [anon_sym_feature] = ACTIONS(29),
    [anon_sym_fraction_DASHdigits] = ACTIONS(29),
    [anon_sym_grouping] = ACTIONS(29),
    [anon_sym_identity] = ACTIONS(29),
    [anon_sym_if_DASHfeature] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(29),
    [anon_sym_key] = ACTIONS(29),
    [anon_sym_leaf] = ACTIONS(29),
    [anon_sym_leaf_DASHlist] = ACTIONS(29),
    [anon_sym_length] = ACTIONS(29),
    [anon_sym_list] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_max_DASHelements] = ACTIONS(29),
    [anon_sym_min_DASHelements] = ACTIONS(29),
    [anon_sym_modifier] = ACTIONS(29),
    [anon_sym_must] = ACTIONS(29),
    [anon_sym_namespace] = ACTIONS(29),
    [anon_sym_notification] = ACTIONS(29),
    [anon_sym_ordered_DASHby] = ACTIONS(29),
    [anon_sym_organization] = ACTIONS(29),
    [anon_sym_output] = ACTIONS(29),
    [anon_sym_path] = ACTIONS(29),
    [anon_sym_pattern] = ACTIONS(29),
    [anon_sym_position] = ACTIONS(29),
    [anon_sym_prefix] = ACTIONS(29),
    [anon_sym_presence] = ACTIONS(29),
    [anon_sym_range] = ACTIONS(29),
    [anon_sym_reference] = ACTIONS(29),
    [anon_sym_refine] = ACTIONS(29),
    [anon_sym_require_DASHinstance] = ACTIONS(29),
    [anon_sym_revision] = ACTIONS(29),
    [anon_sym_revision_DASHdate] = ACTIONS(29),
    [anon_sym_rpc] = ACTIONS(29),
    [anon_sym_status] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(29),
    [anon_sym_typedef] = ACTIONS(29),
    [anon_sym_unique] = ACTIONS(29),
    [anon_sym_units] = ACTIONS(29),
    [anon_sym_uses] = ACTIONS(29),
    [anon_sym_value] = ACTIONS(29),
    [anon_sym_when] = ACTIONS(29),
    [anon_sym_yang_DASHversion] = ACTIONS(29),
    [anon_sym_yin_DASHelement] = ACTIONS(29),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_submodule] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_extension_keyword] = ACTIONS(31),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(33),
    [anon_sym_anydata] = ACTIONS(33),
    [anon_sym_anyxml] = ACTIONS(33),
    [anon_sym_argument] = ACTIONS(33),
    [anon_sym_augment] = ACTIONS(33),
    [anon_sym_base] = ACTIONS(33),
    [anon_sym_belongs_DASHto] = ACTIONS(33),
    [anon_sym_bit] = ACTIONS(33),
    [anon_sym_case] = ACTIONS(33),
    [anon_sym_choice] = ACTIONS(33),
    [anon_sym_config] = ACTIONS(33),
    [anon_sym_contact] = ACTIONS(33),
    [anon_sym_container] = ACTIONS(33),
    [anon_sym_default] = ACTIONS(33),
    [anon_sym_description] = ACTIONS(33),
    [anon_sym_deviate] = ACTIONS(33),
    [anon_sym_deviation] = ACTIONS(33),
    [anon_sym_enum] = ACTIONS(33),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(33),
    [anon_sym_error_DASHmessage] = ACTIONS(33),
    [anon_sym_extension] = ACTIONS(33),
    [anon_sym_feature] = ACTIONS(33),
    [anon_sym_fraction_DASHdigits] = ACTIONS(33),
    [anon_sym_grouping] = ACTIONS(33),
    [anon_sym_identity] = ACTIONS(33),
    [anon_sym_if_DASHfeature] = ACTIONS(33),
    [anon_sym_import] = ACTIONS(33),
    [anon_sym_include] = ACTIONS(33),
    [anon_sym_input] = ACTIONS(33),
    [anon_sym_key] = ACTIONS(33),
    [anon_sym_leaf] = ACTIONS(33),
    [anon_sym_leaf_DASHlist] = ACTIONS(33),
    [anon_sym_length] = ACTIONS(33),
    [anon_sym_list] = ACTIONS(33),
    [anon_sym_mandatory] = ACTIONS(33),
    [anon_sym_max_DASHelements] = ACTIONS(33),
    [anon_sym_min_DASHelements] = ACTIONS(33),
    [anon_sym_modifier] = ACTIONS(33),
    [anon_sym_must] = ACTIONS(33),
    [anon_sym_namespace] = ACTIONS(33),
    [anon_sym_notification] = ACTIONS(33),
    [anon_sym_ordered_DASHby] = ACTIONS(33),
    [anon_sym_organization] = ACTIONS(33),
    [anon_sym_output] = ACTIONS(33),
    [anon_sym_path] = ACTIONS(33),
    [anon_sym_pattern] = ACTIONS(33),
    [anon_sym_position] = ACTIONS(33),
    [anon_sym_prefix] = ACTIONS(33),
    [anon_sym_presence] = ACTIONS(33),
    [anon_sym_range] = ACTIONS(33),
    [anon_sym_reference] = ACTIONS(33),
    [anon_sym_refine] = ACTIONS(33),
    [anon_sym_require_DASHinstance] = ACTIONS(33),
    [anon_sym_revision] = ACTIONS(33),
    [anon_sym_revision_DASHdate] = ACTIONS(33),
    [anon_sym_rpc] = ACTIONS(33),
    [anon_sym_status] = ACTIONS(33),
    [anon_sym_type] = ACTIONS(33),
    [anon_sym_typedef] = ACTIONS(33),
    [anon_sym_unique] = ACTIONS(33),
    [anon_sym_units] = ACTIONS(33),
    [anon_sym_uses] = ACTIONS(33),
    [anon_sym_value] = ACTIONS(33),
    [anon_sym_when] = ACTIONS(33),
    [anon_sym_yang_DASHversion] = ACTIONS(33),
    [anon_sym_yin_DASHelement] = ACTIONS(33),
  },
  [7] = {
    [anon_sym_module] = ACTIONS(35),
    [anon_sym_submodule] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_extension_keyword] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(35),
    [anon_sym_anydata] = ACTIONS(35),
    [anon_sym_anyxml] = ACTIONS(35),
    [anon_sym_argument] = ACTIONS(35),
    [anon_sym_augment] = ACTIONS(35),
    [anon_sym_base] = ACTIONS(35),
    [anon_sym_belongs_DASHto] = ACTIONS(35),
    [anon_sym_bit] = ACTIONS(35),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_choice] = ACTIONS(35),
    [anon_sym_config] = ACTIONS(35),
    [anon_sym_contact] = ACTIONS(35),
    [anon_sym_container] = ACTIONS(35),
    [anon_sym_default] = ACTIONS(35),
    [anon_sym_description] = ACTIONS(35),
    [anon_sym_deviate] = ACTIONS(35),
    [anon_sym_deviation] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(35),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(35),
    [anon_sym_error_DASHmessage] = ACTIONS(35),
    [anon_sym_extension] = ACTIONS(35),
    [anon_sym_feature] = ACTIONS(35),
    [anon_sym_fraction_DASHdigits] = ACTIONS(35),
    [anon_sym_grouping] = ACTIONS(35),
    [anon_sym_identity] = ACTIONS(35),
    [anon_sym_if_DASHfeature] = ACTIONS(35),
    [anon_sym_import] = ACTIONS(35),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_input] = ACTIONS(35),
    [anon_sym_key] = ACTIONS(35),
    [anon_sym_leaf] = ACTIONS(35),
    [anon_sym_leaf_DASHlist] = ACTIONS(35),
    [anon_sym_length] = ACTIONS(35),
    [anon_sym_list] = ACTIONS(35),
    [anon_sym_mandatory] = ACTIONS(35),
    [anon_sym_max_DASHelements] = ACTIONS(35),
    [anon_sym_min_DASHelements] = ACTIONS(35),
    [anon_sym_modifier] = ACTIONS(35),
    [anon_sym_must] = ACTIONS(35),
    [anon_sym_namespace] = ACTIONS(35),
    [anon_sym_notification] = ACTIONS(35),
    [anon_sym_ordered_DASHby] = ACTIONS(35),
    [anon_sym_organization] = ACTIONS(35),
    [anon_sym_output] = ACTIONS(35),
    [anon_sym_path] = ACTIONS(35),
    [anon_sym_pattern] = ACTIONS(35),
    [anon_sym_position] = ACTIONS(35),
    [anon_sym_prefix] = ACTIONS(35),
    [anon_sym_presence] = ACTIONS(35),
    [anon_sym_range] = ACTIONS(35),
    [anon_sym_reference] = ACTIONS(35),
    [anon_sym_refine] = ACTIONS(35),
    [anon_sym_require_DASHinstance] = ACTIONS(35),
    [anon_sym_revision] = ACTIONS(35),
    [anon_sym_revision_DASHdate] = ACTIONS(35),
    [anon_sym_rpc] = ACTIONS(35),
    [anon_sym_status] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(35),
    [anon_sym_typedef] = ACTIONS(35),
    [anon_sym_unique] = ACTIONS(35),
    [anon_sym_units] = ACTIONS(35),
    [anon_sym_uses] = ACTIONS(35),
    [anon_sym_value] = ACTIONS(35),
    [anon_sym_when] = ACTIONS(35),
    [anon_sym_yang_DASHversion] = ACTIONS(35),
    [anon_sym_yin_DASHelement] = ACTIONS(35),
  },
  [8] = {
    [anon_sym_module] = ACTIONS(39),
    [anon_sym_submodule] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(41),
    [sym_extension_keyword] = ACTIONS(41),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(39),
    [anon_sym_anydata] = ACTIONS(39),
    [anon_sym_anyxml] = ACTIONS(39),
    [anon_sym_argument] = ACTIONS(39),
    [anon_sym_augment] = ACTIONS(39),
    [anon_sym_base] = ACTIONS(39),
    [anon_sym_belongs_DASHto] = ACTIONS(39),
    [anon_sym_bit] = ACTIONS(39),
    [anon_sym_case] = ACTIONS(39),
    [anon_sym_choice] = ACTIONS(39),
    [anon_sym_config] = ACTIONS(39),
    [anon_sym_contact] = ACTIONS(39),
    [anon_sym_container] = ACTIONS(39),
    [anon_sym_default] = ACTIONS(39),
    [anon_sym_description] = ACTIONS(39),
    [anon_sym_deviate] = ACTIONS(39),
    [anon_sym_deviation] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(39),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(39),
    [anon_sym_error_DASHmessage] = ACTIONS(39),
    [anon_sym_extension] = ACTIONS(39),
    [anon_sym_feature] = ACTIONS(39),
    [anon_sym_fraction_DASHdigits] = ACTIONS(39),
    [anon_sym_grouping] = ACTIONS(39),
    [anon_sym_identity] = ACTIONS(39),
    [anon_sym_if_DASHfeature] = ACTIONS(39),
    [anon_sym_import] = ACTIONS(39),
    [anon_sym_include] = ACTIONS(39),
    [anon_sym_input] = ACTIONS(39),
    [anon_sym_key] = ACTIONS(39),
    [anon_sym_leaf] = ACTIONS(39),
    [anon_sym_leaf_DASHlist] = ACTIONS(39),
    [anon_sym_length] = ACTIONS(39),
    [anon_sym_list] = ACTIONS(39),
    [anon_sym_mandatory] = ACTIONS(39),
    [anon_sym_max_DASHelements] = ACTIONS(39),
    [anon_sym_min_DASHelements] = ACTIONS(39),
    [anon_sym_modifier] = ACTIONS(39),
    [anon_sym_must] = ACTIONS(39),
    [anon_sym_namespace] = ACTIONS(39),
    [anon_sym_notification] = ACTIONS(39),
    [anon_sym_ordered_DASHby] = ACTIONS(39),
    [anon_sym_organization] = ACTIONS(39),
    [anon_sym_output] = ACTIONS(39),
    [anon_sym_path] = ACTIONS(39),
    [anon_sym_pattern] = ACTIONS(39),
    [anon_sym_position] = ACTIONS(39),
    [anon_sym_prefix] = ACTIONS(39),
    [anon_sym_presence] = ACTIONS(39),
    [anon_sym_range] = ACTIONS(39),
    [anon_sym_reference] = ACTIONS(39),
    [anon_sym_refine] = ACTIONS(39),
    [anon_sym_require_DASHinstance] = ACTIONS(39),
    [anon_sym_revision] = ACTIONS(39),
    [anon_sym_revision_DASHdate] = ACTIONS(39),
    [anon_sym_rpc] = ACTIONS(39),
    [anon_sym_status] = ACTIONS(39),
    [anon_sym_type] = ACTIONS(39),
    [anon_sym_typedef] = ACTIONS(39),
    [anon_sym_unique] = ACTIONS(39),
    [anon_sym_units] = ACTIONS(39),
    [anon_sym_uses] = ACTIONS(39),
    [anon_sym_value] = ACTIONS(39),
    [anon_sym_when] = ACTIONS(39),
    [anon_sym_yang_DASHversion] = ACTIONS(39),
    [anon_sym_yin_DASHelement] = ACTIONS(39),
  },
  [9] = {
    [anon_sym_module] = ACTIONS(43),
    [anon_sym_submodule] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym_extension_keyword] = ACTIONS(45),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(43),
    [anon_sym_anydata] = ACTIONS(43),
    [anon_sym_anyxml] = ACTIONS(43),
    [anon_sym_argument] = ACTIONS(43),
    [anon_sym_augment] = ACTIONS(43),
    [anon_sym_base] = ACTIONS(43),
    [anon_sym_belongs_DASHto] = ACTIONS(43),
    [anon_sym_bit] = ACTIONS(43),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_choice] = ACTIONS(43),
    [anon_sym_config] = ACTIONS(43),
    [anon_sym_contact] = ACTIONS(43),
    [anon_sym_container] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(43),
    [anon_sym_description] = ACTIONS(43),
    [anon_sym_deviate] = ACTIONS(43),
    [anon_sym_deviation] = ACTIONS(43),
    [anon_sym_enum] = ACTIONS(43),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(43),
    [anon_sym_error_DASHmessage] = ACTIONS(43),
    [anon_sym_extension] = ACTIONS(43),
    [anon_sym_feature] = ACTIONS(43),
    [anon_sym_fraction_DASHdigits] = ACTIONS(43),
    [anon_sym_grouping] = ACTIONS(43),
    [anon_sym_identity] = ACTIONS(43),
    [anon_sym_if_DASHfeature] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(43),
    [anon_sym_include] = ACTIONS(43),
    [anon_sym_input] = ACTIONS(43),
    [anon_sym_key] = ACTIONS(43),
    [anon_sym_leaf] = ACTIONS(43),
    [anon_sym_leaf_DASHlist] = ACTIONS(43),
    [anon_sym_length] = ACTIONS(43),
    [anon_sym_list] = ACTIONS(43),
    [anon_sym_mandatory] = ACTIONS(43),
    [anon_sym_max_DASHelements] = ACTIONS(43),
    [anon_sym_min_DASHelements] = ACTIONS(43),
    [anon_sym_modifier] = ACTIONS(43),
    [anon_sym_must] = ACTIONS(43),
    [anon_sym_namespace] = ACTIONS(43),
    [anon_sym_notification] = ACTIONS(43),
    [anon_sym_ordered_DASHby] = ACTIONS(43),
    [anon_sym_organization] = ACTIONS(43),
    [anon_sym_output] = ACTIONS(43),
    [anon_sym_path] = ACTIONS(43),
    [anon_sym_pattern] = ACTIONS(43),
    [anon_sym_position] = ACTIONS(43),
    [anon_sym_prefix] = ACTIONS(43),
    [anon_sym_presence] = ACTIONS(43),
    [anon_sym_range] = ACTIONS(43),
    [anon_sym_reference] = ACTIONS(43),
    [anon_sym_refine] = ACTIONS(43),
    [anon_sym_require_DASHinstance] = ACTIONS(43),
    [anon_sym_revision] = ACTIONS(43),
    [anon_sym_revision_DASHdate] = ACTIONS(43),
    [anon_sym_rpc] = ACTIONS(43),
    [anon_sym_status] = ACTIONS(43),
    [anon_sym_type] = ACTIONS(43),
    [anon_sym_typedef] = ACTIONS(43),
    [anon_sym_unique] = ACTIONS(43),
    [anon_sym_units] = ACTIONS(43),
    [anon_sym_uses] = ACTIONS(43),
    [anon_sym_value] = ACTIONS(43),
    [anon_sym_when] = ACTIONS(43),
    [anon_sym_yang_DASHversion] = ACTIONS(43),
    [anon_sym_yin_DASHelement] = ACTIONS(43),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(47),
    [anon_sym_submodule] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(49),
    [sym_extension_keyword] = ACTIONS(49),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(47),
    [anon_sym_anydata] = ACTIONS(47),
    [anon_sym_anyxml] = ACTIONS(47),
    [anon_sym_argument] = ACTIONS(47),
    [anon_sym_augment] = ACTIONS(47),
    [anon_sym_base] = ACTIONS(47),
    [anon_sym_belongs_DASHto] = ACTIONS(47),
    [anon_sym_bit] = ACTIONS(47),
    [anon_sym_case] = ACTIONS(47),
    [anon_sym_choice] = ACTIONS(47),
    [anon_sym_config] = ACTIONS(47),
    [anon_sym_contact] = ACTIONS(47),
    [anon_sym_container] = ACTIONS(47),
    [anon_sym_default] = ACTIONS(47),
    [anon_sym_description] = ACTIONS(47),
    [anon_sym_deviate] = ACTIONS(47),
    [anon_sym_deviation] = ACTIONS(47),
    [anon_sym_enum] = ACTIONS(47),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(47),
    [anon_sym_error_DASHmessage] = ACTIONS(47),
    [anon_sym_extension] = ACTIONS(47),
    [anon_sym_feature] = ACTIONS(47),
    [anon_sym_fraction_DASHdigits] = ACTIONS(47),
    [anon_sym_grouping] = ACTIONS(47),
    [anon_sym_identity] = ACTIONS(47),
    [anon_sym_if_DASHfeature] = ACTIONS(47),
    [anon_sym_import] = ACTIONS(47),
    [anon_sym_include] = ACTIONS(47),
    [anon_sym_input] = ACTIONS(47),
    [anon_sym_key] = ACTIONS(47),
    [anon_sym_leaf] = ACTIONS(47),
    [anon_sym_leaf_DASHlist] = ACTIONS(47),
    [anon_sym_length] = ACTIONS(47),
    [anon_sym_list] = ACTIONS(47),
    [anon_sym_mandatory] = ACTIONS(47),
    [anon_sym_max_DASHelements] = ACTIONS(47),
    [anon_sym_min_DASHelements] = ACTIONS(47),
    [anon_sym_modifier] = ACTIONS(47),
    [anon_sym_must] = ACTIONS(47),
    [anon_sym_namespace] = ACTIONS(47),
    [anon_sym_notification] = ACTIONS(47),
    [anon_sym_ordered_DASHby] = ACTIONS(47),
    [anon_sym_organization] = ACTIONS(47),
    [anon_sym_output] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_pattern] = ACTIONS(47),
    [anon_sym_position] = ACTIONS(47),
    [anon_sym_prefix] = ACTIONS(47),
    [anon_sym_presence] = ACTIONS(47),
    [anon_sym_range] = ACTIONS(47),
    [anon_sym_reference] = ACTIONS(47),
    [anon_sym_refine] = ACTIONS(47),
    [anon_sym_require_DASHinstance] = ACTIONS(47),
    [anon_sym_revision] = ACTIONS(47),
    [anon_sym_revision_DASHdate] = ACTIONS(47),
    [anon_sym_rpc] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_typedef] = ACTIONS(47),
    [anon_sym_unique] = ACTIONS(47),
    [anon_sym_units] = ACTIONS(47),
    [anon_sym_uses] = ACTIONS(47),
    [anon_sym_value] = ACTIONS(47),
    [anon_sym_when] = ACTIONS(47),
    [anon_sym_yang_DASHversion] = ACTIONS(47),
    [anon_sym_yin_DASHelement] = ACTIONS(47),
  },
  [11] = {
    [anon_sym_module] = ACTIONS(51),
    [anon_sym_submodule] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_extension_keyword] = ACTIONS(53),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(51),
    [anon_sym_anydata] = ACTIONS(51),
    [anon_sym_anyxml] = ACTIONS(51),
    [anon_sym_argument] = ACTIONS(51),
    [anon_sym_augment] = ACTIONS(51),
    [anon_sym_base] = ACTIONS(51),
    [anon_sym_belongs_DASHto] = ACTIONS(51),
    [anon_sym_bit] = ACTIONS(51),
    [anon_sym_case] = ACTIONS(51),
    [anon_sym_choice] = ACTIONS(51),
    [anon_sym_config] = ACTIONS(51),
    [anon_sym_contact] = ACTIONS(51),
    [anon_sym_container] = ACTIONS(51),
    [anon_sym_default] = ACTIONS(51),
    [anon_sym_description] = ACTIONS(51),
    [anon_sym_deviate] = ACTIONS(51),
    [anon_sym_deviation] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(51),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(51),
    [anon_sym_error_DASHmessage] = ACTIONS(51),
    [anon_sym_extension] = ACTIONS(51),
    [anon_sym_feature] = ACTIONS(51),
    [anon_sym_fraction_DASHdigits] = ACTIONS(51),
    [anon_sym_grouping] = ACTIONS(51),
    [anon_sym_identity] = ACTIONS(51),
    [anon_sym_if_DASHfeature] = ACTIONS(51),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_include] = ACTIONS(51),
    [anon_sym_input] = ACTIONS(51),
    [anon_sym_key] = ACTIONS(51),
    [anon_sym_leaf] = ACTIONS(51),
    [anon_sym_leaf_DASHlist] = ACTIONS(51),
    [anon_sym_length] = ACTIONS(51),
    [anon_sym_list] = ACTIONS(51),
    [anon_sym_mandatory] = ACTIONS(51),
    [anon_sym_max_DASHelements] = ACTIONS(51),
    [anon_sym_min_DASHelements] = ACTIONS(51),
    [anon_sym_modifier] = ACTIONS(51),
    [anon_sym_must] = ACTIONS(51),
    [anon_sym_namespace] = ACTIONS(51),
    [anon_sym_notification] = ACTIONS(51),
    [anon_sym_ordered_DASHby] = ACTIONS(51),
    [anon_sym_organization] = ACTIONS(51),
    [anon_sym_output] = ACTIONS(51),
    [anon_sym_path] = ACTIONS(51),
    [anon_sym_pattern] = ACTIONS(51),
    [anon_sym_position] = ACTIONS(51),
    [anon_sym_prefix] = ACTIONS(51),
    [anon_sym_presence] = ACTIONS(51),
    [anon_sym_range] = ACTIONS(51),
    [anon_sym_reference] = ACTIONS(51),
    [anon_sym_refine] = ACTIONS(51),
    [anon_sym_require_DASHinstance] = ACTIONS(51),
    [anon_sym_revision] = ACTIONS(51),
    [anon_sym_revision_DASHdate] = ACTIONS(51),
    [anon_sym_rpc] = ACTIONS(51),
    [anon_sym_status] = ACTIONS(51),
    [anon_sym_type] = ACTIONS(51),
    [anon_sym_typedef] = ACTIONS(51),
    [anon_sym_unique] = ACTIONS(51),
    [anon_sym_units] = ACTIONS(51),
    [anon_sym_uses] = ACTIONS(51),
    [anon_sym_value] = ACTIONS(51),
    [anon_sym_when] = ACTIONS(51),
    [anon_sym_yang_DASHversion] = ACTIONS(51),
    [anon_sym_yin_DASHelement] = ACTIONS(51),
  },
  [12] = {
    [anon_sym_module] = ACTIONS(55),
    [anon_sym_submodule] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_extension_keyword] = ACTIONS(57),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(55),
    [anon_sym_anydata] = ACTIONS(55),
    [anon_sym_anyxml] = ACTIONS(55),
    [anon_sym_argument] = ACTIONS(55),
    [anon_sym_augment] = ACTIONS(55),
    [anon_sym_base] = ACTIONS(55),
    [anon_sym_belongs_DASHto] = ACTIONS(55),
    [anon_sym_bit] = ACTIONS(55),
    [anon_sym_case] = ACTIONS(55),
    [anon_sym_choice] = ACTIONS(55),
    [anon_sym_config] = ACTIONS(55),
    [anon_sym_contact] = ACTIONS(55),
    [anon_sym_container] = ACTIONS(55),
    [anon_sym_default] = ACTIONS(55),
    [anon_sym_description] = ACTIONS(55),
    [anon_sym_deviate] = ACTIONS(55),
    [anon_sym_deviation] = ACTIONS(55),
    [anon_sym_enum] = ACTIONS(55),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(55),
    [anon_sym_error_DASHmessage] = ACTIONS(55),
    [anon_sym_extension] = ACTIONS(55),
    [anon_sym_feature] = ACTIONS(55),
    [anon_sym_fraction_DASHdigits] = ACTIONS(55),
    [anon_sym_grouping] = ACTIONS(55),
    [anon_sym_identity] = ACTIONS(55),
    [anon_sym_if_DASHfeature] = ACTIONS(55),
    [anon_sym_import] = ACTIONS(55),
    [anon_sym_include] = ACTIONS(55),
    [anon_sym_input] = ACTIONS(55),
    [anon_sym_key] = ACTIONS(55),
    [anon_sym_leaf] = ACTIONS(55),
    [anon_sym_leaf_DASHlist] = ACTIONS(55),
    [anon_sym_length] = ACTIONS(55),
    [anon_sym_list] = ACTIONS(55),
    [anon_sym_mandatory] = ACTIONS(55),
    [anon_sym_max_DASHelements] = ACTIONS(55),
    [anon_sym_min_DASHelements] = ACTIONS(55),
    [anon_sym_modifier] = ACTIONS(55),
    [anon_sym_must] = ACTIONS(55),
    [anon_sym_namespace] = ACTIONS(55),
    [anon_sym_notification] = ACTIONS(55),
    [anon_sym_ordered_DASHby] = ACTIONS(55),
    [anon_sym_organization] = ACTIONS(55),
    [anon_sym_output] = ACTIONS(55),
    [anon_sym_path] = ACTIONS(55),
    [anon_sym_pattern] = ACTIONS(55),
    [anon_sym_position] = ACTIONS(55),
    [anon_sym_prefix] = ACTIONS(55),
    [anon_sym_presence] = ACTIONS(55),
    [anon_sym_range] = ACTIONS(55),
    [anon_sym_reference] = ACTIONS(55),
    [anon_sym_refine] = ACTIONS(55),
    [anon_sym_require_DASHinstance] = ACTIONS(55),
    [anon_sym_revision] = ACTIONS(55),
    [anon_sym_revision_DASHdate] = ACTIONS(55),
    [anon_sym_rpc] = ACTIONS(55),
    [anon_sym_status] = ACTIONS(55),
    [anon_sym_type] = ACTIONS(55),
    [anon_sym_typedef] = ACTIONS(55),
    [anon_sym_unique] = ACTIONS(55),
    [anon_sym_units] = ACTIONS(55),
    [anon_sym_uses] = ACTIONS(55),
    [anon_sym_value] = ACTIONS(55),
    [anon_sym_when] = ACTIONS(55),
    [anon_sym_yang_DASHversion] = ACTIONS(55),
    [anon_sym_yin_DASHelement] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__sep,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_unquoted_range,
    ACTIONS(73), 1,
      sym_quoted_range,
    ACTIONS(75), 1,
      anon_sym_1_DOT1,
    STATE(8), 1,
      sym_block,
    STATE(18), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(30), 1,
      sym_argument,
    STATE(32), 1,
      sym_string,
    ACTIONS(63), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 5,
      sym_node_identifier,
      sym_date,
      sym_keypath,
      sym_unquoted_string,
      sym_glob,
    STATE(39), 6,
      sym_integer,
      sym_boolean,
      sym_string_concatenation,
      sym_range,
      sym_yang_version,
      sym_built_in_type,
    ACTIONS(77), 19,
      anon_sym_binary,
      anon_sym_bits,
      anon_sym_boolean,
      anon_sym_decimal64,
      anon_sym_empty,
      anon_sym_enumeration,
      anon_sym_identityref,
      anon_sym_instance_DASHidentifier,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_leafref,
      anon_sym_string,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_union,
  [81] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__sep,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_unquoted_range,
    ACTIONS(73), 1,
      sym_quoted_range,
    ACTIONS(75), 1,
      anon_sym_1_DOT1,
    STATE(9), 1,
      sym_block,
    STATE(18), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(26), 1,
      sym_argument,
    STATE(32), 1,
      sym_string,
    ACTIONS(63), 2,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 5,
      sym_node_identifier,
      sym_date,
      sym_keypath,
      sym_unquoted_string,
      sym_glob,
    STATE(39), 6,
      sym_integer,
      sym_boolean,
      sym_string_concatenation,
      sym_range,
      sym_yang_version,
      sym_built_in_type,
    ACTIONS(77), 19,
      anon_sym_binary,
      anon_sym_bits,
      anon_sym_boolean,
      anon_sym_decimal64,
      anon_sym_empty,
      anon_sym_enumeration,
      anon_sym_identityref,
      anon_sym_instance_DASHidentifier,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_leafref,
      anon_sym_string,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_union,
  [162] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(48), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [179] = 5,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(89), 1,
      sym__escape_sequence,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [196] = 4,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(91), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [211] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(28), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [228] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(42), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [245] = 5,
    ACTIONS(89), 1,
      sym__escape_sequence,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      sym__unescaped_double_string_fragment,
    STATE(23), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [262] = 4,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(101), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [277] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(40), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [294] = 5,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(110), 1,
      sym__escape_sequence,
    STATE(23), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [311] = 4,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(115), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [326] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(118), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [336] = 4,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [350] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(122), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [360] = 3,
    ACTIONS(126), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(124), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [372] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      sym__sep,
    STATE(11), 1,
      sym_block,
  [388] = 4,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [402] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(134), 3,
      anon_sym_DQUOTE,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [412] = 3,
    ACTIONS(126), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(136), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [424] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(138), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [433] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(140), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [442] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(142), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [451] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      sym__sep,
    STATE(12), 1,
      sym_block,
  [464] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(146), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [473] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(148), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [482] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(136), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [491] = 3,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [502] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(150), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [511] = 3,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [522] = 2,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [530] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [538] = 2,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [546] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LBRACE,
      sym__sep,
  [554] = 2,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [562] = 2,
    ACTIONS(126), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 81,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 196,
  [SMALL_STATE(18)] = 211,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 277,
  [SMALL_STATE(23)] = 294,
  [SMALL_STATE(24)] = 311,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 350,
  [SMALL_STATE(28)] = 360,
  [SMALL_STATE(29)] = 372,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 402,
  [SMALL_STATE(32)] = 412,
  [SMALL_STATE(33)] = 424,
  [SMALL_STATE(34)] = 433,
  [SMALL_STATE(35)] = 442,
  [SMALL_STATE(36)] = 451,
  [SMALL_STATE(37)] = 464,
  [SMALL_STATE(38)] = 473,
  [SMALL_STATE(39)] = 482,
  [SMALL_STATE(40)] = 491,
  [SMALL_STATE(41)] = 502,
  [SMALL_STATE(42)] = 511,
  [SMALL_STATE(43)] = 522,
  [SMALL_STATE(44)] = 530,
  [SMALL_STATE(45)] = 538,
  [SMALL_STATE(46)] = 546,
  [SMALL_STATE(47)] = 554,
  [SMALL_STATE(48)] = 562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2), SHIFT_REPEAT(16),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2), SHIFT_REPEAT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(23),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concatenation, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_type, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang_version, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 3, .production_id = 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_keyword, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yang(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
