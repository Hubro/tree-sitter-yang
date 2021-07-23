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
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 5
#define TOKEN_COUNT 114
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  sym__word = 1,
  anon_sym_module = 2,
  anon_sym_submodule = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_yang_DASHversion = 6,
  anon_sym_SEMI = 7,
  anon_sym_enum = 8,
  sym_extension_keyword = 9,
  sym_identifier = 10,
  aux_sym__node_identifier_token1 = 11,
  sym__integer = 12,
  sym__hex = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  anon_sym_DQUOTE = 16,
  anon_sym_SQUOTE = 17,
  anon_sym_PLUS = 18,
  sym__unescaped_double_string_fragment = 19,
  sym__unescaped_single_string_fragment = 20,
  sym__escape_sequence = 21,
  sym_date = 22,
  anon_sym_DOT_DOT = 23,
  sym_quoted_range = 24,
  sym__keypath = 25,
  anon_sym_1 = 26,
  anon_sym_1_DOT1 = 27,
  sym__unquoted_string = 28,
  sym_comment = 29,
  sym__sep = 30,
  anon_sym_binary = 31,
  anon_sym_bits = 32,
  anon_sym_boolean = 33,
  anon_sym_decimal64 = 34,
  anon_sym_empty = 35,
  anon_sym_enumeration = 36,
  anon_sym_identityref = 37,
  anon_sym_instance_DASHidentifier = 38,
  anon_sym_int8 = 39,
  anon_sym_int16 = 40,
  anon_sym_int32 = 41,
  anon_sym_int64 = 42,
  anon_sym_leafref = 43,
  anon_sym_string = 44,
  anon_sym_uint8 = 45,
  anon_sym_uint16 = 46,
  anon_sym_uint32 = 47,
  anon_sym_uint64 = 48,
  anon_sym_union = 49,
  anon_sym_action = 50,
  anon_sym_anydata = 51,
  anon_sym_anyxml = 52,
  anon_sym_argument = 53,
  anon_sym_augment = 54,
  anon_sym_base = 55,
  anon_sym_belongs_DASHto = 56,
  anon_sym_bit = 57,
  anon_sym_case = 58,
  anon_sym_choice = 59,
  anon_sym_config = 60,
  anon_sym_contact = 61,
  anon_sym_container = 62,
  anon_sym_default = 63,
  anon_sym_description = 64,
  anon_sym_deviate = 65,
  anon_sym_deviation = 66,
  anon_sym_error_DASHapp_DASHtag = 67,
  anon_sym_error_DASHmessage = 68,
  anon_sym_extension = 69,
  anon_sym_feature = 70,
  anon_sym_fraction_DASHdigits = 71,
  anon_sym_grouping = 72,
  anon_sym_identity = 73,
  anon_sym_if_DASHfeature = 74,
  anon_sym_import = 75,
  anon_sym_include = 76,
  anon_sym_input = 77,
  anon_sym_key = 78,
  anon_sym_leaf = 79,
  anon_sym_leaf_DASHlist = 80,
  anon_sym_length = 81,
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
  anon_sym_range = 98,
  anon_sym_reference = 99,
  anon_sym_refine = 100,
  anon_sym_require_DASHinstance = 101,
  anon_sym_revision = 102,
  anon_sym_revision_DASHdate = 103,
  anon_sym_rpc = 104,
  anon_sym_status = 105,
  anon_sym_type = 106,
  anon_sym_typedef = 107,
  anon_sym_unique = 108,
  anon_sym_units = 109,
  anon_sym_uses = 110,
  anon_sym_value = 111,
  anon_sym_when = 112,
  anon_sym_yin_DASHelement = 113,
  sym_yang = 114,
  sym_module = 115,
  sym_submodule = 116,
  sym_block = 117,
  sym_statement = 118,
  sym__yang_version_statement = 119,
  sym__enum_statement = 120,
  sym__generic_statement = 121,
  sym_extension_statement = 122,
  sym_argument = 123,
  sym_yang_version_argument = 124,
  sym_enum_argument = 125,
  sym__node_identifier = 126,
  sym_node_identifier = 127,
  sym_integer = 128,
  sym_hex = 129,
  sym__boolean = 130,
  sym_boolean = 131,
  sym_string = 132,
  sym_string_concatenation = 133,
  sym_range = 134,
  sym__unquoted_range = 135,
  sym_unquoted_range = 136,
  sym_keypath = 137,
  sym_yang_version = 138,
  sym_unquoted_string = 139,
  sym_built_in_type = 140,
  sym_statement_keyword = 141,
  aux_sym_block_repeat1 = 142,
  aux_sym_string_repeat1 = 143,
  aux_sym_string_repeat2 = 144,
  aux_sym_string_concatenation_repeat1 = 145,
  alias_sym_dots = 146,
  alias_sym_end = 147,
  alias_sym_enum_value = 148,
  alias_sym_escape_sequence = 149,
  alias_sym_start = 150,
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
  [sym_extension_keyword] = "extension_keyword",
  [sym_identifier] = "identifier",
  [aux_sym__node_identifier_token1] = "_node_identifier_token1",
  [sym__integer] = "_integer",
  [sym__hex] = "_hex",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PLUS] = "plus_symbol",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym__unescaped_single_string_fragment] = "_unescaped_single_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_date] = "date",
  [anon_sym_DOT_DOT] = "..",
  [sym_quoted_range] = "quoted_range",
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
  [anon_sym_yin_DASHelement] = "yin-element",
  [sym_yang] = "yang",
  [sym_module] = "module",
  [sym_submodule] = "submodule",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym__yang_version_statement] = "_yang_version_statement",
  [sym__enum_statement] = "_enum_statement",
  [sym__generic_statement] = "_generic_statement",
  [sym_extension_statement] = "extension_statement",
  [sym_argument] = "argument",
  [sym_yang_version_argument] = "argument",
  [sym_enum_argument] = "argument",
  [sym__node_identifier] = "_node_identifier",
  [sym_node_identifier] = "node_identifier",
  [sym_integer] = "integer",
  [sym_hex] = "integer",
  [sym__boolean] = "_boolean",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_string_concatenation] = "string_concatenation",
  [sym_range] = "range",
  [sym__unquoted_range] = "_unquoted_range",
  [sym_unquoted_range] = "unquoted_range",
  [sym_keypath] = "keypath",
  [sym_yang_version] = "yang_version",
  [sym_unquoted_string] = "unquoted_string",
  [sym_built_in_type] = "built_in_type",
  [sym_statement_keyword] = "statement_keyword",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_concatenation_repeat1] = "string_concatenation_repeat1",
  [alias_sym_dots] = "dots",
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
  [sym_extension_keyword] = sym_extension_keyword,
  [sym_identifier] = sym_identifier,
  [aux_sym__node_identifier_token1] = aux_sym__node_identifier_token1,
  [sym__integer] = sym__integer,
  [sym__hex] = sym__hex,
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
  [sym_quoted_range] = sym_quoted_range,
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
  [anon_sym_yin_DASHelement] = anon_sym_yin_DASHelement,
  [sym_yang] = sym_yang,
  [sym_module] = sym_module,
  [sym_submodule] = sym_submodule,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym__yang_version_statement] = sym__yang_version_statement,
  [sym__enum_statement] = sym__enum_statement,
  [sym__generic_statement] = sym__generic_statement,
  [sym_extension_statement] = sym_extension_statement,
  [sym_argument] = sym_argument,
  [sym_yang_version_argument] = sym_argument,
  [sym_enum_argument] = sym_argument,
  [sym__node_identifier] = sym__node_identifier,
  [sym_node_identifier] = sym_node_identifier,
  [sym_integer] = sym_integer,
  [sym_hex] = sym_integer,
  [sym__boolean] = sym__boolean,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_string_concatenation] = sym_string_concatenation,
  [sym_range] = sym_range,
  [sym__unquoted_range] = sym__unquoted_range,
  [sym_unquoted_range] = sym_unquoted_range,
  [sym_keypath] = sym_keypath,
  [sym_yang_version] = sym_yang_version,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_built_in_type] = sym_built_in_type,
  [sym_statement_keyword] = sym_statement_keyword,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_concatenation_repeat1] = aux_sym_string_concatenation_repeat1,
  [alias_sym_dots] = alias_sym_dots,
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
  [sym_extension_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__node_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
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
    .named = false,
  },
  [sym_quoted_range] = {
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
  [sym__node_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_node_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
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
  [sym__unquoted_range] = {
    .visible = false,
    .named = true,
  },
  [sym_unquoted_range] = {
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
  [alias_sym_dots] = {
    .visible = true,
    .named = true,
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
    [1] = alias_sym_dots,
    [2] = alias_sym_end,
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
      if (eof) ADVANCE(391);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '\'') ADVANCE(821);
      if (lookahead == '+') ADVANCE(820);
      if (lookahead == '-') ADVANCE(534);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '/') ADVANCE(512);
      if (lookahead == '0') ADVANCE(808);
      if (lookahead == '1') ADVANCE(817);
      if (lookahead == ';') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(860);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == 'b') ADVANCE(542);
      if (lookahead == 'c') ADVANCE(543);
      if (lookahead == 'd') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead == 'f') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(743);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == 'k') ADVANCE(601);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == 'm') ADVANCE(544);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 's') ADVANCE(767);
      if (lookahead == 't') ADVANCE(742);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == 'v') ADVANCE(550);
      if (lookahead == 'w') ADVANCE(645);
      if (lookahead == 'y') ADVANCE(568);
      if (lookahead == '{') ADVANCE(821);
      if (lookahead == '}') ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(810);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (lookahead != 0) ADVANCE(820);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '-') ADVANCE(844);
      if (lookahead == '/') ADVANCE(838);
      if (lookahead == '0') ADVANCE(498);
      if (lookahead == 'b') ADVANCE(442);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'f') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == 'u') ADVANCE(443);
      if (lookahead == '{') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(854);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(506);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(506);
      if (lookahead == '/') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(810);
      if (lookahead != 0) ADVANCE(821);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '/') ADVANCE(823);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(826);
      if (lookahead != 0) ADVANCE(827);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(856);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(855);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(326);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(381);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(843);
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ';') ADVANCE(399);
      if (lookahead == '{') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '}') ADVANCE(854);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(839);
      if (lookahead == ';') ADVANCE(399);
      if (lookahead == '{') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '}') ADVANCE(854);
      END_STATE();
    case 24:
      if (lookahead == '1') ADVANCE(837);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(881);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'b') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(927);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(931);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(909);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'q') ADVANCE(347);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(890);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(902);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(897);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(10);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'h') ADVANCE(923);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'h') ADVANCE(911);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 155:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(882);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(400);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 201:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 202:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(942);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(880);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(896);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 214:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 215:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 216:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 217:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 225:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 226:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 227:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 228:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 263:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 264:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'q') ADVANCE(350);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(892);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(940);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(915);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(901);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(912);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(917);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(905);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(884);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(891);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(893);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(883);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(308);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'x') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'y') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'y') ADVANCE(908);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'y') ADVANCE(903);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'y') ADVANCE(913);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'y') ADVANCE(920);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 362:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'y') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 363:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'z') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      if (lookahead == 'b') ADVANCE(372);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 372:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 375:
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 376:
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead == 'x') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(830);
      if (lookahead != 0) ADVANCE(828);
      END_STATE();
    case 378:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 379:
      if (lookahead == '{') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 380:
      if (lookahead == '}') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(828);
      END_STATE();
    case 385:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 386:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 387:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 388:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(856);
      if (lookahead == '\r') ADVANCE(858);
      END_STATE();
    case 389:
      if (eof) ADVANCE(391);
      if (lookahead == '"') ADVANCE(506);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '1') ADVANCE(836);
      if (lookahead == ';') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(373);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == '{') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      END_STATE();
    case 390:
      if (eof) ADVANCE(391);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'g') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'k') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(45);
      if (lookahead == '}') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_submodule);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_submodule);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_yang_DASHversion);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_extension_keyword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '1') ADVANCE(411);
      if (lookahead == '3') ADVANCE(406);
      if (lookahead == '6') ADVANCE(408);
      if (lookahead == '8') ADVANCE(869);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '1') ADVANCE(412);
      if (lookahead == '3') ADVANCE(407);
      if (lookahead == '6') ADVANCE(409);
      if (lookahead == '8') ADVANCE(875);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '2') ADVANCE(871);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '2') ADVANCE(877);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '4') ADVANCE(872);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '4') ADVANCE(878);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '4') ADVANCE(864);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '6') ADVANCE(870);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '6') ADVANCE(876);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '6') ADVANCE(410);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'a') ADVANCE(452);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'a') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'a') ADVANCE(473);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'a') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'a') ADVANCE(462);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'a') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'a') ADVANCE(488);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'c') ADVANCE(447);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'c') ADVANCE(428);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'n') ADVANCE(479);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'd') ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(504);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(505);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(438);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'f') ADVANCE(873);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'f') ADVANCE(867);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'f') ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'f') ADVANCE(451);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'g') ADVANCE(874);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'o') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'n') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(468);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(458);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(457);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(484);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(469);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'l') ADVANCE(480);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'l') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'l') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'm') ADVANCE(470);
      if (lookahead == 'n') ADVANCE(489);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'm') ADVANCE(432);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'm') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(879);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(863);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(866);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == 't') ADVANCE(478);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(483);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(487);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'o') ADVANCE(454);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'o') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'o') ADVANCE(461);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'p') ADVANCE(481);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(868);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(490);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(492);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(446);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 's') ADVANCE(862);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead == 't') ADVANCE(404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 's') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 't') ADVANCE(491);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 't') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 't') ADVANCE(405);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 't') ADVANCE(493);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 't') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 't') ADVANCE(449);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 't') ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 't') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'u') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'u') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'y') ADVANCE(865);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'y') ADVANCE(861);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (lookahead == 'y') ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__node_identifier_token1);
      if (lookahead == '/') ADVANCE(850);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '-') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(517);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead == '/') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(821);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '/') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(783);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(662);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(815);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '0') ADVANCE(809);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '1') ADVANCE(538);
      if (lookahead == '3') ADVANCE(536);
      if (lookahead == '6') ADVANCE(537);
      if (lookahead == '8') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '2') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '4') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '6') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '6') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == 'i') ADVANCE(697);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(695);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'o') ADVANCE(778);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'p') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead == 'o') ADVANCE(760);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(779);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead == 'm') ADVANCE(612);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(782);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'i') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == 'r') ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(749);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(656);
      if (lookahead == 'f') ADVANCE(558);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == 'v') ADVANCE(670);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(680);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 's') ADVANCE(788);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(766);
      if (lookahead == 'i') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(787);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(605);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == 'm') ADVANCE(733);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(608);
      if (lookahead == 'g') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == 'i') ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(610);
      if (lookahead == 'q') ADVANCE(798);
      if (lookahead == 'v') ADVANCE(658);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 't') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(648);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(759);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(820);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'u') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(705);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(775);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'r') ADVANCE(745);
      if (lookahead == 'x') ADVANCE(789);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(673);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == 'x') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(775);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(785);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(793);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(744);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead == 'q') ADVANCE(794);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(602);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(738);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead == 'u') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(794);
      if (lookahead == 'y') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(792);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(718);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'v') ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'x') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'z') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(819);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(819);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(821);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(822);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(825);
      if (lookahead == '/') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(827);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(824);
      if (lookahead == '/') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(825);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(827);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(828);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(829);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_quoted_range);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__keypath);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(852);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__keypath);
      if (lookahead == '/') ADVANCE(850);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(835);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(841);
      if (lookahead == '/') ADVANCE(857);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(841);
      if (lookahead == '/') ADVANCE(857);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(840);
      if (lookahead == '/') ADVANCE(855);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(840);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(841);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(849);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '.') ADVANCE(832);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '0') ADVANCE(497);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(856);
      if (lookahead == '\r') ADVANCE(858);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(842);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(847);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(835);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(854);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(856);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(857);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(388);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__word);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_decimal64);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_empty);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_enumeration);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_identityref);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_instance_DASHidentifier);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_leafref);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == ':') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_anydata);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_anyxml);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_argument);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_augment);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_belongs_DASHto);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_choice);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_contact);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_container);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_deviate);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_deviation);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_error_DASHapp_DASHtag);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_error_DASHmessage);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_extension);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_feature);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_fraction_DASHdigits);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_grouping);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_identity);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_if_DASHfeature);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_leaf);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_leaf_DASHlist);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_mandatory);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_max_DASHelements);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_min_DASHelements);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_modifier);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_must);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_notification);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_ordered_DASHby);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_organization);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_prefix);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_presence);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_reference);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_refine);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_require_DASHinstance);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_revision);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_revision_DASHdate);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_rpc);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_status);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_unique);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_units);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_yin_DASHelement);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
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
  [1] = {.lex_state = 389},
  [2] = {.lex_state = 390},
  [3] = {.lex_state = 390},
  [4] = {.lex_state = 390},
  [5] = {.lex_state = 390},
  [6] = {.lex_state = 390},
  [7] = {.lex_state = 390},
  [8] = {.lex_state = 390},
  [9] = {.lex_state = 390},
  [10] = {.lex_state = 390},
  [11] = {.lex_state = 390},
  [12] = {.lex_state = 390},
  [13] = {.lex_state = 390},
  [14] = {.lex_state = 390},
  [15] = {.lex_state = 390},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 389},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 389},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 389},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 389},
  [35] = {.lex_state = 389},
  [36] = {.lex_state = 389},
  [37] = {.lex_state = 389},
  [38] = {.lex_state = 389},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 389},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 389},
  [43] = {.lex_state = 389},
  [44] = {.lex_state = 389},
  [45] = {.lex_state = 389},
  [46] = {.lex_state = 389},
  [47] = {.lex_state = 389},
  [48] = {.lex_state = 389},
  [49] = {.lex_state = 389},
  [50] = {.lex_state = 389},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 389},
  [53] = {.lex_state = 389},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 389},
  [56] = {.lex_state = 389},
  [57] = {.lex_state = 390},
  [58] = {.lex_state = 389},
  [59] = {.lex_state = 389},
  [60] = {.lex_state = 389},
  [61] = {.lex_state = 389},
  [62] = {.lex_state = 389},
  [63] = {.lex_state = 389},
  [64] = {.lex_state = 389},
  [65] = {.lex_state = 389},
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
    [sym__integer] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym__unescaped_double_string_fragment] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_quoted_range] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [sym__unquoted_string] = ACTIONS(1),
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
    [anon_sym_yin_DASHelement] = ACTIONS(1),
  },
  [1] = {
    [sym_yang] = STATE(55),
    [sym_module] = STATE(64),
    [sym_submodule] = STATE(64),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_submodule] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym__yang_version_statement] = STATE(15),
    [sym__enum_statement] = STATE(15),
    [sym__generic_statement] = STATE(15),
    [sym_extension_statement] = STATE(2),
    [sym_statement_keyword] = STATE(50),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_submodule] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(14),
    [anon_sym_yang_DASHversion] = ACTIONS(16),
    [anon_sym_enum] = ACTIONS(19),
    [sym_extension_keyword] = ACTIONS(22),
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
    [anon_sym_yin_DASHelement] = ACTIONS(11),
  },
  [3] = {
    [sym_statement] = STATE(4),
    [sym__yang_version_statement] = STATE(15),
    [sym__enum_statement] = STATE(15),
    [sym__generic_statement] = STATE(15),
    [sym_extension_statement] = STATE(4),
    [sym_statement_keyword] = STATE(50),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_module] = ACTIONS(25),
    [anon_sym_submodule] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_yang_DASHversion] = ACTIONS(29),
    [anon_sym_enum] = ACTIONS(31),
    [sym_extension_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(25),
    [anon_sym_anydata] = ACTIONS(25),
    [anon_sym_anyxml] = ACTIONS(25),
    [anon_sym_argument] = ACTIONS(25),
    [anon_sym_augment] = ACTIONS(25),
    [anon_sym_base] = ACTIONS(25),
    [anon_sym_belongs_DASHto] = ACTIONS(25),
    [anon_sym_bit] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_choice] = ACTIONS(25),
    [anon_sym_config] = ACTIONS(25),
    [anon_sym_contact] = ACTIONS(25),
    [anon_sym_container] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(25),
    [anon_sym_description] = ACTIONS(25),
    [anon_sym_deviate] = ACTIONS(25),
    [anon_sym_deviation] = ACTIONS(25),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(25),
    [anon_sym_error_DASHmessage] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_feature] = ACTIONS(25),
    [anon_sym_fraction_DASHdigits] = ACTIONS(25),
    [anon_sym_grouping] = ACTIONS(25),
    [anon_sym_identity] = ACTIONS(25),
    [anon_sym_if_DASHfeature] = ACTIONS(25),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(25),
    [anon_sym_key] = ACTIONS(25),
    [anon_sym_leaf] = ACTIONS(25),
    [anon_sym_leaf_DASHlist] = ACTIONS(25),
    [anon_sym_length] = ACTIONS(25),
    [anon_sym_list] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_max_DASHelements] = ACTIONS(25),
    [anon_sym_min_DASHelements] = ACTIONS(25),
    [anon_sym_modifier] = ACTIONS(25),
    [anon_sym_must] = ACTIONS(25),
    [anon_sym_namespace] = ACTIONS(25),
    [anon_sym_notification] = ACTIONS(25),
    [anon_sym_ordered_DASHby] = ACTIONS(25),
    [anon_sym_organization] = ACTIONS(25),
    [anon_sym_output] = ACTIONS(25),
    [anon_sym_path] = ACTIONS(25),
    [anon_sym_pattern] = ACTIONS(25),
    [anon_sym_position] = ACTIONS(25),
    [anon_sym_prefix] = ACTIONS(25),
    [anon_sym_presence] = ACTIONS(25),
    [anon_sym_range] = ACTIONS(25),
    [anon_sym_reference] = ACTIONS(25),
    [anon_sym_refine] = ACTIONS(25),
    [anon_sym_require_DASHinstance] = ACTIONS(25),
    [anon_sym_revision] = ACTIONS(25),
    [anon_sym_revision_DASHdate] = ACTIONS(25),
    [anon_sym_rpc] = ACTIONS(25),
    [anon_sym_status] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(25),
    [anon_sym_typedef] = ACTIONS(25),
    [anon_sym_unique] = ACTIONS(25),
    [anon_sym_units] = ACTIONS(25),
    [anon_sym_uses] = ACTIONS(25),
    [anon_sym_value] = ACTIONS(25),
    [anon_sym_when] = ACTIONS(25),
    [anon_sym_yin_DASHelement] = ACTIONS(25),
  },
  [4] = {
    [sym_statement] = STATE(2),
    [sym__yang_version_statement] = STATE(15),
    [sym__enum_statement] = STATE(15),
    [sym__generic_statement] = STATE(15),
    [sym_extension_statement] = STATE(2),
    [sym_statement_keyword] = STATE(50),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_module] = ACTIONS(25),
    [anon_sym_submodule] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_yang_DASHversion] = ACTIONS(29),
    [anon_sym_enum] = ACTIONS(31),
    [sym_extension_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(25),
    [anon_sym_anydata] = ACTIONS(25),
    [anon_sym_anyxml] = ACTIONS(25),
    [anon_sym_argument] = ACTIONS(25),
    [anon_sym_augment] = ACTIONS(25),
    [anon_sym_base] = ACTIONS(25),
    [anon_sym_belongs_DASHto] = ACTIONS(25),
    [anon_sym_bit] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_choice] = ACTIONS(25),
    [anon_sym_config] = ACTIONS(25),
    [anon_sym_contact] = ACTIONS(25),
    [anon_sym_container] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(25),
    [anon_sym_description] = ACTIONS(25),
    [anon_sym_deviate] = ACTIONS(25),
    [anon_sym_deviation] = ACTIONS(25),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(25),
    [anon_sym_error_DASHmessage] = ACTIONS(25),
    [anon_sym_extension] = ACTIONS(25),
    [anon_sym_feature] = ACTIONS(25),
    [anon_sym_fraction_DASHdigits] = ACTIONS(25),
    [anon_sym_grouping] = ACTIONS(25),
    [anon_sym_identity] = ACTIONS(25),
    [anon_sym_if_DASHfeature] = ACTIONS(25),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(25),
    [anon_sym_key] = ACTIONS(25),
    [anon_sym_leaf] = ACTIONS(25),
    [anon_sym_leaf_DASHlist] = ACTIONS(25),
    [anon_sym_length] = ACTIONS(25),
    [anon_sym_list] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_max_DASHelements] = ACTIONS(25),
    [anon_sym_min_DASHelements] = ACTIONS(25),
    [anon_sym_modifier] = ACTIONS(25),
    [anon_sym_must] = ACTIONS(25),
    [anon_sym_namespace] = ACTIONS(25),
    [anon_sym_notification] = ACTIONS(25),
    [anon_sym_ordered_DASHby] = ACTIONS(25),
    [anon_sym_organization] = ACTIONS(25),
    [anon_sym_output] = ACTIONS(25),
    [anon_sym_path] = ACTIONS(25),
    [anon_sym_pattern] = ACTIONS(25),
    [anon_sym_position] = ACTIONS(25),
    [anon_sym_prefix] = ACTIONS(25),
    [anon_sym_presence] = ACTIONS(25),
    [anon_sym_range] = ACTIONS(25),
    [anon_sym_reference] = ACTIONS(25),
    [anon_sym_refine] = ACTIONS(25),
    [anon_sym_require_DASHinstance] = ACTIONS(25),
    [anon_sym_revision] = ACTIONS(25),
    [anon_sym_revision_DASHdate] = ACTIONS(25),
    [anon_sym_rpc] = ACTIONS(25),
    [anon_sym_status] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(25),
    [anon_sym_typedef] = ACTIONS(25),
    [anon_sym_unique] = ACTIONS(25),
    [anon_sym_units] = ACTIONS(25),
    [anon_sym_uses] = ACTIONS(25),
    [anon_sym_value] = ACTIONS(25),
    [anon_sym_when] = ACTIONS(25),
    [anon_sym_yin_DASHelement] = ACTIONS(25),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_module] = ACTIONS(39),
    [anon_sym_submodule] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_yang_DASHversion] = ACTIONS(39),
    [anon_sym_enum] = ACTIONS(39),
    [sym_extension_keyword] = ACTIONS(37),
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
    [anon_sym_yin_DASHelement] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_module] = ACTIONS(43),
    [anon_sym_submodule] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_yang_DASHversion] = ACTIONS(43),
    [anon_sym_enum] = ACTIONS(43),
    [sym_extension_keyword] = ACTIONS(41),
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
    [anon_sym_yin_DASHelement] = ACTIONS(43),
  },
  [7] = {
    [anon_sym_module] = ACTIONS(45),
    [anon_sym_submodule] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_yang_DASHversion] = ACTIONS(45),
    [anon_sym_enum] = ACTIONS(45),
    [sym_extension_keyword] = ACTIONS(47),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(45),
    [anon_sym_anydata] = ACTIONS(45),
    [anon_sym_anyxml] = ACTIONS(45),
    [anon_sym_argument] = ACTIONS(45),
    [anon_sym_augment] = ACTIONS(45),
    [anon_sym_base] = ACTIONS(45),
    [anon_sym_belongs_DASHto] = ACTIONS(45),
    [anon_sym_bit] = ACTIONS(45),
    [anon_sym_case] = ACTIONS(45),
    [anon_sym_choice] = ACTIONS(45),
    [anon_sym_config] = ACTIONS(45),
    [anon_sym_contact] = ACTIONS(45),
    [anon_sym_container] = ACTIONS(45),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_description] = ACTIONS(45),
    [anon_sym_deviate] = ACTIONS(45),
    [anon_sym_deviation] = ACTIONS(45),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(45),
    [anon_sym_error_DASHmessage] = ACTIONS(45),
    [anon_sym_extension] = ACTIONS(45),
    [anon_sym_feature] = ACTIONS(45),
    [anon_sym_fraction_DASHdigits] = ACTIONS(45),
    [anon_sym_grouping] = ACTIONS(45),
    [anon_sym_identity] = ACTIONS(45),
    [anon_sym_if_DASHfeature] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(45),
    [anon_sym_include] = ACTIONS(45),
    [anon_sym_input] = ACTIONS(45),
    [anon_sym_key] = ACTIONS(45),
    [anon_sym_leaf] = ACTIONS(45),
    [anon_sym_leaf_DASHlist] = ACTIONS(45),
    [anon_sym_length] = ACTIONS(45),
    [anon_sym_list] = ACTIONS(45),
    [anon_sym_mandatory] = ACTIONS(45),
    [anon_sym_max_DASHelements] = ACTIONS(45),
    [anon_sym_min_DASHelements] = ACTIONS(45),
    [anon_sym_modifier] = ACTIONS(45),
    [anon_sym_must] = ACTIONS(45),
    [anon_sym_namespace] = ACTIONS(45),
    [anon_sym_notification] = ACTIONS(45),
    [anon_sym_ordered_DASHby] = ACTIONS(45),
    [anon_sym_organization] = ACTIONS(45),
    [anon_sym_output] = ACTIONS(45),
    [anon_sym_path] = ACTIONS(45),
    [anon_sym_pattern] = ACTIONS(45),
    [anon_sym_position] = ACTIONS(45),
    [anon_sym_prefix] = ACTIONS(45),
    [anon_sym_presence] = ACTIONS(45),
    [anon_sym_range] = ACTIONS(45),
    [anon_sym_reference] = ACTIONS(45),
    [anon_sym_refine] = ACTIONS(45),
    [anon_sym_require_DASHinstance] = ACTIONS(45),
    [anon_sym_revision] = ACTIONS(45),
    [anon_sym_revision_DASHdate] = ACTIONS(45),
    [anon_sym_rpc] = ACTIONS(45),
    [anon_sym_status] = ACTIONS(45),
    [anon_sym_type] = ACTIONS(45),
    [anon_sym_typedef] = ACTIONS(45),
    [anon_sym_unique] = ACTIONS(45),
    [anon_sym_units] = ACTIONS(45),
    [anon_sym_uses] = ACTIONS(45),
    [anon_sym_value] = ACTIONS(45),
    [anon_sym_when] = ACTIONS(45),
    [anon_sym_yin_DASHelement] = ACTIONS(45),
  },
  [8] = {
    [anon_sym_module] = ACTIONS(49),
    [anon_sym_submodule] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_yang_DASHversion] = ACTIONS(49),
    [anon_sym_enum] = ACTIONS(49),
    [sym_extension_keyword] = ACTIONS(51),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(49),
    [anon_sym_anydata] = ACTIONS(49),
    [anon_sym_anyxml] = ACTIONS(49),
    [anon_sym_argument] = ACTIONS(49),
    [anon_sym_augment] = ACTIONS(49),
    [anon_sym_base] = ACTIONS(49),
    [anon_sym_belongs_DASHto] = ACTIONS(49),
    [anon_sym_bit] = ACTIONS(49),
    [anon_sym_case] = ACTIONS(49),
    [anon_sym_choice] = ACTIONS(49),
    [anon_sym_config] = ACTIONS(49),
    [anon_sym_contact] = ACTIONS(49),
    [anon_sym_container] = ACTIONS(49),
    [anon_sym_default] = ACTIONS(49),
    [anon_sym_description] = ACTIONS(49),
    [anon_sym_deviate] = ACTIONS(49),
    [anon_sym_deviation] = ACTIONS(49),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(49),
    [anon_sym_error_DASHmessage] = ACTIONS(49),
    [anon_sym_extension] = ACTIONS(49),
    [anon_sym_feature] = ACTIONS(49),
    [anon_sym_fraction_DASHdigits] = ACTIONS(49),
    [anon_sym_grouping] = ACTIONS(49),
    [anon_sym_identity] = ACTIONS(49),
    [anon_sym_if_DASHfeature] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(49),
    [anon_sym_include] = ACTIONS(49),
    [anon_sym_input] = ACTIONS(49),
    [anon_sym_key] = ACTIONS(49),
    [anon_sym_leaf] = ACTIONS(49),
    [anon_sym_leaf_DASHlist] = ACTIONS(49),
    [anon_sym_length] = ACTIONS(49),
    [anon_sym_list] = ACTIONS(49),
    [anon_sym_mandatory] = ACTIONS(49),
    [anon_sym_max_DASHelements] = ACTIONS(49),
    [anon_sym_min_DASHelements] = ACTIONS(49),
    [anon_sym_modifier] = ACTIONS(49),
    [anon_sym_must] = ACTIONS(49),
    [anon_sym_namespace] = ACTIONS(49),
    [anon_sym_notification] = ACTIONS(49),
    [anon_sym_ordered_DASHby] = ACTIONS(49),
    [anon_sym_organization] = ACTIONS(49),
    [anon_sym_output] = ACTIONS(49),
    [anon_sym_path] = ACTIONS(49),
    [anon_sym_pattern] = ACTIONS(49),
    [anon_sym_position] = ACTIONS(49),
    [anon_sym_prefix] = ACTIONS(49),
    [anon_sym_presence] = ACTIONS(49),
    [anon_sym_range] = ACTIONS(49),
    [anon_sym_reference] = ACTIONS(49),
    [anon_sym_refine] = ACTIONS(49),
    [anon_sym_require_DASHinstance] = ACTIONS(49),
    [anon_sym_revision] = ACTIONS(49),
    [anon_sym_revision_DASHdate] = ACTIONS(49),
    [anon_sym_rpc] = ACTIONS(49),
    [anon_sym_status] = ACTIONS(49),
    [anon_sym_type] = ACTIONS(49),
    [anon_sym_typedef] = ACTIONS(49),
    [anon_sym_unique] = ACTIONS(49),
    [anon_sym_units] = ACTIONS(49),
    [anon_sym_uses] = ACTIONS(49),
    [anon_sym_value] = ACTIONS(49),
    [anon_sym_when] = ACTIONS(49),
    [anon_sym_yin_DASHelement] = ACTIONS(49),
  },
  [9] = {
    [anon_sym_module] = ACTIONS(53),
    [anon_sym_submodule] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_yang_DASHversion] = ACTIONS(53),
    [anon_sym_enum] = ACTIONS(53),
    [sym_extension_keyword] = ACTIONS(55),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(53),
    [anon_sym_anydata] = ACTIONS(53),
    [anon_sym_anyxml] = ACTIONS(53),
    [anon_sym_argument] = ACTIONS(53),
    [anon_sym_augment] = ACTIONS(53),
    [anon_sym_base] = ACTIONS(53),
    [anon_sym_belongs_DASHto] = ACTIONS(53),
    [anon_sym_bit] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(53),
    [anon_sym_choice] = ACTIONS(53),
    [anon_sym_config] = ACTIONS(53),
    [anon_sym_contact] = ACTIONS(53),
    [anon_sym_container] = ACTIONS(53),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_description] = ACTIONS(53),
    [anon_sym_deviate] = ACTIONS(53),
    [anon_sym_deviation] = ACTIONS(53),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(53),
    [anon_sym_error_DASHmessage] = ACTIONS(53),
    [anon_sym_extension] = ACTIONS(53),
    [anon_sym_feature] = ACTIONS(53),
    [anon_sym_fraction_DASHdigits] = ACTIONS(53),
    [anon_sym_grouping] = ACTIONS(53),
    [anon_sym_identity] = ACTIONS(53),
    [anon_sym_if_DASHfeature] = ACTIONS(53),
    [anon_sym_import] = ACTIONS(53),
    [anon_sym_include] = ACTIONS(53),
    [anon_sym_input] = ACTIONS(53),
    [anon_sym_key] = ACTIONS(53),
    [anon_sym_leaf] = ACTIONS(53),
    [anon_sym_leaf_DASHlist] = ACTIONS(53),
    [anon_sym_length] = ACTIONS(53),
    [anon_sym_list] = ACTIONS(53),
    [anon_sym_mandatory] = ACTIONS(53),
    [anon_sym_max_DASHelements] = ACTIONS(53),
    [anon_sym_min_DASHelements] = ACTIONS(53),
    [anon_sym_modifier] = ACTIONS(53),
    [anon_sym_must] = ACTIONS(53),
    [anon_sym_namespace] = ACTIONS(53),
    [anon_sym_notification] = ACTIONS(53),
    [anon_sym_ordered_DASHby] = ACTIONS(53),
    [anon_sym_organization] = ACTIONS(53),
    [anon_sym_output] = ACTIONS(53),
    [anon_sym_path] = ACTIONS(53),
    [anon_sym_pattern] = ACTIONS(53),
    [anon_sym_position] = ACTIONS(53),
    [anon_sym_prefix] = ACTIONS(53),
    [anon_sym_presence] = ACTIONS(53),
    [anon_sym_range] = ACTIONS(53),
    [anon_sym_reference] = ACTIONS(53),
    [anon_sym_refine] = ACTIONS(53),
    [anon_sym_require_DASHinstance] = ACTIONS(53),
    [anon_sym_revision] = ACTIONS(53),
    [anon_sym_revision_DASHdate] = ACTIONS(53),
    [anon_sym_rpc] = ACTIONS(53),
    [anon_sym_status] = ACTIONS(53),
    [anon_sym_type] = ACTIONS(53),
    [anon_sym_typedef] = ACTIONS(53),
    [anon_sym_unique] = ACTIONS(53),
    [anon_sym_units] = ACTIONS(53),
    [anon_sym_uses] = ACTIONS(53),
    [anon_sym_value] = ACTIONS(53),
    [anon_sym_when] = ACTIONS(53),
    [anon_sym_yin_DASHelement] = ACTIONS(53),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(57),
    [anon_sym_submodule] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_yang_DASHversion] = ACTIONS(57),
    [anon_sym_enum] = ACTIONS(57),
    [sym_extension_keyword] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(57),
    [anon_sym_anydata] = ACTIONS(57),
    [anon_sym_anyxml] = ACTIONS(57),
    [anon_sym_argument] = ACTIONS(57),
    [anon_sym_augment] = ACTIONS(57),
    [anon_sym_base] = ACTIONS(57),
    [anon_sym_belongs_DASHto] = ACTIONS(57),
    [anon_sym_bit] = ACTIONS(57),
    [anon_sym_case] = ACTIONS(57),
    [anon_sym_choice] = ACTIONS(57),
    [anon_sym_config] = ACTIONS(57),
    [anon_sym_contact] = ACTIONS(57),
    [anon_sym_container] = ACTIONS(57),
    [anon_sym_default] = ACTIONS(57),
    [anon_sym_description] = ACTIONS(57),
    [anon_sym_deviate] = ACTIONS(57),
    [anon_sym_deviation] = ACTIONS(57),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(57),
    [anon_sym_error_DASHmessage] = ACTIONS(57),
    [anon_sym_extension] = ACTIONS(57),
    [anon_sym_feature] = ACTIONS(57),
    [anon_sym_fraction_DASHdigits] = ACTIONS(57),
    [anon_sym_grouping] = ACTIONS(57),
    [anon_sym_identity] = ACTIONS(57),
    [anon_sym_if_DASHfeature] = ACTIONS(57),
    [anon_sym_import] = ACTIONS(57),
    [anon_sym_include] = ACTIONS(57),
    [anon_sym_input] = ACTIONS(57),
    [anon_sym_key] = ACTIONS(57),
    [anon_sym_leaf] = ACTIONS(57),
    [anon_sym_leaf_DASHlist] = ACTIONS(57),
    [anon_sym_length] = ACTIONS(57),
    [anon_sym_list] = ACTIONS(57),
    [anon_sym_mandatory] = ACTIONS(57),
    [anon_sym_max_DASHelements] = ACTIONS(57),
    [anon_sym_min_DASHelements] = ACTIONS(57),
    [anon_sym_modifier] = ACTIONS(57),
    [anon_sym_must] = ACTIONS(57),
    [anon_sym_namespace] = ACTIONS(57),
    [anon_sym_notification] = ACTIONS(57),
    [anon_sym_ordered_DASHby] = ACTIONS(57),
    [anon_sym_organization] = ACTIONS(57),
    [anon_sym_output] = ACTIONS(57),
    [anon_sym_path] = ACTIONS(57),
    [anon_sym_pattern] = ACTIONS(57),
    [anon_sym_position] = ACTIONS(57),
    [anon_sym_prefix] = ACTIONS(57),
    [anon_sym_presence] = ACTIONS(57),
    [anon_sym_range] = ACTIONS(57),
    [anon_sym_reference] = ACTIONS(57),
    [anon_sym_refine] = ACTIONS(57),
    [anon_sym_require_DASHinstance] = ACTIONS(57),
    [anon_sym_revision] = ACTIONS(57),
    [anon_sym_revision_DASHdate] = ACTIONS(57),
    [anon_sym_rpc] = ACTIONS(57),
    [anon_sym_status] = ACTIONS(57),
    [anon_sym_type] = ACTIONS(57),
    [anon_sym_typedef] = ACTIONS(57),
    [anon_sym_unique] = ACTIONS(57),
    [anon_sym_units] = ACTIONS(57),
    [anon_sym_uses] = ACTIONS(57),
    [anon_sym_value] = ACTIONS(57),
    [anon_sym_when] = ACTIONS(57),
    [anon_sym_yin_DASHelement] = ACTIONS(57),
  },
  [11] = {
    [anon_sym_module] = ACTIONS(61),
    [anon_sym_submodule] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_yang_DASHversion] = ACTIONS(61),
    [anon_sym_enum] = ACTIONS(61),
    [sym_extension_keyword] = ACTIONS(63),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(61),
    [anon_sym_anydata] = ACTIONS(61),
    [anon_sym_anyxml] = ACTIONS(61),
    [anon_sym_argument] = ACTIONS(61),
    [anon_sym_augment] = ACTIONS(61),
    [anon_sym_base] = ACTIONS(61),
    [anon_sym_belongs_DASHto] = ACTIONS(61),
    [anon_sym_bit] = ACTIONS(61),
    [anon_sym_case] = ACTIONS(61),
    [anon_sym_choice] = ACTIONS(61),
    [anon_sym_config] = ACTIONS(61),
    [anon_sym_contact] = ACTIONS(61),
    [anon_sym_container] = ACTIONS(61),
    [anon_sym_default] = ACTIONS(61),
    [anon_sym_description] = ACTIONS(61),
    [anon_sym_deviate] = ACTIONS(61),
    [anon_sym_deviation] = ACTIONS(61),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(61),
    [anon_sym_error_DASHmessage] = ACTIONS(61),
    [anon_sym_extension] = ACTIONS(61),
    [anon_sym_feature] = ACTIONS(61),
    [anon_sym_fraction_DASHdigits] = ACTIONS(61),
    [anon_sym_grouping] = ACTIONS(61),
    [anon_sym_identity] = ACTIONS(61),
    [anon_sym_if_DASHfeature] = ACTIONS(61),
    [anon_sym_import] = ACTIONS(61),
    [anon_sym_include] = ACTIONS(61),
    [anon_sym_input] = ACTIONS(61),
    [anon_sym_key] = ACTIONS(61),
    [anon_sym_leaf] = ACTIONS(61),
    [anon_sym_leaf_DASHlist] = ACTIONS(61),
    [anon_sym_length] = ACTIONS(61),
    [anon_sym_list] = ACTIONS(61),
    [anon_sym_mandatory] = ACTIONS(61),
    [anon_sym_max_DASHelements] = ACTIONS(61),
    [anon_sym_min_DASHelements] = ACTIONS(61),
    [anon_sym_modifier] = ACTIONS(61),
    [anon_sym_must] = ACTIONS(61),
    [anon_sym_namespace] = ACTIONS(61),
    [anon_sym_notification] = ACTIONS(61),
    [anon_sym_ordered_DASHby] = ACTIONS(61),
    [anon_sym_organization] = ACTIONS(61),
    [anon_sym_output] = ACTIONS(61),
    [anon_sym_path] = ACTIONS(61),
    [anon_sym_pattern] = ACTIONS(61),
    [anon_sym_position] = ACTIONS(61),
    [anon_sym_prefix] = ACTIONS(61),
    [anon_sym_presence] = ACTIONS(61),
    [anon_sym_range] = ACTIONS(61),
    [anon_sym_reference] = ACTIONS(61),
    [anon_sym_refine] = ACTIONS(61),
    [anon_sym_require_DASHinstance] = ACTIONS(61),
    [anon_sym_revision] = ACTIONS(61),
    [anon_sym_revision_DASHdate] = ACTIONS(61),
    [anon_sym_rpc] = ACTIONS(61),
    [anon_sym_status] = ACTIONS(61),
    [anon_sym_type] = ACTIONS(61),
    [anon_sym_typedef] = ACTIONS(61),
    [anon_sym_unique] = ACTIONS(61),
    [anon_sym_units] = ACTIONS(61),
    [anon_sym_uses] = ACTIONS(61),
    [anon_sym_value] = ACTIONS(61),
    [anon_sym_when] = ACTIONS(61),
    [anon_sym_yin_DASHelement] = ACTIONS(61),
  },
  [12] = {
    [anon_sym_module] = ACTIONS(65),
    [anon_sym_submodule] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_yang_DASHversion] = ACTIONS(65),
    [anon_sym_enum] = ACTIONS(65),
    [sym_extension_keyword] = ACTIONS(67),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(65),
    [anon_sym_anydata] = ACTIONS(65),
    [anon_sym_anyxml] = ACTIONS(65),
    [anon_sym_argument] = ACTIONS(65),
    [anon_sym_augment] = ACTIONS(65),
    [anon_sym_base] = ACTIONS(65),
    [anon_sym_belongs_DASHto] = ACTIONS(65),
    [anon_sym_bit] = ACTIONS(65),
    [anon_sym_case] = ACTIONS(65),
    [anon_sym_choice] = ACTIONS(65),
    [anon_sym_config] = ACTIONS(65),
    [anon_sym_contact] = ACTIONS(65),
    [anon_sym_container] = ACTIONS(65),
    [anon_sym_default] = ACTIONS(65),
    [anon_sym_description] = ACTIONS(65),
    [anon_sym_deviate] = ACTIONS(65),
    [anon_sym_deviation] = ACTIONS(65),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(65),
    [anon_sym_error_DASHmessage] = ACTIONS(65),
    [anon_sym_extension] = ACTIONS(65),
    [anon_sym_feature] = ACTIONS(65),
    [anon_sym_fraction_DASHdigits] = ACTIONS(65),
    [anon_sym_grouping] = ACTIONS(65),
    [anon_sym_identity] = ACTIONS(65),
    [anon_sym_if_DASHfeature] = ACTIONS(65),
    [anon_sym_import] = ACTIONS(65),
    [anon_sym_include] = ACTIONS(65),
    [anon_sym_input] = ACTIONS(65),
    [anon_sym_key] = ACTIONS(65),
    [anon_sym_leaf] = ACTIONS(65),
    [anon_sym_leaf_DASHlist] = ACTIONS(65),
    [anon_sym_length] = ACTIONS(65),
    [anon_sym_list] = ACTIONS(65),
    [anon_sym_mandatory] = ACTIONS(65),
    [anon_sym_max_DASHelements] = ACTIONS(65),
    [anon_sym_min_DASHelements] = ACTIONS(65),
    [anon_sym_modifier] = ACTIONS(65),
    [anon_sym_must] = ACTIONS(65),
    [anon_sym_namespace] = ACTIONS(65),
    [anon_sym_notification] = ACTIONS(65),
    [anon_sym_ordered_DASHby] = ACTIONS(65),
    [anon_sym_organization] = ACTIONS(65),
    [anon_sym_output] = ACTIONS(65),
    [anon_sym_path] = ACTIONS(65),
    [anon_sym_pattern] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(65),
    [anon_sym_prefix] = ACTIONS(65),
    [anon_sym_presence] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(65),
    [anon_sym_reference] = ACTIONS(65),
    [anon_sym_refine] = ACTIONS(65),
    [anon_sym_require_DASHinstance] = ACTIONS(65),
    [anon_sym_revision] = ACTIONS(65),
    [anon_sym_revision_DASHdate] = ACTIONS(65),
    [anon_sym_rpc] = ACTIONS(65),
    [anon_sym_status] = ACTIONS(65),
    [anon_sym_type] = ACTIONS(65),
    [anon_sym_typedef] = ACTIONS(65),
    [anon_sym_unique] = ACTIONS(65),
    [anon_sym_units] = ACTIONS(65),
    [anon_sym_uses] = ACTIONS(65),
    [anon_sym_value] = ACTIONS(65),
    [anon_sym_when] = ACTIONS(65),
    [anon_sym_yin_DASHelement] = ACTIONS(65),
  },
  [13] = {
    [anon_sym_module] = ACTIONS(69),
    [anon_sym_submodule] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_yang_DASHversion] = ACTIONS(69),
    [anon_sym_enum] = ACTIONS(69),
    [sym_extension_keyword] = ACTIONS(71),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(69),
    [anon_sym_anydata] = ACTIONS(69),
    [anon_sym_anyxml] = ACTIONS(69),
    [anon_sym_argument] = ACTIONS(69),
    [anon_sym_augment] = ACTIONS(69),
    [anon_sym_base] = ACTIONS(69),
    [anon_sym_belongs_DASHto] = ACTIONS(69),
    [anon_sym_bit] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(69),
    [anon_sym_choice] = ACTIONS(69),
    [anon_sym_config] = ACTIONS(69),
    [anon_sym_contact] = ACTIONS(69),
    [anon_sym_container] = ACTIONS(69),
    [anon_sym_default] = ACTIONS(69),
    [anon_sym_description] = ACTIONS(69),
    [anon_sym_deviate] = ACTIONS(69),
    [anon_sym_deviation] = ACTIONS(69),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(69),
    [anon_sym_error_DASHmessage] = ACTIONS(69),
    [anon_sym_extension] = ACTIONS(69),
    [anon_sym_feature] = ACTIONS(69),
    [anon_sym_fraction_DASHdigits] = ACTIONS(69),
    [anon_sym_grouping] = ACTIONS(69),
    [anon_sym_identity] = ACTIONS(69),
    [anon_sym_if_DASHfeature] = ACTIONS(69),
    [anon_sym_import] = ACTIONS(69),
    [anon_sym_include] = ACTIONS(69),
    [anon_sym_input] = ACTIONS(69),
    [anon_sym_key] = ACTIONS(69),
    [anon_sym_leaf] = ACTIONS(69),
    [anon_sym_leaf_DASHlist] = ACTIONS(69),
    [anon_sym_length] = ACTIONS(69),
    [anon_sym_list] = ACTIONS(69),
    [anon_sym_mandatory] = ACTIONS(69),
    [anon_sym_max_DASHelements] = ACTIONS(69),
    [anon_sym_min_DASHelements] = ACTIONS(69),
    [anon_sym_modifier] = ACTIONS(69),
    [anon_sym_must] = ACTIONS(69),
    [anon_sym_namespace] = ACTIONS(69),
    [anon_sym_notification] = ACTIONS(69),
    [anon_sym_ordered_DASHby] = ACTIONS(69),
    [anon_sym_organization] = ACTIONS(69),
    [anon_sym_output] = ACTIONS(69),
    [anon_sym_path] = ACTIONS(69),
    [anon_sym_pattern] = ACTIONS(69),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_prefix] = ACTIONS(69),
    [anon_sym_presence] = ACTIONS(69),
    [anon_sym_range] = ACTIONS(69),
    [anon_sym_reference] = ACTIONS(69),
    [anon_sym_refine] = ACTIONS(69),
    [anon_sym_require_DASHinstance] = ACTIONS(69),
    [anon_sym_revision] = ACTIONS(69),
    [anon_sym_revision_DASHdate] = ACTIONS(69),
    [anon_sym_rpc] = ACTIONS(69),
    [anon_sym_status] = ACTIONS(69),
    [anon_sym_type] = ACTIONS(69),
    [anon_sym_typedef] = ACTIONS(69),
    [anon_sym_unique] = ACTIONS(69),
    [anon_sym_units] = ACTIONS(69),
    [anon_sym_uses] = ACTIONS(69),
    [anon_sym_value] = ACTIONS(69),
    [anon_sym_when] = ACTIONS(69),
    [anon_sym_yin_DASHelement] = ACTIONS(69),
  },
  [14] = {
    [anon_sym_module] = ACTIONS(73),
    [anon_sym_submodule] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_yang_DASHversion] = ACTIONS(73),
    [anon_sym_enum] = ACTIONS(73),
    [sym_extension_keyword] = ACTIONS(75),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(73),
    [anon_sym_anydata] = ACTIONS(73),
    [anon_sym_anyxml] = ACTIONS(73),
    [anon_sym_argument] = ACTIONS(73),
    [anon_sym_augment] = ACTIONS(73),
    [anon_sym_base] = ACTIONS(73),
    [anon_sym_belongs_DASHto] = ACTIONS(73),
    [anon_sym_bit] = ACTIONS(73),
    [anon_sym_case] = ACTIONS(73),
    [anon_sym_choice] = ACTIONS(73),
    [anon_sym_config] = ACTIONS(73),
    [anon_sym_contact] = ACTIONS(73),
    [anon_sym_container] = ACTIONS(73),
    [anon_sym_default] = ACTIONS(73),
    [anon_sym_description] = ACTIONS(73),
    [anon_sym_deviate] = ACTIONS(73),
    [anon_sym_deviation] = ACTIONS(73),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(73),
    [anon_sym_error_DASHmessage] = ACTIONS(73),
    [anon_sym_extension] = ACTIONS(73),
    [anon_sym_feature] = ACTIONS(73),
    [anon_sym_fraction_DASHdigits] = ACTIONS(73),
    [anon_sym_grouping] = ACTIONS(73),
    [anon_sym_identity] = ACTIONS(73),
    [anon_sym_if_DASHfeature] = ACTIONS(73),
    [anon_sym_import] = ACTIONS(73),
    [anon_sym_include] = ACTIONS(73),
    [anon_sym_input] = ACTIONS(73),
    [anon_sym_key] = ACTIONS(73),
    [anon_sym_leaf] = ACTIONS(73),
    [anon_sym_leaf_DASHlist] = ACTIONS(73),
    [anon_sym_length] = ACTIONS(73),
    [anon_sym_list] = ACTIONS(73),
    [anon_sym_mandatory] = ACTIONS(73),
    [anon_sym_max_DASHelements] = ACTIONS(73),
    [anon_sym_min_DASHelements] = ACTIONS(73),
    [anon_sym_modifier] = ACTIONS(73),
    [anon_sym_must] = ACTIONS(73),
    [anon_sym_namespace] = ACTIONS(73),
    [anon_sym_notification] = ACTIONS(73),
    [anon_sym_ordered_DASHby] = ACTIONS(73),
    [anon_sym_organization] = ACTIONS(73),
    [anon_sym_output] = ACTIONS(73),
    [anon_sym_path] = ACTIONS(73),
    [anon_sym_pattern] = ACTIONS(73),
    [anon_sym_position] = ACTIONS(73),
    [anon_sym_prefix] = ACTIONS(73),
    [anon_sym_presence] = ACTIONS(73),
    [anon_sym_range] = ACTIONS(73),
    [anon_sym_reference] = ACTIONS(73),
    [anon_sym_refine] = ACTIONS(73),
    [anon_sym_require_DASHinstance] = ACTIONS(73),
    [anon_sym_revision] = ACTIONS(73),
    [anon_sym_revision_DASHdate] = ACTIONS(73),
    [anon_sym_rpc] = ACTIONS(73),
    [anon_sym_status] = ACTIONS(73),
    [anon_sym_type] = ACTIONS(73),
    [anon_sym_typedef] = ACTIONS(73),
    [anon_sym_unique] = ACTIONS(73),
    [anon_sym_units] = ACTIONS(73),
    [anon_sym_uses] = ACTIONS(73),
    [anon_sym_value] = ACTIONS(73),
    [anon_sym_when] = ACTIONS(73),
    [anon_sym_yin_DASHelement] = ACTIONS(73),
  },
  [15] = {
    [anon_sym_module] = ACTIONS(77),
    [anon_sym_submodule] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_yang_DASHversion] = ACTIONS(77),
    [anon_sym_enum] = ACTIONS(77),
    [sym_extension_keyword] = ACTIONS(79),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(77),
    [anon_sym_anydata] = ACTIONS(77),
    [anon_sym_anyxml] = ACTIONS(77),
    [anon_sym_argument] = ACTIONS(77),
    [anon_sym_augment] = ACTIONS(77),
    [anon_sym_base] = ACTIONS(77),
    [anon_sym_belongs_DASHto] = ACTIONS(77),
    [anon_sym_bit] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(77),
    [anon_sym_choice] = ACTIONS(77),
    [anon_sym_config] = ACTIONS(77),
    [anon_sym_contact] = ACTIONS(77),
    [anon_sym_container] = ACTIONS(77),
    [anon_sym_default] = ACTIONS(77),
    [anon_sym_description] = ACTIONS(77),
    [anon_sym_deviate] = ACTIONS(77),
    [anon_sym_deviation] = ACTIONS(77),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(77),
    [anon_sym_error_DASHmessage] = ACTIONS(77),
    [anon_sym_extension] = ACTIONS(77),
    [anon_sym_feature] = ACTIONS(77),
    [anon_sym_fraction_DASHdigits] = ACTIONS(77),
    [anon_sym_grouping] = ACTIONS(77),
    [anon_sym_identity] = ACTIONS(77),
    [anon_sym_if_DASHfeature] = ACTIONS(77),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_include] = ACTIONS(77),
    [anon_sym_input] = ACTIONS(77),
    [anon_sym_key] = ACTIONS(77),
    [anon_sym_leaf] = ACTIONS(77),
    [anon_sym_leaf_DASHlist] = ACTIONS(77),
    [anon_sym_length] = ACTIONS(77),
    [anon_sym_list] = ACTIONS(77),
    [anon_sym_mandatory] = ACTIONS(77),
    [anon_sym_max_DASHelements] = ACTIONS(77),
    [anon_sym_min_DASHelements] = ACTIONS(77),
    [anon_sym_modifier] = ACTIONS(77),
    [anon_sym_must] = ACTIONS(77),
    [anon_sym_namespace] = ACTIONS(77),
    [anon_sym_notification] = ACTIONS(77),
    [anon_sym_ordered_DASHby] = ACTIONS(77),
    [anon_sym_organization] = ACTIONS(77),
    [anon_sym_output] = ACTIONS(77),
    [anon_sym_path] = ACTIONS(77),
    [anon_sym_pattern] = ACTIONS(77),
    [anon_sym_position] = ACTIONS(77),
    [anon_sym_prefix] = ACTIONS(77),
    [anon_sym_presence] = ACTIONS(77),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_reference] = ACTIONS(77),
    [anon_sym_refine] = ACTIONS(77),
    [anon_sym_require_DASHinstance] = ACTIONS(77),
    [anon_sym_revision] = ACTIONS(77),
    [anon_sym_revision_DASHdate] = ACTIONS(77),
    [anon_sym_rpc] = ACTIONS(77),
    [anon_sym_status] = ACTIONS(77),
    [anon_sym_type] = ACTIONS(77),
    [anon_sym_typedef] = ACTIONS(77),
    [anon_sym_unique] = ACTIONS(77),
    [anon_sym_units] = ACTIONS(77),
    [anon_sym_uses] = ACTIONS(77),
    [anon_sym_value] = ACTIONS(77),
    [anon_sym_when] = ACTIONS(77),
    [anon_sym_yin_DASHelement] = ACTIONS(77),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      aux_sym__node_identifier_token1,
    ACTIONS(85), 1,
      sym__integer,
    ACTIONS(87), 1,
      sym__hex,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      sym_date,
    ACTIONS(97), 1,
      sym_quoted_range,
    ACTIONS(99), 1,
      sym__keypath,
    ACTIONS(101), 1,
      sym__unquoted_string,
    STATE(13), 1,
      sym_block,
    STATE(27), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(32), 1,
      sym__boolean,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      sym_argument,
    STATE(45), 1,
      sym_unquoted_range,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym__node_identifier,
      sym__unquoted_range,
    STATE(44), 9,
      sym_node_identifier,
      sym_integer,
      sym_hex,
      sym_boolean,
      sym_string_concatenation,
      sym_range,
      sym_keypath,
      sym_unquoted_string,
      sym_built_in_type,
    ACTIONS(103), 19,
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
  [93] = 21,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      aux_sym__node_identifier_token1,
    ACTIONS(85), 1,
      sym__integer,
    ACTIONS(87), 1,
      sym__hex,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      sym_date,
    ACTIONS(97), 1,
      sym_quoted_range,
    ACTIONS(99), 1,
      sym__keypath,
    ACTIONS(101), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym_block,
    STATE(27), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(32), 1,
      sym__boolean,
    STATE(36), 1,
      sym_argument,
    STATE(40), 1,
      sym_string,
    STATE(45), 1,
      sym_unquoted_range,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(89), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym__node_identifier,
      sym__unquoted_range,
    STATE(44), 9,
      sym_node_identifier,
      sym_integer,
      sym_hex,
      sym_boolean,
      sym_string_concatenation,
      sym_range,
      sym_keypath,
      sym_unquoted_string,
      sym_built_in_type,
    ACTIONS(103), 19,
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
  [186] = 4,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(107), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [201] = 5,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(65), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [218] = 5,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [235] = 5,
    ACTIONS(120), 1,
      anon_sym_1,
    ACTIONS(122), 1,
      anon_sym_1_DOT1,
    STATE(59), 1,
      sym_yang_version,
    STATE(60), 1,
      sym_yang_version_argument,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [252] = 4,
    ACTIONS(126), 1,
      anon_sym_DOT_DOT,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(124), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [267] = 5,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(134), 1,
      sym__escape_sequence,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [284] = 4,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(136), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [299] = 4,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(140), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [314] = 5,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(147), 1,
      sym__escape_sequence,
    STATE(26), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [331] = 5,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(37), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [348] = 5,
    ACTIONS(134), 1,
      sym__escape_sequence,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym__unescaped_double_string_fragment,
    STATE(26), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [365] = 5,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(49), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [382] = 3,
    ACTIONS(156), 1,
      sym__unquoted_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(154), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [394] = 3,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(158), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [406] = 3,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(160), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [418] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(162), 3,
      anon_sym_DQUOTE,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [428] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(164), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [438] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(166), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [448] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [462] = 3,
    ACTIONS(172), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(170), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [474] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      sym__sep,
    STATE(12), 1,
      sym_block,
  [490] = 3,
    ACTIONS(180), 1,
      sym__unquoted_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(178), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [502] = 3,
    ACTIONS(172), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(182), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [514] = 3,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(184), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [526] = 4,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [540] = 3,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [551] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(182), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [560] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(188), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [569] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(190), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [578] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(192), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [587] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(194), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [596] = 3,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [607] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      sym__sep,
    STATE(11), 1,
      sym_block,
  [620] = 3,
    ACTIONS(198), 1,
      sym__unquoted_string,
    STATE(56), 1,
      sym_enum_argument,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [631] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(200), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [640] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [648] = 2,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [656] = 2,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [664] = 2,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [672] = 2,
    ACTIONS(208), 1,
      sym__integer,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [680] = 2,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [688] = 2,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [696] = 2,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [704] = 2,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [712] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(218), 2,
      anon_sym_LBRACE,
      sym__sep,
  [720] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [728] = 2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [736] = 2,
    ACTIONS(172), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 93,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 201,
  [SMALL_STATE(20)] = 218,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 252,
  [SMALL_STATE(23)] = 267,
  [SMALL_STATE(24)] = 284,
  [SMALL_STATE(25)] = 299,
  [SMALL_STATE(26)] = 314,
  [SMALL_STATE(27)] = 331,
  [SMALL_STATE(28)] = 348,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 382,
  [SMALL_STATE(31)] = 394,
  [SMALL_STATE(32)] = 406,
  [SMALL_STATE(33)] = 418,
  [SMALL_STATE(34)] = 428,
  [SMALL_STATE(35)] = 438,
  [SMALL_STATE(36)] = 448,
  [SMALL_STATE(37)] = 462,
  [SMALL_STATE(38)] = 474,
  [SMALL_STATE(39)] = 490,
  [SMALL_STATE(40)] = 502,
  [SMALL_STATE(41)] = 514,
  [SMALL_STATE(42)] = 526,
  [SMALL_STATE(43)] = 540,
  [SMALL_STATE(44)] = 551,
  [SMALL_STATE(45)] = 560,
  [SMALL_STATE(46)] = 569,
  [SMALL_STATE(47)] = 578,
  [SMALL_STATE(48)] = 587,
  [SMALL_STATE(49)] = 596,
  [SMALL_STATE(50)] = 607,
  [SMALL_STATE(51)] = 620,
  [SMALL_STATE(52)] = 631,
  [SMALL_STATE(53)] = 640,
  [SMALL_STATE(54)] = 648,
  [SMALL_STATE(55)] = 656,
  [SMALL_STATE(56)] = 664,
  [SMALL_STATE(57)] = 672,
  [SMALL_STATE(58)] = 680,
  [SMALL_STATE(59)] = 688,
  [SMALL_STATE(60)] = 696,
  [SMALL_STATE(61)] = 704,
  [SMALL_STATE(62)] = 712,
  [SMALL_STATE(63)] = 720,
  [SMALL_STATE(64)] = 728,
  [SMALL_STATE(65)] = 736,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_statement, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_statement, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__yang_version_statement, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__yang_version_statement, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(18),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2), SHIFT_REPEAT(23),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2), SHIFT_REPEAT(24),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(26),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_range, 3, .production_id = 5),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unquoted_range, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concatenation, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_identifier, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_identifier, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keypath, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_type, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 3, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_argument, 1, .production_id = 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang_version_argument, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang_version, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_keyword, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang, 1),
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
