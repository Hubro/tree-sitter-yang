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
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 4
#define TOKEN_COUNT 113
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  sym__word = 1,
  anon_sym_module = 2,
  anon_sym_submodule = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_yang_DASHversion = 6,
  anon_sym_SEMI = 7,
  anon_sym_enum = 8,
  anon_sym_range = 9,
  anon_sym_length = 10,
  sym_extension_keyword = 11,
  sym_identifier = 12,
  sym_node_identifier = 13,
  sym__integer = 14,
  sym_hex = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_PLUS = 20,
  sym__unescaped_double_string_fragment = 21,
  sym__unescaped_single_string_fragment = 22,
  sym__escape_sequence = 23,
  sym_date = 24,
  anon_sym_DOT_DOT = 25,
  sym__keypath = 26,
  anon_sym_1 = 27,
  anon_sym_1_DOT1 = 28,
  sym__unquoted_string = 29,
  sym_comment = 30,
  sym__sep = 31,
  anon_sym_binary = 32,
  anon_sym_bits = 33,
  anon_sym_boolean = 34,
  anon_sym_decimal64 = 35,
  anon_sym_empty = 36,
  anon_sym_enumeration = 37,
  anon_sym_identityref = 38,
  anon_sym_instance_DASHidentifier = 39,
  anon_sym_int8 = 40,
  anon_sym_int16 = 41,
  anon_sym_int32 = 42,
  anon_sym_int64 = 43,
  anon_sym_leafref = 44,
  anon_sym_string = 45,
  anon_sym_uint8 = 46,
  anon_sym_uint16 = 47,
  anon_sym_uint32 = 48,
  anon_sym_uint64 = 49,
  anon_sym_union = 50,
  anon_sym_action = 51,
  anon_sym_anydata = 52,
  anon_sym_anyxml = 53,
  anon_sym_argument = 54,
  anon_sym_augment = 55,
  anon_sym_base = 56,
  anon_sym_belongs_DASHto = 57,
  anon_sym_bit = 58,
  anon_sym_case = 59,
  anon_sym_choice = 60,
  anon_sym_config = 61,
  anon_sym_contact = 62,
  anon_sym_container = 63,
  anon_sym_default = 64,
  anon_sym_description = 65,
  anon_sym_deviate = 66,
  anon_sym_deviation = 67,
  anon_sym_error_DASHapp_DASHtag = 68,
  anon_sym_error_DASHmessage = 69,
  anon_sym_extension = 70,
  anon_sym_feature = 71,
  anon_sym_fraction_DASHdigits = 72,
  anon_sym_grouping = 73,
  anon_sym_identity = 74,
  anon_sym_if_DASHfeature = 75,
  anon_sym_import = 76,
  anon_sym_include = 77,
  anon_sym_input = 78,
  anon_sym_key = 79,
  anon_sym_leaf = 80,
  anon_sym_leaf_DASHlist = 81,
  anon_sym_list = 82,
  anon_sym_mandatory = 83,
  anon_sym_max_DASHelements = 84,
  anon_sym_min_DASHelements = 85,
  anon_sym_modifier = 86,
  anon_sym_must = 87,
  anon_sym_namespace = 88,
  anon_sym_notification = 89,
  anon_sym_ordered_DASHby = 90,
  anon_sym_organization = 91,
  anon_sym_output = 92,
  anon_sym_path = 93,
  anon_sym_pattern = 94,
  anon_sym_position = 95,
  anon_sym_prefix = 96,
  anon_sym_presence = 97,
  anon_sym_reference = 98,
  anon_sym_refine = 99,
  anon_sym_require_DASHinstance = 100,
  anon_sym_revision = 101,
  anon_sym_revision_DASHdate = 102,
  anon_sym_rpc = 103,
  anon_sym_status = 104,
  anon_sym_type = 105,
  anon_sym_typedef = 106,
  anon_sym_unique = 107,
  anon_sym_units = 108,
  anon_sym_uses = 109,
  anon_sym_value = 110,
  anon_sym_when = 111,
  anon_sym_yin_DASHelement = 112,
  sym_yang = 113,
  sym_module = 114,
  sym_submodule = 115,
  sym_block = 116,
  sym_statement = 117,
  sym__yang_version_statement = 118,
  sym__enum_statement = 119,
  sym__range_statement = 120,
  sym__generic_statement = 121,
  sym_extension_statement = 122,
  sym_argument = 123,
  sym_yang_version_argument = 124,
  sym_enum_argument = 125,
  sym_range_argument = 126,
  sym_integer = 127,
  sym_boolean = 128,
  sym_string = 129,
  sym_string_concatenation = 130,
  sym_range = 131,
  sym_unquoted_range = 132,
  sym_quoted_range = 133,
  sym_keypath = 134,
  sym_yang_version = 135,
  sym_unquoted_string = 136,
  sym_built_in_type = 137,
  sym_statement_keyword = 138,
  aux_sym_block_repeat1 = 139,
  aux_sym_string_repeat1 = 140,
  aux_sym_string_repeat2 = 141,
  aux_sym_string_concatenation_repeat1 = 142,
  alias_sym_end = 143,
  alias_sym_enum_value = 144,
  alias_sym_escape_sequence = 145,
  alias_sym_start = 146,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_module] = "module",
  [anon_sym_submodule] = "submodule",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_yang_DASHversion] = "statement_keyword",
  [anon_sym_SEMI] = ";",
  [anon_sym_enum] = "statement_keyword",
  [anon_sym_range] = "statement_keyword",
  [anon_sym_length] = "statement_keyword",
  [sym_extension_keyword] = "extension_keyword",
  [sym_identifier] = "identifier",
  [sym_node_identifier] = "node_identifier",
  [sym__integer] = "_integer",
  [sym_hex] = "integer",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PLUS] = "plus_symbol",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym__unescaped_single_string_fragment] = "_unescaped_single_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_date] = "date",
  [anon_sym_DOT_DOT] = "dots",
  [sym__keypath] = "_keypath",
  [anon_sym_1] = "1",
  [anon_sym_1_DOT1] = "1.1",
  [sym__unquoted_string] = "_unquoted_string",
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
  [anon_sym_yin_DASHelement] = "yin-element",
  [sym_yang] = "yang",
  [sym_module] = "module",
  [sym_submodule] = "submodule",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym__yang_version_statement] = "_yang_version_statement",
  [sym__enum_statement] = "_enum_statement",
  [sym__range_statement] = "_range_statement",
  [sym__generic_statement] = "_generic_statement",
  [sym_extension_statement] = "extension_statement",
  [sym_argument] = "argument",
  [sym_yang_version_argument] = "argument",
  [sym_enum_argument] = "argument",
  [sym_range_argument] = "argument",
  [sym_integer] = "integer",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_string_concatenation] = "string_concatenation",
  [sym_range] = "range",
  [sym_unquoted_range] = "unquoted_range",
  [sym_quoted_range] = "quoted_range",
  [sym_keypath] = "keypath",
  [sym_yang_version] = "yang_version",
  [sym_unquoted_string] = "unquoted_string",
  [sym_built_in_type] = "built_in_type",
  [sym_statement_keyword] = "statement_keyword",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_concatenation_repeat1] = "string_concatenation_repeat1",
  [alias_sym_end] = "end",
  [alias_sym_enum_value] = "enum_value",
  [alias_sym_escape_sequence] = "escape_sequence",
  [alias_sym_start] = "start",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_submodule] = anon_sym_submodule,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_yang_DASHversion] = sym_statement_keyword,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_enum] = sym_statement_keyword,
  [anon_sym_range] = sym_statement_keyword,
  [anon_sym_length] = sym_statement_keyword,
  [sym_extension_keyword] = sym_extension_keyword,
  [sym_identifier] = sym_identifier,
  [sym_node_identifier] = sym_node_identifier,
  [sym__integer] = sym__integer,
  [sym_hex] = sym_integer,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym__unescaped_double_string_fragment] = sym__unescaped_double_string_fragment,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_date] = sym_date,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym__keypath] = sym__keypath,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_1_DOT1] = anon_sym_1_DOT1,
  [sym__unquoted_string] = sym__unquoted_string,
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
  [anon_sym_yin_DASHelement] = anon_sym_yin_DASHelement,
  [sym_yang] = sym_yang,
  [sym_module] = sym_module,
  [sym_submodule] = sym_submodule,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym__yang_version_statement] = sym__yang_version_statement,
  [sym__enum_statement] = sym__enum_statement,
  [sym__range_statement] = sym__range_statement,
  [sym__generic_statement] = sym__generic_statement,
  [sym_extension_statement] = sym_extension_statement,
  [sym_argument] = sym_argument,
  [sym_yang_version_argument] = sym_argument,
  [sym_enum_argument] = sym_argument,
  [sym_range_argument] = sym_argument,
  [sym_integer] = sym_integer,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_string_concatenation] = sym_string_concatenation,
  [sym_range] = sym_range,
  [sym_unquoted_range] = sym_unquoted_range,
  [sym_quoted_range] = sym_quoted_range,
  [sym_keypath] = sym_keypath,
  [sym_yang_version] = sym_yang_version,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_built_in_type] = sym_built_in_type,
  [sym_statement_keyword] = sym_statement_keyword,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_concatenation_repeat1] = aux_sym_string_concatenation_repeat1,
  [alias_sym_end] = alias_sym_end,
  [alias_sym_enum_value] = alias_sym_enum_value,
  [alias_sym_escape_sequence] = alias_sym_escape_sequence,
  [alias_sym_start] = alias_sym_start,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
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
  [anon_sym_yang_DASHversion] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = true,
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
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [sym__keypath] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
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
  [sym__yang_version_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__enum_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__range_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__generic_statement] = {
    .visible = false,
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
  [sym_yang_version_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_range_argument] = {
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
  [sym_yang_version] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
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
  [alias_sym_end] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_enum_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_start] = {
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
  [4] = {
    [0] = alias_sym_enum_value,
  },
  [5] = {
    [0] = alias_sym_start,
    [2] = alias_sym_end,
  },
  [6] = {
    [1] = alias_sym_start,
    [3] = alias_sym_end,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__unquoted_string_character_set_1(int32_t c) {
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
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '+') ADVANCE(816);
      if (lookahead == '-') ADVANCE(528);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(509);
      if (lookahead == '0') ADVANCE(803);
      if (lookahead == '1') ADVANCE(812);
      if (lookahead == ';') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(853);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(537);
      if (lookahead == 'd') ADVANCE(591);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 'f') ADVANCE(542);
      if (lookahead == 'g') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == 'k') ADVANCE(595);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == 'm') ADVANCE(538);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(734);
      if (lookahead == 'p') ADVANCE(547);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == 's') ADVANCE(761);
      if (lookahead == 't') ADVANCE(736);
      if (lookahead == 'u') ADVANCE(647);
      if (lookahead == 'v') ADVANCE(544);
      if (lookahead == 'w') ADVANCE(639);
      if (lookahead == 'y') ADVANCE(562);
      if (lookahead == '{') ADVANCE(816);
      if (lookahead == '}') ADVANCE(816);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(805);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '-') ADVANCE(837);
      if (lookahead == '/') ADVANCE(832);
      if (lookahead == '0') ADVANCE(495);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead == '{') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(852);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(848);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(852);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '/') ADVANCE(833);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(848);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '/') ADVANCE(509);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(805);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '/') ADVANCE(818);
      if (lookahead == '\\') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(821);
      if (lookahead != 0) ADVANCE(822);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(850);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(849);
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
      if (lookahead == '.') ADVANCE(827);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(831);
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
      if (lookahead == 'a') ADVANCE(874);
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
      if (lookahead == 'c') ADVANCE(925);
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
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(927);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(882);
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
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(888);
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
      if (lookahead == 'e') ADVANCE(893);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(920);
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
      if (lookahead == 'e') ADVANCE(897);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(922);
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
      if (lookahead == 'f') ADVANCE(902);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(928);
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
      if (lookahead == 'g') ADVANCE(883);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(895);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'g') ADVANCE(890);
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
      if (lookahead == 'h') ADVANCE(915);
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
      if (lookahead == 'h') ADVANCE(398);
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
      if (lookahead == 'l') ADVANCE(875);
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
      if (lookahead == 'm') ADVANCE(396);
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
      if (lookahead == 'n') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(873);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(917);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(923);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(892);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(911);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(913);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(394);
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
      if (lookahead == 'o') ADVANCE(879);
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
      if (lookahead == 'r') ADVANCE(908);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(885);
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
      if (lookahead == 's') ADVANCE(931);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(907);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 's') ADVANCE(894);
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
      if (lookahead == 't') ADVANCE(880);
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
      if (lookahead == 't') ADVANCE(904);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(909);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(900);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(877);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(884);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(876);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(903);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 't') ADVANCE(934);
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
      if (lookahead == 'x') ADVANCE(918);
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
      if (lookahead == 'y') ADVANCE(901);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(896);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(905);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(912);
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
      if (lookahead == 'd') ADVANCE(373);
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
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 373:
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 374:
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == 'x') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(825);
      if (lookahead != 0) ADVANCE(823);
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
      if (lookahead == '}') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 378:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(823);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 384:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      END_STATE();
    case 385:
      if (eof) ADVANCE(387);
      if (lookahead == '"') ADVANCE(505);
      if (lookahead == '\'') ADVANCE(506);
      if (lookahead == '+') ADVANCE(507);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == '{') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 386:
      if (eof) ADVANCE(387);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '1') ADVANCE(830);
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
          lookahead == ' ') ADVANCE(852);
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
      ACCEPT_TOKEN(anon_sym_yang_DASHversion);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_extension_keyword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '1') ADVANCE(409);
      if (lookahead == '3') ADVANCE(404);
      if (lookahead == '6') ADVANCE(406);
      if (lookahead == '8') ADVANCE(862);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '1') ADVANCE(410);
      if (lookahead == '3') ADVANCE(405);
      if (lookahead == '6') ADVANCE(407);
      if (lookahead == '8') ADVANCE(868);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '2') ADVANCE(864);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '2') ADVANCE(870);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '4') ADVANCE(865);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '4') ADVANCE(871);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '4') ADVANCE(857);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '6') ADVANCE(863);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '6') ADVANCE(869);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'a') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'a') ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'a') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'a') ADVANCE(451);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'a') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'a') ADVANCE(458);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'a') ADVANCE(486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'c') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'c') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == 'n') ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'd') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(503);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(504);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(401);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(473);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(469);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(463);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'e') ADVANCE(464);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(866);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(860);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(449);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'g') ADVANCE(867);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(443);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(438);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(482);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'l') ADVANCE(478);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'l') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'l') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == 'n') ADVANCE(487);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'm') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'm') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(872);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(856);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(859);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 't') ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(481);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(484);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'n') ADVANCE(485);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'o') ADVANCE(452);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'o') ADVANCE(457);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'o') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'p') ADVANCE(479);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(861);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(488);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(490);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(444);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(428);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'r') ADVANCE(429);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 's') ADVANCE(855);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 's') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 't') ADVANCE(489);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 't') ADVANCE(472);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 't') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 't') ADVANCE(491);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 't') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 't') ADVANCE(447);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 't') ADVANCE(446);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 't') ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'u') ADVANCE(454);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'u') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(858);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(854);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (lookahead == 'y') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(844);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(493);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '-') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '/') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(510);
      if (lookahead == '/') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(796);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(555);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(565);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(584);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(677);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(601);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(778);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(777);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(656);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(587);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '0') ADVANCE(804);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '1') ADVANCE(532);
      if (lookahead == '3') ADVANCE(530);
      if (lookahead == '6') ADVANCE(531);
      if (lookahead == '8') ADVANCE(802);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '2') ADVANCE(802);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '4') ADVANCE(802);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '6') ADVANCE(802);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '6') ADVANCE(531);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'i') ADVANCE(691);
      if (lookahead == 'o') ADVANCE(716);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead == 'h') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(688);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == 'o') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead == 'p') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(631);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(629);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'm') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(776);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(775);
      if (lookahead == 'r') ADVANCE(665);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'b') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'b') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(766);
      if (lookahead == 'n') ADVANCE(799);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead == 'u') ADVANCE(636);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(743);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead == 'f') ADVANCE(552);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 'v') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(674);
      if (lookahead == 'p') ADVANCE(791);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'c') ADVANCE(781);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(645);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(599);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 'm') ADVANCE(727);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(602);
      if (lookahead == 'g') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'x') ADVANCE(681);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'd') ADVANCE(618);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(708);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == 'i') ADVANCE(695);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(604);
      if (lookahead == 'q') ADVANCE(792);
      if (lookahead == 'v') ADVANCE(652);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(653);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 's') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'f') ADVANCE(651);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'g') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'g') ADVANCE(513);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'g') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'g') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'g') ADVANCE(764);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'g') ADVANCE(662);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'g') ADVANCE(793);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'g') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'h') ADVANCE(802);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'h') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(797);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(700);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(721);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(768);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(769);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(746);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(726);
      if (lookahead == 'n') ADVANCE(785);
      if (lookahead == 'r') ADVANCE(739);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(667);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(616);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 'x') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(541);
      if (lookahead == 't') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(631);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(630);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(629);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(643);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(758);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(780);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(787);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead == 'q') ADVANCE(788);
      if (lookahead == 't') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(765);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(665);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(770);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(788);
      if (lookahead == 'y') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(750);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(784);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 's') ADVANCE(666);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead == 'u') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(638);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(654);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(800);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(711);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 't') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'v') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'x') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'y') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'y') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'y') ADVANCE(744);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == 'z') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '/') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(822);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(819);
      if (lookahead == '/') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(822);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(822);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(823);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(824);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_date);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__keypath);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(846);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__keypath);
      if (lookahead == '/') ADVANCE(844);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(835);
      if (lookahead == '/') ADVANCE(838);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(835);
      if (lookahead == '/') ADVANCE(838);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(834);
      if (lookahead == '/') ADVANCE(848);
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
      ACCEPT_TOKEN(sym__unquoted_string);
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
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(843);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '0') ADVANCE(496);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\\') ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(838);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(841);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(828);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(493);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(829);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(850);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(384);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(852);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__word);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_decimal64);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_empty);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_enumeration);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_identityref);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_instance_DASHidentifier);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_leafref);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == ':') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(848);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_anydata);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_anyxml);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_argument);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_augment);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_belongs_DASHto);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_choice);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_contact);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_container);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_deviate);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_deviation);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_error_DASHapp_DASHtag);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_error_DASHmessage);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_extension);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_feature);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_fraction_DASHdigits);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_grouping);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_identity);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_if_DASHfeature);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_leaf);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_leaf_DASHlist);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_mandatory);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_max_DASHelements);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_min_DASHelements);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_modifier);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_must);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_notification);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_ordered_DASHby);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_organization);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_prefix);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_presence);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_reference);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_refine);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_require_DASHinstance);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_revision);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_revision_DASHdate);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_rpc);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_status);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 927:
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
    case 928:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_unique);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_units);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 934:
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

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
  [13] = {.lex_state = 386},
  [14] = {.lex_state = 386},
  [15] = {.lex_state = 386},
  [16] = {.lex_state = 386},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 385},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 386},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 385},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 385},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 385},
  [33] = {.lex_state = 385},
  [34] = {.lex_state = 385},
  [35] = {.lex_state = 385},
  [36] = {.lex_state = 385},
  [37] = {.lex_state = 385},
  [38] = {.lex_state = 4},
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
  [49] = {.lex_state = 385},
  [50] = {.lex_state = 385},
  [51] = {.lex_state = 385},
  [52] = {.lex_state = 385},
  [53] = {.lex_state = 385},
  [54] = {.lex_state = 385},
  [55] = {.lex_state = 385},
  [56] = {.lex_state = 385},
  [57] = {.lex_state = 385},
  [58] = {.lex_state = 385},
  [59] = {.lex_state = 385},
  [60] = {.lex_state = 385},
  [61] = {.lex_state = 385},
  [62] = {.lex_state = 385},
  [63] = {.lex_state = 385},
  [64] = {.lex_state = 385},
  [65] = {.lex_state = 385},
  [66] = {.lex_state = 385},
  [67] = {.lex_state = 385},
  [68] = {.lex_state = 385},
  [69] = {.lex_state = 385},
  [70] = {.lex_state = 385},
  [71] = {.lex_state = 385},
  [72] = {.lex_state = 385},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_submodule] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_yang_DASHversion] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [sym_extension_keyword] = ACTIONS(1),
    [sym__integer] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym__unescaped_double_string_fragment] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__sep] = ACTIONS(3),
    [anon_sym_binary] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_decimal64] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
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
    [anon_sym_yin_DASHelement] = ACTIONS(1),
  },
  [1] = {
    [sym_yang] = STATE(67),
    [sym_module] = STATE(69),
    [sym_submodule] = STATE(69),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_submodule] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym__yang_version_statement] = STATE(16),
    [sym__enum_statement] = STATE(16),
    [sym__range_statement] = STATE(16),
    [sym__generic_statement] = STATE(16),
    [sym_extension_statement] = STATE(2),
    [sym_statement_keyword] = STATE(46),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_submodule] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(14),
    [anon_sym_yang_DASHversion] = ACTIONS(16),
    [anon_sym_enum] = ACTIONS(19),
    [anon_sym_range] = ACTIONS(22),
    [anon_sym_length] = ACTIONS(22),
    [sym_extension_keyword] = ACTIONS(25),
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
    [anon_sym_yin_DASHelement] = ACTIONS(11),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym__yang_version_statement] = STATE(16),
    [sym__enum_statement] = STATE(16),
    [sym__range_statement] = STATE(16),
    [sym__generic_statement] = STATE(16),
    [sym_extension_statement] = STATE(2),
    [sym_statement_keyword] = STATE(46),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_module] = ACTIONS(28),
    [anon_sym_submodule] = ACTIONS(28),
    [anon_sym_RBRACE] = ACTIONS(30),
    [anon_sym_yang_DASHversion] = ACTIONS(32),
    [anon_sym_enum] = ACTIONS(34),
    [anon_sym_range] = ACTIONS(36),
    [anon_sym_length] = ACTIONS(36),
    [sym_extension_keyword] = ACTIONS(38),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(28),
    [anon_sym_anydata] = ACTIONS(28),
    [anon_sym_anyxml] = ACTIONS(28),
    [anon_sym_argument] = ACTIONS(28),
    [anon_sym_augment] = ACTIONS(28),
    [anon_sym_base] = ACTIONS(28),
    [anon_sym_belongs_DASHto] = ACTIONS(28),
    [anon_sym_bit] = ACTIONS(28),
    [anon_sym_case] = ACTIONS(28),
    [anon_sym_choice] = ACTIONS(28),
    [anon_sym_config] = ACTIONS(28),
    [anon_sym_contact] = ACTIONS(28),
    [anon_sym_container] = ACTIONS(28),
    [anon_sym_default] = ACTIONS(28),
    [anon_sym_description] = ACTIONS(28),
    [anon_sym_deviate] = ACTIONS(28),
    [anon_sym_deviation] = ACTIONS(28),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(28),
    [anon_sym_error_DASHmessage] = ACTIONS(28),
    [anon_sym_extension] = ACTIONS(28),
    [anon_sym_feature] = ACTIONS(28),
    [anon_sym_fraction_DASHdigits] = ACTIONS(28),
    [anon_sym_grouping] = ACTIONS(28),
    [anon_sym_identity] = ACTIONS(28),
    [anon_sym_if_DASHfeature] = ACTIONS(28),
    [anon_sym_import] = ACTIONS(28),
    [anon_sym_include] = ACTIONS(28),
    [anon_sym_input] = ACTIONS(28),
    [anon_sym_key] = ACTIONS(28),
    [anon_sym_leaf] = ACTIONS(28),
    [anon_sym_leaf_DASHlist] = ACTIONS(28),
    [anon_sym_list] = ACTIONS(28),
    [anon_sym_mandatory] = ACTIONS(28),
    [anon_sym_max_DASHelements] = ACTIONS(28),
    [anon_sym_min_DASHelements] = ACTIONS(28),
    [anon_sym_modifier] = ACTIONS(28),
    [anon_sym_must] = ACTIONS(28),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_notification] = ACTIONS(28),
    [anon_sym_ordered_DASHby] = ACTIONS(28),
    [anon_sym_organization] = ACTIONS(28),
    [anon_sym_output] = ACTIONS(28),
    [anon_sym_path] = ACTIONS(28),
    [anon_sym_pattern] = ACTIONS(28),
    [anon_sym_position] = ACTIONS(28),
    [anon_sym_prefix] = ACTIONS(28),
    [anon_sym_presence] = ACTIONS(28),
    [anon_sym_reference] = ACTIONS(28),
    [anon_sym_refine] = ACTIONS(28),
    [anon_sym_require_DASHinstance] = ACTIONS(28),
    [anon_sym_revision] = ACTIONS(28),
    [anon_sym_revision_DASHdate] = ACTIONS(28),
    [anon_sym_rpc] = ACTIONS(28),
    [anon_sym_status] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(28),
    [anon_sym_typedef] = ACTIONS(28),
    [anon_sym_unique] = ACTIONS(28),
    [anon_sym_units] = ACTIONS(28),
    [anon_sym_uses] = ACTIONS(28),
    [anon_sym_value] = ACTIONS(28),
    [anon_sym_when] = ACTIONS(28),
    [anon_sym_yin_DASHelement] = ACTIONS(28),
  },
  [4] = {
    [sym_statement] = STATE(3),
    [sym__yang_version_statement] = STATE(16),
    [sym__enum_statement] = STATE(16),
    [sym__range_statement] = STATE(16),
    [sym__generic_statement] = STATE(16),
    [sym_extension_statement] = STATE(3),
    [sym_statement_keyword] = STATE(46),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_module] = ACTIONS(28),
    [anon_sym_submodule] = ACTIONS(28),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_yang_DASHversion] = ACTIONS(32),
    [anon_sym_enum] = ACTIONS(34),
    [anon_sym_range] = ACTIONS(36),
    [anon_sym_length] = ACTIONS(36),
    [sym_extension_keyword] = ACTIONS(38),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(28),
    [anon_sym_anydata] = ACTIONS(28),
    [anon_sym_anyxml] = ACTIONS(28),
    [anon_sym_argument] = ACTIONS(28),
    [anon_sym_augment] = ACTIONS(28),
    [anon_sym_base] = ACTIONS(28),
    [anon_sym_belongs_DASHto] = ACTIONS(28),
    [anon_sym_bit] = ACTIONS(28),
    [anon_sym_case] = ACTIONS(28),
    [anon_sym_choice] = ACTIONS(28),
    [anon_sym_config] = ACTIONS(28),
    [anon_sym_contact] = ACTIONS(28),
    [anon_sym_container] = ACTIONS(28),
    [anon_sym_default] = ACTIONS(28),
    [anon_sym_description] = ACTIONS(28),
    [anon_sym_deviate] = ACTIONS(28),
    [anon_sym_deviation] = ACTIONS(28),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(28),
    [anon_sym_error_DASHmessage] = ACTIONS(28),
    [anon_sym_extension] = ACTIONS(28),
    [anon_sym_feature] = ACTIONS(28),
    [anon_sym_fraction_DASHdigits] = ACTIONS(28),
    [anon_sym_grouping] = ACTIONS(28),
    [anon_sym_identity] = ACTIONS(28),
    [anon_sym_if_DASHfeature] = ACTIONS(28),
    [anon_sym_import] = ACTIONS(28),
    [anon_sym_include] = ACTIONS(28),
    [anon_sym_input] = ACTIONS(28),
    [anon_sym_key] = ACTIONS(28),
    [anon_sym_leaf] = ACTIONS(28),
    [anon_sym_leaf_DASHlist] = ACTIONS(28),
    [anon_sym_list] = ACTIONS(28),
    [anon_sym_mandatory] = ACTIONS(28),
    [anon_sym_max_DASHelements] = ACTIONS(28),
    [anon_sym_min_DASHelements] = ACTIONS(28),
    [anon_sym_modifier] = ACTIONS(28),
    [anon_sym_must] = ACTIONS(28),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_notification] = ACTIONS(28),
    [anon_sym_ordered_DASHby] = ACTIONS(28),
    [anon_sym_organization] = ACTIONS(28),
    [anon_sym_output] = ACTIONS(28),
    [anon_sym_path] = ACTIONS(28),
    [anon_sym_pattern] = ACTIONS(28),
    [anon_sym_position] = ACTIONS(28),
    [anon_sym_prefix] = ACTIONS(28),
    [anon_sym_presence] = ACTIONS(28),
    [anon_sym_reference] = ACTIONS(28),
    [anon_sym_refine] = ACTIONS(28),
    [anon_sym_require_DASHinstance] = ACTIONS(28),
    [anon_sym_revision] = ACTIONS(28),
    [anon_sym_revision_DASHdate] = ACTIONS(28),
    [anon_sym_rpc] = ACTIONS(28),
    [anon_sym_status] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(28),
    [anon_sym_typedef] = ACTIONS(28),
    [anon_sym_unique] = ACTIONS(28),
    [anon_sym_units] = ACTIONS(28),
    [anon_sym_uses] = ACTIONS(28),
    [anon_sym_value] = ACTIONS(28),
    [anon_sym_when] = ACTIONS(28),
    [anon_sym_yin_DASHelement] = ACTIONS(28),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_module] = ACTIONS(44),
    [anon_sym_submodule] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(42),
    [anon_sym_yang_DASHversion] = ACTIONS(44),
    [anon_sym_enum] = ACTIONS(44),
    [anon_sym_range] = ACTIONS(44),
    [anon_sym_length] = ACTIONS(44),
    [sym_extension_keyword] = ACTIONS(42),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(44),
    [anon_sym_anydata] = ACTIONS(44),
    [anon_sym_anyxml] = ACTIONS(44),
    [anon_sym_argument] = ACTIONS(44),
    [anon_sym_augment] = ACTIONS(44),
    [anon_sym_base] = ACTIONS(44),
    [anon_sym_belongs_DASHto] = ACTIONS(44),
    [anon_sym_bit] = ACTIONS(44),
    [anon_sym_case] = ACTIONS(44),
    [anon_sym_choice] = ACTIONS(44),
    [anon_sym_config] = ACTIONS(44),
    [anon_sym_contact] = ACTIONS(44),
    [anon_sym_container] = ACTIONS(44),
    [anon_sym_default] = ACTIONS(44),
    [anon_sym_description] = ACTIONS(44),
    [anon_sym_deviate] = ACTIONS(44),
    [anon_sym_deviation] = ACTIONS(44),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(44),
    [anon_sym_error_DASHmessage] = ACTIONS(44),
    [anon_sym_extension] = ACTIONS(44),
    [anon_sym_feature] = ACTIONS(44),
    [anon_sym_fraction_DASHdigits] = ACTIONS(44),
    [anon_sym_grouping] = ACTIONS(44),
    [anon_sym_identity] = ACTIONS(44),
    [anon_sym_if_DASHfeature] = ACTIONS(44),
    [anon_sym_import] = ACTIONS(44),
    [anon_sym_include] = ACTIONS(44),
    [anon_sym_input] = ACTIONS(44),
    [anon_sym_key] = ACTIONS(44),
    [anon_sym_leaf] = ACTIONS(44),
    [anon_sym_leaf_DASHlist] = ACTIONS(44),
    [anon_sym_list] = ACTIONS(44),
    [anon_sym_mandatory] = ACTIONS(44),
    [anon_sym_max_DASHelements] = ACTIONS(44),
    [anon_sym_min_DASHelements] = ACTIONS(44),
    [anon_sym_modifier] = ACTIONS(44),
    [anon_sym_must] = ACTIONS(44),
    [anon_sym_namespace] = ACTIONS(44),
    [anon_sym_notification] = ACTIONS(44),
    [anon_sym_ordered_DASHby] = ACTIONS(44),
    [anon_sym_organization] = ACTIONS(44),
    [anon_sym_output] = ACTIONS(44),
    [anon_sym_path] = ACTIONS(44),
    [anon_sym_pattern] = ACTIONS(44),
    [anon_sym_position] = ACTIONS(44),
    [anon_sym_prefix] = ACTIONS(44),
    [anon_sym_presence] = ACTIONS(44),
    [anon_sym_reference] = ACTIONS(44),
    [anon_sym_refine] = ACTIONS(44),
    [anon_sym_require_DASHinstance] = ACTIONS(44),
    [anon_sym_revision] = ACTIONS(44),
    [anon_sym_revision_DASHdate] = ACTIONS(44),
    [anon_sym_rpc] = ACTIONS(44),
    [anon_sym_status] = ACTIONS(44),
    [anon_sym_type] = ACTIONS(44),
    [anon_sym_typedef] = ACTIONS(44),
    [anon_sym_unique] = ACTIONS(44),
    [anon_sym_units] = ACTIONS(44),
    [anon_sym_uses] = ACTIONS(44),
    [anon_sym_value] = ACTIONS(44),
    [anon_sym_when] = ACTIONS(44),
    [anon_sym_yin_DASHelement] = ACTIONS(44),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_module] = ACTIONS(48),
    [anon_sym_submodule] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_yang_DASHversion] = ACTIONS(48),
    [anon_sym_enum] = ACTIONS(48),
    [anon_sym_range] = ACTIONS(48),
    [anon_sym_length] = ACTIONS(48),
    [sym_extension_keyword] = ACTIONS(46),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(48),
    [anon_sym_anydata] = ACTIONS(48),
    [anon_sym_anyxml] = ACTIONS(48),
    [anon_sym_argument] = ACTIONS(48),
    [anon_sym_augment] = ACTIONS(48),
    [anon_sym_base] = ACTIONS(48),
    [anon_sym_belongs_DASHto] = ACTIONS(48),
    [anon_sym_bit] = ACTIONS(48),
    [anon_sym_case] = ACTIONS(48),
    [anon_sym_choice] = ACTIONS(48),
    [anon_sym_config] = ACTIONS(48),
    [anon_sym_contact] = ACTIONS(48),
    [anon_sym_container] = ACTIONS(48),
    [anon_sym_default] = ACTIONS(48),
    [anon_sym_description] = ACTIONS(48),
    [anon_sym_deviate] = ACTIONS(48),
    [anon_sym_deviation] = ACTIONS(48),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(48),
    [anon_sym_error_DASHmessage] = ACTIONS(48),
    [anon_sym_extension] = ACTIONS(48),
    [anon_sym_feature] = ACTIONS(48),
    [anon_sym_fraction_DASHdigits] = ACTIONS(48),
    [anon_sym_grouping] = ACTIONS(48),
    [anon_sym_identity] = ACTIONS(48),
    [anon_sym_if_DASHfeature] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(48),
    [anon_sym_include] = ACTIONS(48),
    [anon_sym_input] = ACTIONS(48),
    [anon_sym_key] = ACTIONS(48),
    [anon_sym_leaf] = ACTIONS(48),
    [anon_sym_leaf_DASHlist] = ACTIONS(48),
    [anon_sym_list] = ACTIONS(48),
    [anon_sym_mandatory] = ACTIONS(48),
    [anon_sym_max_DASHelements] = ACTIONS(48),
    [anon_sym_min_DASHelements] = ACTIONS(48),
    [anon_sym_modifier] = ACTIONS(48),
    [anon_sym_must] = ACTIONS(48),
    [anon_sym_namespace] = ACTIONS(48),
    [anon_sym_notification] = ACTIONS(48),
    [anon_sym_ordered_DASHby] = ACTIONS(48),
    [anon_sym_organization] = ACTIONS(48),
    [anon_sym_output] = ACTIONS(48),
    [anon_sym_path] = ACTIONS(48),
    [anon_sym_pattern] = ACTIONS(48),
    [anon_sym_position] = ACTIONS(48),
    [anon_sym_prefix] = ACTIONS(48),
    [anon_sym_presence] = ACTIONS(48),
    [anon_sym_reference] = ACTIONS(48),
    [anon_sym_refine] = ACTIONS(48),
    [anon_sym_require_DASHinstance] = ACTIONS(48),
    [anon_sym_revision] = ACTIONS(48),
    [anon_sym_revision_DASHdate] = ACTIONS(48),
    [anon_sym_rpc] = ACTIONS(48),
    [anon_sym_status] = ACTIONS(48),
    [anon_sym_type] = ACTIONS(48),
    [anon_sym_typedef] = ACTIONS(48),
    [anon_sym_unique] = ACTIONS(48),
    [anon_sym_units] = ACTIONS(48),
    [anon_sym_uses] = ACTIONS(48),
    [anon_sym_value] = ACTIONS(48),
    [anon_sym_when] = ACTIONS(48),
    [anon_sym_yin_DASHelement] = ACTIONS(48),
  },
  [7] = {
    [anon_sym_module] = ACTIONS(50),
    [anon_sym_submodule] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_yang_DASHversion] = ACTIONS(50),
    [anon_sym_enum] = ACTIONS(50),
    [anon_sym_range] = ACTIONS(50),
    [anon_sym_length] = ACTIONS(50),
    [sym_extension_keyword] = ACTIONS(52),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(50),
    [anon_sym_anydata] = ACTIONS(50),
    [anon_sym_anyxml] = ACTIONS(50),
    [anon_sym_argument] = ACTIONS(50),
    [anon_sym_augment] = ACTIONS(50),
    [anon_sym_base] = ACTIONS(50),
    [anon_sym_belongs_DASHto] = ACTIONS(50),
    [anon_sym_bit] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_choice] = ACTIONS(50),
    [anon_sym_config] = ACTIONS(50),
    [anon_sym_contact] = ACTIONS(50),
    [anon_sym_container] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_description] = ACTIONS(50),
    [anon_sym_deviate] = ACTIONS(50),
    [anon_sym_deviation] = ACTIONS(50),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(50),
    [anon_sym_error_DASHmessage] = ACTIONS(50),
    [anon_sym_extension] = ACTIONS(50),
    [anon_sym_feature] = ACTIONS(50),
    [anon_sym_fraction_DASHdigits] = ACTIONS(50),
    [anon_sym_grouping] = ACTIONS(50),
    [anon_sym_identity] = ACTIONS(50),
    [anon_sym_if_DASHfeature] = ACTIONS(50),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_include] = ACTIONS(50),
    [anon_sym_input] = ACTIONS(50),
    [anon_sym_key] = ACTIONS(50),
    [anon_sym_leaf] = ACTIONS(50),
    [anon_sym_leaf_DASHlist] = ACTIONS(50),
    [anon_sym_list] = ACTIONS(50),
    [anon_sym_mandatory] = ACTIONS(50),
    [anon_sym_max_DASHelements] = ACTIONS(50),
    [anon_sym_min_DASHelements] = ACTIONS(50),
    [anon_sym_modifier] = ACTIONS(50),
    [anon_sym_must] = ACTIONS(50),
    [anon_sym_namespace] = ACTIONS(50),
    [anon_sym_notification] = ACTIONS(50),
    [anon_sym_ordered_DASHby] = ACTIONS(50),
    [anon_sym_organization] = ACTIONS(50),
    [anon_sym_output] = ACTIONS(50),
    [anon_sym_path] = ACTIONS(50),
    [anon_sym_pattern] = ACTIONS(50),
    [anon_sym_position] = ACTIONS(50),
    [anon_sym_prefix] = ACTIONS(50),
    [anon_sym_presence] = ACTIONS(50),
    [anon_sym_reference] = ACTIONS(50),
    [anon_sym_refine] = ACTIONS(50),
    [anon_sym_require_DASHinstance] = ACTIONS(50),
    [anon_sym_revision] = ACTIONS(50),
    [anon_sym_revision_DASHdate] = ACTIONS(50),
    [anon_sym_rpc] = ACTIONS(50),
    [anon_sym_status] = ACTIONS(50),
    [anon_sym_type] = ACTIONS(50),
    [anon_sym_typedef] = ACTIONS(50),
    [anon_sym_unique] = ACTIONS(50),
    [anon_sym_units] = ACTIONS(50),
    [anon_sym_uses] = ACTIONS(50),
    [anon_sym_value] = ACTIONS(50),
    [anon_sym_when] = ACTIONS(50),
    [anon_sym_yin_DASHelement] = ACTIONS(50),
  },
  [8] = {
    [anon_sym_module] = ACTIONS(54),
    [anon_sym_submodule] = ACTIONS(54),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_yang_DASHversion] = ACTIONS(54),
    [anon_sym_enum] = ACTIONS(54),
    [anon_sym_range] = ACTIONS(54),
    [anon_sym_length] = ACTIONS(54),
    [sym_extension_keyword] = ACTIONS(56),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(54),
    [anon_sym_anydata] = ACTIONS(54),
    [anon_sym_anyxml] = ACTIONS(54),
    [anon_sym_argument] = ACTIONS(54),
    [anon_sym_augment] = ACTIONS(54),
    [anon_sym_base] = ACTIONS(54),
    [anon_sym_belongs_DASHto] = ACTIONS(54),
    [anon_sym_bit] = ACTIONS(54),
    [anon_sym_case] = ACTIONS(54),
    [anon_sym_choice] = ACTIONS(54),
    [anon_sym_config] = ACTIONS(54),
    [anon_sym_contact] = ACTIONS(54),
    [anon_sym_container] = ACTIONS(54),
    [anon_sym_default] = ACTIONS(54),
    [anon_sym_description] = ACTIONS(54),
    [anon_sym_deviate] = ACTIONS(54),
    [anon_sym_deviation] = ACTIONS(54),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(54),
    [anon_sym_error_DASHmessage] = ACTIONS(54),
    [anon_sym_extension] = ACTIONS(54),
    [anon_sym_feature] = ACTIONS(54),
    [anon_sym_fraction_DASHdigits] = ACTIONS(54),
    [anon_sym_grouping] = ACTIONS(54),
    [anon_sym_identity] = ACTIONS(54),
    [anon_sym_if_DASHfeature] = ACTIONS(54),
    [anon_sym_import] = ACTIONS(54),
    [anon_sym_include] = ACTIONS(54),
    [anon_sym_input] = ACTIONS(54),
    [anon_sym_key] = ACTIONS(54),
    [anon_sym_leaf] = ACTIONS(54),
    [anon_sym_leaf_DASHlist] = ACTIONS(54),
    [anon_sym_list] = ACTIONS(54),
    [anon_sym_mandatory] = ACTIONS(54),
    [anon_sym_max_DASHelements] = ACTIONS(54),
    [anon_sym_min_DASHelements] = ACTIONS(54),
    [anon_sym_modifier] = ACTIONS(54),
    [anon_sym_must] = ACTIONS(54),
    [anon_sym_namespace] = ACTIONS(54),
    [anon_sym_notification] = ACTIONS(54),
    [anon_sym_ordered_DASHby] = ACTIONS(54),
    [anon_sym_organization] = ACTIONS(54),
    [anon_sym_output] = ACTIONS(54),
    [anon_sym_path] = ACTIONS(54),
    [anon_sym_pattern] = ACTIONS(54),
    [anon_sym_position] = ACTIONS(54),
    [anon_sym_prefix] = ACTIONS(54),
    [anon_sym_presence] = ACTIONS(54),
    [anon_sym_reference] = ACTIONS(54),
    [anon_sym_refine] = ACTIONS(54),
    [anon_sym_require_DASHinstance] = ACTIONS(54),
    [anon_sym_revision] = ACTIONS(54),
    [anon_sym_revision_DASHdate] = ACTIONS(54),
    [anon_sym_rpc] = ACTIONS(54),
    [anon_sym_status] = ACTIONS(54),
    [anon_sym_type] = ACTIONS(54),
    [anon_sym_typedef] = ACTIONS(54),
    [anon_sym_unique] = ACTIONS(54),
    [anon_sym_units] = ACTIONS(54),
    [anon_sym_uses] = ACTIONS(54),
    [anon_sym_value] = ACTIONS(54),
    [anon_sym_when] = ACTIONS(54),
    [anon_sym_yin_DASHelement] = ACTIONS(54),
  },
  [9] = {
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_submodule] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_yang_DASHversion] = ACTIONS(58),
    [anon_sym_enum] = ACTIONS(58),
    [anon_sym_range] = ACTIONS(58),
    [anon_sym_length] = ACTIONS(58),
    [sym_extension_keyword] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(58),
    [anon_sym_anydata] = ACTIONS(58),
    [anon_sym_anyxml] = ACTIONS(58),
    [anon_sym_argument] = ACTIONS(58),
    [anon_sym_augment] = ACTIONS(58),
    [anon_sym_base] = ACTIONS(58),
    [anon_sym_belongs_DASHto] = ACTIONS(58),
    [anon_sym_bit] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(58),
    [anon_sym_choice] = ACTIONS(58),
    [anon_sym_config] = ACTIONS(58),
    [anon_sym_contact] = ACTIONS(58),
    [anon_sym_container] = ACTIONS(58),
    [anon_sym_default] = ACTIONS(58),
    [anon_sym_description] = ACTIONS(58),
    [anon_sym_deviate] = ACTIONS(58),
    [anon_sym_deviation] = ACTIONS(58),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(58),
    [anon_sym_error_DASHmessage] = ACTIONS(58),
    [anon_sym_extension] = ACTIONS(58),
    [anon_sym_feature] = ACTIONS(58),
    [anon_sym_fraction_DASHdigits] = ACTIONS(58),
    [anon_sym_grouping] = ACTIONS(58),
    [anon_sym_identity] = ACTIONS(58),
    [anon_sym_if_DASHfeature] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_include] = ACTIONS(58),
    [anon_sym_input] = ACTIONS(58),
    [anon_sym_key] = ACTIONS(58),
    [anon_sym_leaf] = ACTIONS(58),
    [anon_sym_leaf_DASHlist] = ACTIONS(58),
    [anon_sym_list] = ACTIONS(58),
    [anon_sym_mandatory] = ACTIONS(58),
    [anon_sym_max_DASHelements] = ACTIONS(58),
    [anon_sym_min_DASHelements] = ACTIONS(58),
    [anon_sym_modifier] = ACTIONS(58),
    [anon_sym_must] = ACTIONS(58),
    [anon_sym_namespace] = ACTIONS(58),
    [anon_sym_notification] = ACTIONS(58),
    [anon_sym_ordered_DASHby] = ACTIONS(58),
    [anon_sym_organization] = ACTIONS(58),
    [anon_sym_output] = ACTIONS(58),
    [anon_sym_path] = ACTIONS(58),
    [anon_sym_pattern] = ACTIONS(58),
    [anon_sym_position] = ACTIONS(58),
    [anon_sym_prefix] = ACTIONS(58),
    [anon_sym_presence] = ACTIONS(58),
    [anon_sym_reference] = ACTIONS(58),
    [anon_sym_refine] = ACTIONS(58),
    [anon_sym_require_DASHinstance] = ACTIONS(58),
    [anon_sym_revision] = ACTIONS(58),
    [anon_sym_revision_DASHdate] = ACTIONS(58),
    [anon_sym_rpc] = ACTIONS(58),
    [anon_sym_status] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
    [anon_sym_typedef] = ACTIONS(58),
    [anon_sym_unique] = ACTIONS(58),
    [anon_sym_units] = ACTIONS(58),
    [anon_sym_uses] = ACTIONS(58),
    [anon_sym_value] = ACTIONS(58),
    [anon_sym_when] = ACTIONS(58),
    [anon_sym_yin_DASHelement] = ACTIONS(58),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(62),
    [anon_sym_submodule] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_yang_DASHversion] = ACTIONS(62),
    [anon_sym_enum] = ACTIONS(62),
    [anon_sym_range] = ACTIONS(62),
    [anon_sym_length] = ACTIONS(62),
    [sym_extension_keyword] = ACTIONS(64),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(62),
    [anon_sym_anydata] = ACTIONS(62),
    [anon_sym_anyxml] = ACTIONS(62),
    [anon_sym_argument] = ACTIONS(62),
    [anon_sym_augment] = ACTIONS(62),
    [anon_sym_base] = ACTIONS(62),
    [anon_sym_belongs_DASHto] = ACTIONS(62),
    [anon_sym_bit] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(62),
    [anon_sym_choice] = ACTIONS(62),
    [anon_sym_config] = ACTIONS(62),
    [anon_sym_contact] = ACTIONS(62),
    [anon_sym_container] = ACTIONS(62),
    [anon_sym_default] = ACTIONS(62),
    [anon_sym_description] = ACTIONS(62),
    [anon_sym_deviate] = ACTIONS(62),
    [anon_sym_deviation] = ACTIONS(62),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(62),
    [anon_sym_error_DASHmessage] = ACTIONS(62),
    [anon_sym_extension] = ACTIONS(62),
    [anon_sym_feature] = ACTIONS(62),
    [anon_sym_fraction_DASHdigits] = ACTIONS(62),
    [anon_sym_grouping] = ACTIONS(62),
    [anon_sym_identity] = ACTIONS(62),
    [anon_sym_if_DASHfeature] = ACTIONS(62),
    [anon_sym_import] = ACTIONS(62),
    [anon_sym_include] = ACTIONS(62),
    [anon_sym_input] = ACTIONS(62),
    [anon_sym_key] = ACTIONS(62),
    [anon_sym_leaf] = ACTIONS(62),
    [anon_sym_leaf_DASHlist] = ACTIONS(62),
    [anon_sym_list] = ACTIONS(62),
    [anon_sym_mandatory] = ACTIONS(62),
    [anon_sym_max_DASHelements] = ACTIONS(62),
    [anon_sym_min_DASHelements] = ACTIONS(62),
    [anon_sym_modifier] = ACTIONS(62),
    [anon_sym_must] = ACTIONS(62),
    [anon_sym_namespace] = ACTIONS(62),
    [anon_sym_notification] = ACTIONS(62),
    [anon_sym_ordered_DASHby] = ACTIONS(62),
    [anon_sym_organization] = ACTIONS(62),
    [anon_sym_output] = ACTIONS(62),
    [anon_sym_path] = ACTIONS(62),
    [anon_sym_pattern] = ACTIONS(62),
    [anon_sym_position] = ACTIONS(62),
    [anon_sym_prefix] = ACTIONS(62),
    [anon_sym_presence] = ACTIONS(62),
    [anon_sym_reference] = ACTIONS(62),
    [anon_sym_refine] = ACTIONS(62),
    [anon_sym_require_DASHinstance] = ACTIONS(62),
    [anon_sym_revision] = ACTIONS(62),
    [anon_sym_revision_DASHdate] = ACTIONS(62),
    [anon_sym_rpc] = ACTIONS(62),
    [anon_sym_status] = ACTIONS(62),
    [anon_sym_type] = ACTIONS(62),
    [anon_sym_typedef] = ACTIONS(62),
    [anon_sym_unique] = ACTIONS(62),
    [anon_sym_units] = ACTIONS(62),
    [anon_sym_uses] = ACTIONS(62),
    [anon_sym_value] = ACTIONS(62),
    [anon_sym_when] = ACTIONS(62),
    [anon_sym_yin_DASHelement] = ACTIONS(62),
  },
  [11] = {
    [anon_sym_module] = ACTIONS(66),
    [anon_sym_submodule] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_yang_DASHversion] = ACTIONS(66),
    [anon_sym_enum] = ACTIONS(66),
    [anon_sym_range] = ACTIONS(66),
    [anon_sym_length] = ACTIONS(66),
    [sym_extension_keyword] = ACTIONS(68),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(66),
    [anon_sym_anydata] = ACTIONS(66),
    [anon_sym_anyxml] = ACTIONS(66),
    [anon_sym_argument] = ACTIONS(66),
    [anon_sym_augment] = ACTIONS(66),
    [anon_sym_base] = ACTIONS(66),
    [anon_sym_belongs_DASHto] = ACTIONS(66),
    [anon_sym_bit] = ACTIONS(66),
    [anon_sym_case] = ACTIONS(66),
    [anon_sym_choice] = ACTIONS(66),
    [anon_sym_config] = ACTIONS(66),
    [anon_sym_contact] = ACTIONS(66),
    [anon_sym_container] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(66),
    [anon_sym_description] = ACTIONS(66),
    [anon_sym_deviate] = ACTIONS(66),
    [anon_sym_deviation] = ACTIONS(66),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(66),
    [anon_sym_error_DASHmessage] = ACTIONS(66),
    [anon_sym_extension] = ACTIONS(66),
    [anon_sym_feature] = ACTIONS(66),
    [anon_sym_fraction_DASHdigits] = ACTIONS(66),
    [anon_sym_grouping] = ACTIONS(66),
    [anon_sym_identity] = ACTIONS(66),
    [anon_sym_if_DASHfeature] = ACTIONS(66),
    [anon_sym_import] = ACTIONS(66),
    [anon_sym_include] = ACTIONS(66),
    [anon_sym_input] = ACTIONS(66),
    [anon_sym_key] = ACTIONS(66),
    [anon_sym_leaf] = ACTIONS(66),
    [anon_sym_leaf_DASHlist] = ACTIONS(66),
    [anon_sym_list] = ACTIONS(66),
    [anon_sym_mandatory] = ACTIONS(66),
    [anon_sym_max_DASHelements] = ACTIONS(66),
    [anon_sym_min_DASHelements] = ACTIONS(66),
    [anon_sym_modifier] = ACTIONS(66),
    [anon_sym_must] = ACTIONS(66),
    [anon_sym_namespace] = ACTIONS(66),
    [anon_sym_notification] = ACTIONS(66),
    [anon_sym_ordered_DASHby] = ACTIONS(66),
    [anon_sym_organization] = ACTIONS(66),
    [anon_sym_output] = ACTIONS(66),
    [anon_sym_path] = ACTIONS(66),
    [anon_sym_pattern] = ACTIONS(66),
    [anon_sym_position] = ACTIONS(66),
    [anon_sym_prefix] = ACTIONS(66),
    [anon_sym_presence] = ACTIONS(66),
    [anon_sym_reference] = ACTIONS(66),
    [anon_sym_refine] = ACTIONS(66),
    [anon_sym_require_DASHinstance] = ACTIONS(66),
    [anon_sym_revision] = ACTIONS(66),
    [anon_sym_revision_DASHdate] = ACTIONS(66),
    [anon_sym_rpc] = ACTIONS(66),
    [anon_sym_status] = ACTIONS(66),
    [anon_sym_type] = ACTIONS(66),
    [anon_sym_typedef] = ACTIONS(66),
    [anon_sym_unique] = ACTIONS(66),
    [anon_sym_units] = ACTIONS(66),
    [anon_sym_uses] = ACTIONS(66),
    [anon_sym_value] = ACTIONS(66),
    [anon_sym_when] = ACTIONS(66),
    [anon_sym_yin_DASHelement] = ACTIONS(66),
  },
  [12] = {
    [anon_sym_module] = ACTIONS(70),
    [anon_sym_submodule] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_yang_DASHversion] = ACTIONS(70),
    [anon_sym_enum] = ACTIONS(70),
    [anon_sym_range] = ACTIONS(70),
    [anon_sym_length] = ACTIONS(70),
    [sym_extension_keyword] = ACTIONS(72),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(70),
    [anon_sym_anydata] = ACTIONS(70),
    [anon_sym_anyxml] = ACTIONS(70),
    [anon_sym_argument] = ACTIONS(70),
    [anon_sym_augment] = ACTIONS(70),
    [anon_sym_base] = ACTIONS(70),
    [anon_sym_belongs_DASHto] = ACTIONS(70),
    [anon_sym_bit] = ACTIONS(70),
    [anon_sym_case] = ACTIONS(70),
    [anon_sym_choice] = ACTIONS(70),
    [anon_sym_config] = ACTIONS(70),
    [anon_sym_contact] = ACTIONS(70),
    [anon_sym_container] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_description] = ACTIONS(70),
    [anon_sym_deviate] = ACTIONS(70),
    [anon_sym_deviation] = ACTIONS(70),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(70),
    [anon_sym_error_DASHmessage] = ACTIONS(70),
    [anon_sym_extension] = ACTIONS(70),
    [anon_sym_feature] = ACTIONS(70),
    [anon_sym_fraction_DASHdigits] = ACTIONS(70),
    [anon_sym_grouping] = ACTIONS(70),
    [anon_sym_identity] = ACTIONS(70),
    [anon_sym_if_DASHfeature] = ACTIONS(70),
    [anon_sym_import] = ACTIONS(70),
    [anon_sym_include] = ACTIONS(70),
    [anon_sym_input] = ACTIONS(70),
    [anon_sym_key] = ACTIONS(70),
    [anon_sym_leaf] = ACTIONS(70),
    [anon_sym_leaf_DASHlist] = ACTIONS(70),
    [anon_sym_list] = ACTIONS(70),
    [anon_sym_mandatory] = ACTIONS(70),
    [anon_sym_max_DASHelements] = ACTIONS(70),
    [anon_sym_min_DASHelements] = ACTIONS(70),
    [anon_sym_modifier] = ACTIONS(70),
    [anon_sym_must] = ACTIONS(70),
    [anon_sym_namespace] = ACTIONS(70),
    [anon_sym_notification] = ACTIONS(70),
    [anon_sym_ordered_DASHby] = ACTIONS(70),
    [anon_sym_organization] = ACTIONS(70),
    [anon_sym_output] = ACTIONS(70),
    [anon_sym_path] = ACTIONS(70),
    [anon_sym_pattern] = ACTIONS(70),
    [anon_sym_position] = ACTIONS(70),
    [anon_sym_prefix] = ACTIONS(70),
    [anon_sym_presence] = ACTIONS(70),
    [anon_sym_reference] = ACTIONS(70),
    [anon_sym_refine] = ACTIONS(70),
    [anon_sym_require_DASHinstance] = ACTIONS(70),
    [anon_sym_revision] = ACTIONS(70),
    [anon_sym_revision_DASHdate] = ACTIONS(70),
    [anon_sym_rpc] = ACTIONS(70),
    [anon_sym_status] = ACTIONS(70),
    [anon_sym_type] = ACTIONS(70),
    [anon_sym_typedef] = ACTIONS(70),
    [anon_sym_unique] = ACTIONS(70),
    [anon_sym_units] = ACTIONS(70),
    [anon_sym_uses] = ACTIONS(70),
    [anon_sym_value] = ACTIONS(70),
    [anon_sym_when] = ACTIONS(70),
    [anon_sym_yin_DASHelement] = ACTIONS(70),
  },
  [13] = {
    [anon_sym_module] = ACTIONS(74),
    [anon_sym_submodule] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_yang_DASHversion] = ACTIONS(74),
    [anon_sym_enum] = ACTIONS(74),
    [anon_sym_range] = ACTIONS(74),
    [anon_sym_length] = ACTIONS(74),
    [sym_extension_keyword] = ACTIONS(76),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(74),
    [anon_sym_anydata] = ACTIONS(74),
    [anon_sym_anyxml] = ACTIONS(74),
    [anon_sym_argument] = ACTIONS(74),
    [anon_sym_augment] = ACTIONS(74),
    [anon_sym_base] = ACTIONS(74),
    [anon_sym_belongs_DASHto] = ACTIONS(74),
    [anon_sym_bit] = ACTIONS(74),
    [anon_sym_case] = ACTIONS(74),
    [anon_sym_choice] = ACTIONS(74),
    [anon_sym_config] = ACTIONS(74),
    [anon_sym_contact] = ACTIONS(74),
    [anon_sym_container] = ACTIONS(74),
    [anon_sym_default] = ACTIONS(74),
    [anon_sym_description] = ACTIONS(74),
    [anon_sym_deviate] = ACTIONS(74),
    [anon_sym_deviation] = ACTIONS(74),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(74),
    [anon_sym_error_DASHmessage] = ACTIONS(74),
    [anon_sym_extension] = ACTIONS(74),
    [anon_sym_feature] = ACTIONS(74),
    [anon_sym_fraction_DASHdigits] = ACTIONS(74),
    [anon_sym_grouping] = ACTIONS(74),
    [anon_sym_identity] = ACTIONS(74),
    [anon_sym_if_DASHfeature] = ACTIONS(74),
    [anon_sym_import] = ACTIONS(74),
    [anon_sym_include] = ACTIONS(74),
    [anon_sym_input] = ACTIONS(74),
    [anon_sym_key] = ACTIONS(74),
    [anon_sym_leaf] = ACTIONS(74),
    [anon_sym_leaf_DASHlist] = ACTIONS(74),
    [anon_sym_list] = ACTIONS(74),
    [anon_sym_mandatory] = ACTIONS(74),
    [anon_sym_max_DASHelements] = ACTIONS(74),
    [anon_sym_min_DASHelements] = ACTIONS(74),
    [anon_sym_modifier] = ACTIONS(74),
    [anon_sym_must] = ACTIONS(74),
    [anon_sym_namespace] = ACTIONS(74),
    [anon_sym_notification] = ACTIONS(74),
    [anon_sym_ordered_DASHby] = ACTIONS(74),
    [anon_sym_organization] = ACTIONS(74),
    [anon_sym_output] = ACTIONS(74),
    [anon_sym_path] = ACTIONS(74),
    [anon_sym_pattern] = ACTIONS(74),
    [anon_sym_position] = ACTIONS(74),
    [anon_sym_prefix] = ACTIONS(74),
    [anon_sym_presence] = ACTIONS(74),
    [anon_sym_reference] = ACTIONS(74),
    [anon_sym_refine] = ACTIONS(74),
    [anon_sym_require_DASHinstance] = ACTIONS(74),
    [anon_sym_revision] = ACTIONS(74),
    [anon_sym_revision_DASHdate] = ACTIONS(74),
    [anon_sym_rpc] = ACTIONS(74),
    [anon_sym_status] = ACTIONS(74),
    [anon_sym_type] = ACTIONS(74),
    [anon_sym_typedef] = ACTIONS(74),
    [anon_sym_unique] = ACTIONS(74),
    [anon_sym_units] = ACTIONS(74),
    [anon_sym_uses] = ACTIONS(74),
    [anon_sym_value] = ACTIONS(74),
    [anon_sym_when] = ACTIONS(74),
    [anon_sym_yin_DASHelement] = ACTIONS(74),
  },
  [14] = {
    [anon_sym_module] = ACTIONS(78),
    [anon_sym_submodule] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_yang_DASHversion] = ACTIONS(78),
    [anon_sym_enum] = ACTIONS(78),
    [anon_sym_range] = ACTIONS(78),
    [anon_sym_length] = ACTIONS(78),
    [sym_extension_keyword] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(78),
    [anon_sym_anydata] = ACTIONS(78),
    [anon_sym_anyxml] = ACTIONS(78),
    [anon_sym_argument] = ACTIONS(78),
    [anon_sym_augment] = ACTIONS(78),
    [anon_sym_base] = ACTIONS(78),
    [anon_sym_belongs_DASHto] = ACTIONS(78),
    [anon_sym_bit] = ACTIONS(78),
    [anon_sym_case] = ACTIONS(78),
    [anon_sym_choice] = ACTIONS(78),
    [anon_sym_config] = ACTIONS(78),
    [anon_sym_contact] = ACTIONS(78),
    [anon_sym_container] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(78),
    [anon_sym_description] = ACTIONS(78),
    [anon_sym_deviate] = ACTIONS(78),
    [anon_sym_deviation] = ACTIONS(78),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(78),
    [anon_sym_error_DASHmessage] = ACTIONS(78),
    [anon_sym_extension] = ACTIONS(78),
    [anon_sym_feature] = ACTIONS(78),
    [anon_sym_fraction_DASHdigits] = ACTIONS(78),
    [anon_sym_grouping] = ACTIONS(78),
    [anon_sym_identity] = ACTIONS(78),
    [anon_sym_if_DASHfeature] = ACTIONS(78),
    [anon_sym_import] = ACTIONS(78),
    [anon_sym_include] = ACTIONS(78),
    [anon_sym_input] = ACTIONS(78),
    [anon_sym_key] = ACTIONS(78),
    [anon_sym_leaf] = ACTIONS(78),
    [anon_sym_leaf_DASHlist] = ACTIONS(78),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_mandatory] = ACTIONS(78),
    [anon_sym_max_DASHelements] = ACTIONS(78),
    [anon_sym_min_DASHelements] = ACTIONS(78),
    [anon_sym_modifier] = ACTIONS(78),
    [anon_sym_must] = ACTIONS(78),
    [anon_sym_namespace] = ACTIONS(78),
    [anon_sym_notification] = ACTIONS(78),
    [anon_sym_ordered_DASHby] = ACTIONS(78),
    [anon_sym_organization] = ACTIONS(78),
    [anon_sym_output] = ACTIONS(78),
    [anon_sym_path] = ACTIONS(78),
    [anon_sym_pattern] = ACTIONS(78),
    [anon_sym_position] = ACTIONS(78),
    [anon_sym_prefix] = ACTIONS(78),
    [anon_sym_presence] = ACTIONS(78),
    [anon_sym_reference] = ACTIONS(78),
    [anon_sym_refine] = ACTIONS(78),
    [anon_sym_require_DASHinstance] = ACTIONS(78),
    [anon_sym_revision] = ACTIONS(78),
    [anon_sym_revision_DASHdate] = ACTIONS(78),
    [anon_sym_rpc] = ACTIONS(78),
    [anon_sym_status] = ACTIONS(78),
    [anon_sym_type] = ACTIONS(78),
    [anon_sym_typedef] = ACTIONS(78),
    [anon_sym_unique] = ACTIONS(78),
    [anon_sym_units] = ACTIONS(78),
    [anon_sym_uses] = ACTIONS(78),
    [anon_sym_value] = ACTIONS(78),
    [anon_sym_when] = ACTIONS(78),
    [anon_sym_yin_DASHelement] = ACTIONS(78),
  },
  [15] = {
    [anon_sym_module] = ACTIONS(82),
    [anon_sym_submodule] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_yang_DASHversion] = ACTIONS(82),
    [anon_sym_enum] = ACTIONS(82),
    [anon_sym_range] = ACTIONS(82),
    [anon_sym_length] = ACTIONS(82),
    [sym_extension_keyword] = ACTIONS(84),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(82),
    [anon_sym_anydata] = ACTIONS(82),
    [anon_sym_anyxml] = ACTIONS(82),
    [anon_sym_argument] = ACTIONS(82),
    [anon_sym_augment] = ACTIONS(82),
    [anon_sym_base] = ACTIONS(82),
    [anon_sym_belongs_DASHto] = ACTIONS(82),
    [anon_sym_bit] = ACTIONS(82),
    [anon_sym_case] = ACTIONS(82),
    [anon_sym_choice] = ACTIONS(82),
    [anon_sym_config] = ACTIONS(82),
    [anon_sym_contact] = ACTIONS(82),
    [anon_sym_container] = ACTIONS(82),
    [anon_sym_default] = ACTIONS(82),
    [anon_sym_description] = ACTIONS(82),
    [anon_sym_deviate] = ACTIONS(82),
    [anon_sym_deviation] = ACTIONS(82),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(82),
    [anon_sym_error_DASHmessage] = ACTIONS(82),
    [anon_sym_extension] = ACTIONS(82),
    [anon_sym_feature] = ACTIONS(82),
    [anon_sym_fraction_DASHdigits] = ACTIONS(82),
    [anon_sym_grouping] = ACTIONS(82),
    [anon_sym_identity] = ACTIONS(82),
    [anon_sym_if_DASHfeature] = ACTIONS(82),
    [anon_sym_import] = ACTIONS(82),
    [anon_sym_include] = ACTIONS(82),
    [anon_sym_input] = ACTIONS(82),
    [anon_sym_key] = ACTIONS(82),
    [anon_sym_leaf] = ACTIONS(82),
    [anon_sym_leaf_DASHlist] = ACTIONS(82),
    [anon_sym_list] = ACTIONS(82),
    [anon_sym_mandatory] = ACTIONS(82),
    [anon_sym_max_DASHelements] = ACTIONS(82),
    [anon_sym_min_DASHelements] = ACTIONS(82),
    [anon_sym_modifier] = ACTIONS(82),
    [anon_sym_must] = ACTIONS(82),
    [anon_sym_namespace] = ACTIONS(82),
    [anon_sym_notification] = ACTIONS(82),
    [anon_sym_ordered_DASHby] = ACTIONS(82),
    [anon_sym_organization] = ACTIONS(82),
    [anon_sym_output] = ACTIONS(82),
    [anon_sym_path] = ACTIONS(82),
    [anon_sym_pattern] = ACTIONS(82),
    [anon_sym_position] = ACTIONS(82),
    [anon_sym_prefix] = ACTIONS(82),
    [anon_sym_presence] = ACTIONS(82),
    [anon_sym_reference] = ACTIONS(82),
    [anon_sym_refine] = ACTIONS(82),
    [anon_sym_require_DASHinstance] = ACTIONS(82),
    [anon_sym_revision] = ACTIONS(82),
    [anon_sym_revision_DASHdate] = ACTIONS(82),
    [anon_sym_rpc] = ACTIONS(82),
    [anon_sym_status] = ACTIONS(82),
    [anon_sym_type] = ACTIONS(82),
    [anon_sym_typedef] = ACTIONS(82),
    [anon_sym_unique] = ACTIONS(82),
    [anon_sym_units] = ACTIONS(82),
    [anon_sym_uses] = ACTIONS(82),
    [anon_sym_value] = ACTIONS(82),
    [anon_sym_when] = ACTIONS(82),
    [anon_sym_yin_DASHelement] = ACTIONS(82),
  },
  [16] = {
    [anon_sym_module] = ACTIONS(86),
    [anon_sym_submodule] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_yang_DASHversion] = ACTIONS(86),
    [anon_sym_enum] = ACTIONS(86),
    [anon_sym_range] = ACTIONS(86),
    [anon_sym_length] = ACTIONS(86),
    [sym_extension_keyword] = ACTIONS(88),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(86),
    [anon_sym_anydata] = ACTIONS(86),
    [anon_sym_anyxml] = ACTIONS(86),
    [anon_sym_argument] = ACTIONS(86),
    [anon_sym_augment] = ACTIONS(86),
    [anon_sym_base] = ACTIONS(86),
    [anon_sym_belongs_DASHto] = ACTIONS(86),
    [anon_sym_bit] = ACTIONS(86),
    [anon_sym_case] = ACTIONS(86),
    [anon_sym_choice] = ACTIONS(86),
    [anon_sym_config] = ACTIONS(86),
    [anon_sym_contact] = ACTIONS(86),
    [anon_sym_container] = ACTIONS(86),
    [anon_sym_default] = ACTIONS(86),
    [anon_sym_description] = ACTIONS(86),
    [anon_sym_deviate] = ACTIONS(86),
    [anon_sym_deviation] = ACTIONS(86),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(86),
    [anon_sym_error_DASHmessage] = ACTIONS(86),
    [anon_sym_extension] = ACTIONS(86),
    [anon_sym_feature] = ACTIONS(86),
    [anon_sym_fraction_DASHdigits] = ACTIONS(86),
    [anon_sym_grouping] = ACTIONS(86),
    [anon_sym_identity] = ACTIONS(86),
    [anon_sym_if_DASHfeature] = ACTIONS(86),
    [anon_sym_import] = ACTIONS(86),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_input] = ACTIONS(86),
    [anon_sym_key] = ACTIONS(86),
    [anon_sym_leaf] = ACTIONS(86),
    [anon_sym_leaf_DASHlist] = ACTIONS(86),
    [anon_sym_list] = ACTIONS(86),
    [anon_sym_mandatory] = ACTIONS(86),
    [anon_sym_max_DASHelements] = ACTIONS(86),
    [anon_sym_min_DASHelements] = ACTIONS(86),
    [anon_sym_modifier] = ACTIONS(86),
    [anon_sym_must] = ACTIONS(86),
    [anon_sym_namespace] = ACTIONS(86),
    [anon_sym_notification] = ACTIONS(86),
    [anon_sym_ordered_DASHby] = ACTIONS(86),
    [anon_sym_organization] = ACTIONS(86),
    [anon_sym_output] = ACTIONS(86),
    [anon_sym_path] = ACTIONS(86),
    [anon_sym_pattern] = ACTIONS(86),
    [anon_sym_position] = ACTIONS(86),
    [anon_sym_prefix] = ACTIONS(86),
    [anon_sym_presence] = ACTIONS(86),
    [anon_sym_reference] = ACTIONS(86),
    [anon_sym_refine] = ACTIONS(86),
    [anon_sym_require_DASHinstance] = ACTIONS(86),
    [anon_sym_revision] = ACTIONS(86),
    [anon_sym_revision_DASHdate] = ACTIONS(86),
    [anon_sym_rpc] = ACTIONS(86),
    [anon_sym_status] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_typedef] = ACTIONS(86),
    [anon_sym_unique] = ACTIONS(86),
    [anon_sym_units] = ACTIONS(86),
    [anon_sym_uses] = ACTIONS(86),
    [anon_sym_value] = ACTIONS(86),
    [anon_sym_when] = ACTIONS(86),
    [anon_sym_yin_DASHelement] = ACTIONS(86),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__sep,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      sym__integer,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      sym__keypath,
    ACTIONS(104), 1,
      sym__unquoted_string,
    STATE(14), 1,
      sym_block,
    STATE(28), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(33), 1,
      sym_string,
    STATE(40), 1,
      sym_argument,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 3,
      sym_node_identifier,
      sym_hex,
      sym_date,
    STATE(51), 6,
      sym_integer,
      sym_boolean,
      sym_string_concatenation,
      sym_keypath,
      sym_unquoted_string,
      sym_built_in_type,
    ACTIONS(106), 19,
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
  [75] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__sep,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      sym__integer,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      sym__keypath,
    ACTIONS(104), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym_block,
    STATE(28), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(33), 1,
      sym_string,
    STATE(35), 1,
      sym_argument,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 3,
      sym_node_identifier,
      sym_hex,
      sym_date,
    STATE(51), 6,
      sym_integer,
      sym_boolean,
      sym_string_concatenation,
      sym_keypath,
      sym_unquoted_string,
      sym_built_in_type,
    ACTIONS(106), 19,
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
  [150] = 6,
    ACTIONS(108), 1,
      sym__integer,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_range_argument,
    STATE(68), 1,
      sym_range,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    STATE(55), 2,
      sym_unquoted_range,
      sym_quoted_range,
  [171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__sep,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      sym__unquoted_string,
    STATE(36), 1,
      sym_enum_argument,
    STATE(50), 1,
      sym_string,
  [193] = 4,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(116), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [208] = 5,
    ACTIONS(118), 1,
      anon_sym_1,
    ACTIONS(120), 1,
      anon_sym_1_DOT1,
    STATE(57), 1,
      sym_yang_version,
    STATE(58), 1,
      sym_yang_version_argument,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [225] = 5,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_identifier,
    STATE(43), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [242] = 5,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(129), 1,
      sym__escape_sequence,
    STATE(24), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [259] = 4,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(134), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [274] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(71), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [291] = 5,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(147), 1,
      sym__escape_sequence,
    STATE(29), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [308] = 5,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(37), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [325] = 5,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym__escape_sequence,
    ACTIONS(149), 1,
      sym__unescaped_double_string_fragment,
    STATE(24), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [342] = 5,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(44), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [359] = 4,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(153), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [374] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      sym__sep,
    STATE(10), 1,
      sym_block,
  [390] = 3,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(159), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [402] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(163), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [412] = 4,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [426] = 4,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [440] = 3,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(169), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(171), 3,
      anon_sym_DQUOTE,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [462] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(173), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [472] = 4,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [486] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(177), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [495] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(179), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [504] = 3,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [515] = 3,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [526] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(181), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [535] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      sym__sep,
    STATE(8), 1,
      sym_block,
  [548] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(185), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [557] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(187), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [566] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(189), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [575] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(191), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [584] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(159), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [593] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(193), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [602] = 2,
    ACTIONS(195), 1,
      anon_sym_DOT_DOT,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [610] = 2,
    ACTIONS(197), 1,
      sym__integer,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [618] = 2,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [626] = 2,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [634] = 2,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [642] = 2,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [650] = 2,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [658] = 2,
    ACTIONS(209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [666] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_LBRACE,
      sym__sep,
  [674] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [682] = 2,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [690] = 2,
    ACTIONS(217), 1,
      sym__integer,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [698] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [706] = 2,
    ACTIONS(221), 1,
      sym__integer,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [714] = 2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [722] = 2,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [730] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [738] = 2,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [746] = 2,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [754] = 2,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 75,
  [SMALL_STATE(19)] = 150,
  [SMALL_STATE(20)] = 171,
  [SMALL_STATE(21)] = 193,
  [SMALL_STATE(22)] = 208,
  [SMALL_STATE(23)] = 225,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 259,
  [SMALL_STATE(26)] = 274,
  [SMALL_STATE(27)] = 291,
  [SMALL_STATE(28)] = 308,
  [SMALL_STATE(29)] = 325,
  [SMALL_STATE(30)] = 342,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 374,
  [SMALL_STATE(33)] = 390,
  [SMALL_STATE(34)] = 402,
  [SMALL_STATE(35)] = 412,
  [SMALL_STATE(36)] = 426,
  [SMALL_STATE(37)] = 440,
  [SMALL_STATE(38)] = 452,
  [SMALL_STATE(39)] = 462,
  [SMALL_STATE(40)] = 472,
  [SMALL_STATE(41)] = 486,
  [SMALL_STATE(42)] = 495,
  [SMALL_STATE(43)] = 504,
  [SMALL_STATE(44)] = 515,
  [SMALL_STATE(45)] = 526,
  [SMALL_STATE(46)] = 535,
  [SMALL_STATE(47)] = 548,
  [SMALL_STATE(48)] = 557,
  [SMALL_STATE(49)] = 566,
  [SMALL_STATE(50)] = 575,
  [SMALL_STATE(51)] = 584,
  [SMALL_STATE(52)] = 593,
  [SMALL_STATE(53)] = 602,
  [SMALL_STATE(54)] = 610,
  [SMALL_STATE(55)] = 618,
  [SMALL_STATE(56)] = 626,
  [SMALL_STATE(57)] = 634,
  [SMALL_STATE(58)] = 642,
  [SMALL_STATE(59)] = 650,
  [SMALL_STATE(60)] = 658,
  [SMALL_STATE(61)] = 666,
  [SMALL_STATE(62)] = 674,
  [SMALL_STATE(63)] = 682,
  [SMALL_STATE(64)] = 690,
  [SMALL_STATE(65)] = 698,
  [SMALL_STATE(66)] = 706,
  [SMALL_STATE(67)] = 714,
  [SMALL_STATE(68)] = 722,
  [SMALL_STATE(69)] = 730,
  [SMALL_STATE(70)] = 738,
  [SMALL_STATE(71)] = 746,
  [SMALL_STATE(72)] = 754,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__yang_version_statement, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__yang_version_statement, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_statement, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_statement, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_statement, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(24),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(25),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2), SHIFT_REPEAT(27),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2), SHIFT_REPEAT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concatenation, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keypath, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_type, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_argument, 1, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_argument, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang_version_argument, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang_version, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_keyword, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 3, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_range, 3, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_argument, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_range, 5, .production_id = 6),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
