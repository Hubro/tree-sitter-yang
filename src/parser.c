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
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 2
#define TOKEN_COUNT 115
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
  sym__number = 14,
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
  anon_sym_min = 25,
  anon_sym_DOT_DOT = 26,
  anon_sym_max = 27,
  sym__keypath = 28,
  anon_sym_1 = 29,
  anon_sym_1_DOT1 = 30,
  sym__unquoted_string = 31,
  sym_comment = 32,
  sym__sep = 33,
  anon_sym_binary = 34,
  anon_sym_bits = 35,
  anon_sym_boolean = 36,
  anon_sym_decimal64 = 37,
  anon_sym_empty = 38,
  anon_sym_enumeration = 39,
  anon_sym_identityref = 40,
  anon_sym_instance_DASHidentifier = 41,
  anon_sym_int8 = 42,
  anon_sym_int16 = 43,
  anon_sym_int32 = 44,
  anon_sym_int64 = 45,
  anon_sym_leafref = 46,
  anon_sym_string = 47,
  anon_sym_uint8 = 48,
  anon_sym_uint16 = 49,
  anon_sym_uint32 = 50,
  anon_sym_uint64 = 51,
  anon_sym_union = 52,
  anon_sym_action = 53,
  anon_sym_anydata = 54,
  anon_sym_anyxml = 55,
  anon_sym_argument = 56,
  anon_sym_augment = 57,
  anon_sym_base = 58,
  anon_sym_belongs_DASHto = 59,
  anon_sym_bit = 60,
  anon_sym_case = 61,
  anon_sym_choice = 62,
  anon_sym_config = 63,
  anon_sym_contact = 64,
  anon_sym_container = 65,
  anon_sym_default = 66,
  anon_sym_description = 67,
  anon_sym_deviate = 68,
  anon_sym_deviation = 69,
  anon_sym_error_DASHapp_DASHtag = 70,
  anon_sym_error_DASHmessage = 71,
  anon_sym_extension = 72,
  anon_sym_feature = 73,
  anon_sym_fraction_DASHdigits = 74,
  anon_sym_grouping = 75,
  anon_sym_identity = 76,
  anon_sym_if_DASHfeature = 77,
  anon_sym_import = 78,
  anon_sym_include = 79,
  anon_sym_input = 80,
  anon_sym_key = 81,
  anon_sym_leaf = 82,
  anon_sym_leaf_DASHlist = 83,
  anon_sym_list = 84,
  anon_sym_mandatory = 85,
  anon_sym_max_DASHelements = 86,
  anon_sym_min_DASHelements = 87,
  anon_sym_modifier = 88,
  anon_sym_must = 89,
  anon_sym_namespace = 90,
  anon_sym_notification = 91,
  anon_sym_ordered_DASHby = 92,
  anon_sym_organization = 93,
  anon_sym_output = 94,
  anon_sym_path = 95,
  anon_sym_pattern = 96,
  anon_sym_position = 97,
  anon_sym_prefix = 98,
  anon_sym_presence = 99,
  anon_sym_reference = 100,
  anon_sym_refine = 101,
  anon_sym_require_DASHinstance = 102,
  anon_sym_revision = 103,
  anon_sym_revision_DASHdate = 104,
  anon_sym_rpc = 105,
  anon_sym_status = 106,
  anon_sym_type = 107,
  anon_sym_typedef = 108,
  anon_sym_unique = 109,
  anon_sym_units = 110,
  anon_sym_uses = 111,
  anon_sym_value = 112,
  anon_sym_when = 113,
  anon_sym_yin_DASHelement = 114,
  sym_yang = 115,
  sym_module = 116,
  sym_submodule = 117,
  sym_block = 118,
  sym_statement = 119,
  sym__yang_version_statement = 120,
  sym__enum_statement = 121,
  sym__range_statement = 122,
  sym__length_statement = 123,
  sym__generic_statement = 124,
  sym_extension_statement = 125,
  sym_argument = 126,
  sym_yang_version_argument = 127,
  sym_enum_argument = 128,
  sym_range_argument = 129,
  sym_length_argument = 130,
  sym_number = 131,
  sym_boolean = 132,
  sym_string = 133,
  sym_string_concatenation = 134,
  sym_range = 135,
  sym_unquoted_range = 136,
  sym_quoted_range = 137,
  sym_keypath = 138,
  sym_yang_version = 139,
  sym_unquoted_string = 140,
  sym_built_in_type = 141,
  sym_statement_keyword = 142,
  aux_sym_block_repeat1 = 143,
  aux_sym_string_repeat1 = 144,
  aux_sym_string_repeat2 = 145,
  aux_sym_string_concatenation_repeat1 = 146,
  alias_sym_enum_value = 147,
  alias_sym_escape_sequence = 148,
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
  [sym__number] = "_number",
  [sym_hex] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PLUS] = "plus_symbol",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym__unescaped_single_string_fragment] = "_unescaped_single_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_date] = "date",
  [anon_sym_min] = "start",
  [anon_sym_DOT_DOT] = "dots",
  [anon_sym_max] = "end",
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
  [sym__length_statement] = "_length_statement",
  [sym__generic_statement] = "_generic_statement",
  [sym_extension_statement] = "extension_statement",
  [sym_argument] = "argument",
  [sym_yang_version_argument] = "argument",
  [sym_enum_argument] = "argument",
  [sym_range_argument] = "argument",
  [sym_length_argument] = "argument",
  [sym_number] = "number",
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
  [alias_sym_enum_value] = "enum_value",
  [alias_sym_escape_sequence] = "escape_sequence",
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
  [sym__number] = sym__number,
  [sym_hex] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym__unescaped_double_string_fragment] = sym__unescaped_double_string_fragment,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_date] = sym_date,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_max] = anon_sym_max,
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
  [sym__length_statement] = sym__length_statement,
  [sym__generic_statement] = sym__generic_statement,
  [sym_extension_statement] = sym_extension_statement,
  [sym_argument] = sym_argument,
  [sym_yang_version_argument] = sym_argument,
  [sym_enum_argument] = sym_argument,
  [sym_range_argument] = sym_argument,
  [sym_length_argument] = sym_argument,
  [sym_number] = sym_number,
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
  [alias_sym_enum_value] = alias_sym_enum_value,
  [alias_sym_escape_sequence] = alias_sym_escape_sequence,
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
  [sym__number] = {
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
  [anon_sym_min] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_max] = {
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
  [sym__length_statement] = {
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
  [sym_length_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [alias_sym_enum_value] = {
    .visible = true,
    .named = true,
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
  [4] = {
    [0] = alias_sym_enum_value,
  },
  [5] = {
    [0] = anon_sym_min,
    [2] = anon_sym_max,
  },
  [6] = {
    [1] = anon_sym_min,
    [3] = anon_sym_max,
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
      if (eof) ADVANCE(390);
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(824);
      if (lookahead == '+') ADVANCE(822);
      if (lookahead == '-') ADVANCE(540);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(514);
      if (lookahead == '0') ADVANCE(534);
      if (lookahead == '1') ADVANCE(533);
      if (lookahead == ';') ADVANCE(824);
      if (lookahead == '\\') ADVANCE(865);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == 'b') ADVANCE(549);
      if (lookahead == 'c') ADVANCE(550);
      if (lookahead == 'd') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead == 'f') ADVANCE(555);
      if (lookahead == 'g') ADVANCE(751);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == 'k') ADVANCE(608);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == 'm') ADVANCE(551);
      if (lookahead == 'n') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead == 's') ADVANCE(775);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead == 'u') ADVANCE(660);
      if (lookahead == 'v') ADVANCE(557);
      if (lookahead == 'w') ADVANCE(652);
      if (lookahead == 'y') ADVANCE(575);
      if (lookahead == '{') ADVANCE(824);
      if (lookahead == '}') ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(816);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '+') ADVANCE(855);
      if (lookahead == '-') ADVANCE(847);
      if (lookahead == '/') ADVANCE(842);
      if (lookahead == '0') ADVANCE(499);
      if (lookahead == 'b') ADVANCE(443);
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'f') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead == 'u') ADVANCE(444);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(860);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '/') ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(860);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '/') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(666);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(822);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '/') ADVANCE(826);
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      if (lookahead != 0) ADVANCE(830);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(862);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(861);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(836);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(841);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'b') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(890);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(893);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(939);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(931);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(895);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(907);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(902);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(10);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 142:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 143:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 144:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 145:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 146:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 147:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'g') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 148:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(927);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 149:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 150:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 151:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 152:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 156:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 157:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 158:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 159:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 160:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 161:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 162:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 163:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 164:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 165:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 166:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 170:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 171:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 172:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 173:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 174:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 175:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 176:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 177:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 178:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 179:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 180:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 181:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 182:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 183:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 184:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 185:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 186:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 187:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 188:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 189:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 190:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 191:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 192:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 193:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 194:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 195:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 196:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 197:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 198:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 199:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 200:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 203:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(945);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 204:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 205:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(928);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 206:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 207:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 208:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(901);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 209:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(904);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 210:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 211:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(923);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 212:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 213:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 214:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 216:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 217:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 225:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 226:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 227:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 228:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 229:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 230:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 231:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 232:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 233:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 234:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 235:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 236:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(891);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 237:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 238:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 239:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 240:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 241:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 242:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 243:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 244:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 245:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 246:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 247:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 248:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 249:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 250:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 251:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 252:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 253:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 254:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 255:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 256:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 257:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 258:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 259:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 260:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 261:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 262:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(920);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 265:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(897);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(942);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(918);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 298:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 299:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 300:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(912);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 305:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 306:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 307:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(896);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(915);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 311:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(946);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 312:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 313:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 314:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 315:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 316:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 317:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 318:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 319:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 320:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 321:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(386);
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
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'x') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(913);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(908);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(917);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'y') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'z') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 363:
      if (lookahead == 'b') ADVANCE(370);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(367);
      END_STATE();
    case 370:
      if (lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 373:
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 374:
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 375:
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(833);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 376:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 377:
      if (lookahead == 'x') ADVANCE(837);
      END_STATE();
    case 378:
      if (lookahead == '{') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 379:
      if (lookahead == '}') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 381:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      END_STATE();
    case 382:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 383:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 385:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 386:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 387:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(863);
      END_STATE();
    case 388:
      if (eof) ADVANCE(390);
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 389:
      if (eof) ADVANCE(390);
      if (lookahead == '+') ADVANCE(512);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '1') ADVANCE(840);
      if (lookahead == ';') ADVANCE(398);
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
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '}') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_submodule);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_submodule);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_yang_DASHversion);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_range);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_length);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_extension_keyword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '1') ADVANCE(412);
      if (lookahead == '3') ADVANCE(407);
      if (lookahead == '6') ADVANCE(409);
      if (lookahead == '8') ADVANCE(874);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '1') ADVANCE(413);
      if (lookahead == '3') ADVANCE(408);
      if (lookahead == '6') ADVANCE(410);
      if (lookahead == '8') ADVANCE(880);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '2') ADVANCE(876);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '2') ADVANCE(882);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '4') ADVANCE(877);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '4') ADVANCE(883);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '4') ADVANCE(869);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '6') ADVANCE(875);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '6') ADVANCE(881);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '6') ADVANCE(411);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'a') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'a') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'a') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'a') ADVANCE(454);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'a') ADVANCE(463);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'a') ADVANCE(461);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'a') ADVANCE(489);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'c') ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'c') ADVANCE(429);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(480);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'd') ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(508);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(509);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(438);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(472);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'f') ADVANCE(878);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'f') ADVANCE(872);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'f') ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'f') ADVANCE(452);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'g') ADVANCE(879);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(468);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(446);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(469);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(458);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(485);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(470);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'l') ADVANCE(481);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'l') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'l') ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(490);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'm') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'm') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(442);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(884);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(868);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(871);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(423);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == 't') ADVANCE(479);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(484);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(487);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(488);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(462);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'p') ADVANCE(482);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(873);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(491);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(493);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(447);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(432);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 's') ADVANCE(867);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == 't') ADVANCE(405);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 's') ADVANCE(428);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 't') ADVANCE(492);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 't') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 't') ADVANCE(406);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 't') ADVANCE(494);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 't') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 't') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 't') ADVANCE(449);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 't') ADVANCE(451);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'u') ADVANCE(457);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'u') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'y') ADVANCE(870);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'y') ADVANCE(866);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (lookahead == 'y') ADVANCE(478);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_node_identifier);
      if (lookahead == '/') ADVANCE(856);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '-') ADVANCE(853);
      if (lookahead == '.') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead == '/') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead == '/') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(516);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead == 'r') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(819);
      if (lookahead == '.') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(818);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(818);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '0') ADVANCE(535);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '1') ADVANCE(545);
      if (lookahead == '3') ADVANCE(543);
      if (lookahead == '6') ADVANCE(544);
      if (lookahead == '8') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '1') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '2') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '4') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '6') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '6') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == 'i') ADVANCE(705);
      if (lookahead == 'o') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == 'h') ADVANCE(728);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(704);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'o') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(768);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'm') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(780);
      if (lookahead == 'n') ADVANCE(813);
      if (lookahead == 'r') ADVANCE(648);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(663);
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 's') ADVANCE(582);
      if (lookahead == 'v') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(805);
      if (lookahead == 's') ADVANCE(796);
      if (lookahead == 't') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(774);
      if (lookahead == 'i') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(612);
      if (lookahead == 'f') ADVANCE(517);
      if (lookahead == 'm') ADVANCE(741);
      if (lookahead == 'n') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(615);
      if (lookahead == 'g') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(571);
      if (lookahead == 'x') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == 'i') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(617);
      if (lookahead == 'q') ADVANCE(806);
      if (lookahead == 'v') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(655);
      if (lookahead == 's') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(824);
      if (lookahead == 't') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(740);
      if (lookahead == 'n') ADVANCE(799);
      if (lookahead == 'r') ADVANCE(753);
      if (lookahead == 'x') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(599);
      if (lookahead == 'x') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 'q') ADVANCE(802);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead == 'y') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead == 'u') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'v') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'x') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == 'z') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(828);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(830);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead == '/') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(828);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(828);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(830);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(831);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(832);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_date);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__keypath);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(858);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__keypath);
      if (lookahead == '/') ADVANCE(856);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(839);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(845);
      if (lookahead == '/') ADVANCE(848);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(845);
      if (lookahead == '/') ADVANCE(848);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(844);
      if (lookahead == '/') ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(845);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '*') ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(854);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '0') ADVANCE(500);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\\') ADVANCE(849);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(848);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(862);
      if (lookahead == '\r') ADVANCE(863);
      if (lookahead != 0) ADVANCE(848);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(834);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(851);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(852);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(839);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(862);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(387);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(864);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__word);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_binary);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_decimal64);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_empty);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_enumeration);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_identityref);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_instance_DASHidentifier);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_leafref);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == ':') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      if (!sym__unquoted_string_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_anydata);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_anyxml);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_argument);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_augment);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_base);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_belongs_DASHto);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_choice);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_contact);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_container);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_deviate);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_deviation);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_error_DASHapp_DASHtag);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_error_DASHmessage);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_extension);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_feature);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_fraction_DASHdigits);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_grouping);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_identity);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_if_DASHfeature);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_leaf);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_leaf_DASHlist);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_mandatory);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_max_DASHelements);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_min_DASHelements);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_modifier);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_must);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_notification);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_ordered_DASHby);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_organization);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_prefix);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_presence);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_reference);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_refine);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_require_DASHinstance);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_revision);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_revision_DASHdate);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_rpc);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_status);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_unique);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_units);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_yin_DASHelement);
      if (lookahead == ':') ADVANCE(386);
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
  [1] = {.lex_state = 388},
  [2] = {.lex_state = 389},
  [3] = {.lex_state = 389},
  [4] = {.lex_state = 389},
  [5] = {.lex_state = 389},
  [6] = {.lex_state = 389},
  [7] = {.lex_state = 389},
  [8] = {.lex_state = 389},
  [9] = {.lex_state = 389},
  [10] = {.lex_state = 389},
  [11] = {.lex_state = 389},
  [12] = {.lex_state = 389},
  [13] = {.lex_state = 389},
  [14] = {.lex_state = 389},
  [15] = {.lex_state = 389},
  [16] = {.lex_state = 389},
  [17] = {.lex_state = 389},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 388},
  [21] = {.lex_state = 388},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 388},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 389},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 388},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 389},
  [36] = {.lex_state = 389},
  [37] = {.lex_state = 388},
  [38] = {.lex_state = 388},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 389},
  [41] = {.lex_state = 388},
  [42] = {.lex_state = 388},
  [43] = {.lex_state = 389},
  [44] = {.lex_state = 388},
  [45] = {.lex_state = 388},
  [46] = {.lex_state = 388},
  [47] = {.lex_state = 388},
  [48] = {.lex_state = 388},
  [49] = {.lex_state = 388},
  [50] = {.lex_state = 388},
  [51] = {.lex_state = 388},
  [52] = {.lex_state = 388},
  [53] = {.lex_state = 388},
  [54] = {.lex_state = 388},
  [55] = {.lex_state = 388},
  [56] = {.lex_state = 388},
  [57] = {.lex_state = 388},
  [58] = {.lex_state = 388},
  [59] = {.lex_state = 388},
  [60] = {.lex_state = 388},
  [61] = {.lex_state = 388},
  [62] = {.lex_state = 388},
  [63] = {.lex_state = 388},
  [64] = {.lex_state = 388},
  [65] = {.lex_state = 388},
  [66] = {.lex_state = 388},
  [67] = {.lex_state = 388},
  [68] = {.lex_state = 388},
  [69] = {.lex_state = 388},
  [70] = {.lex_state = 388},
  [71] = {.lex_state = 388},
  [72] = {.lex_state = 388},
  [73] = {.lex_state = 388},
  [74] = {.lex_state = 388},
  [75] = {.lex_state = 388},
  [76] = {.lex_state = 388},
  [77] = {.lex_state = 389},
  [78] = {.lex_state = 388},
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
    [sym__number] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym__unescaped_double_string_fragment] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_1_DOT1] = ACTIONS(1),
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
    [sym_yang] = STATE(70),
    [sym_module] = STATE(75),
    [sym_submodule] = STATE(75),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_submodule] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym__yang_version_statement] = STATE(17),
    [sym__enum_statement] = STATE(17),
    [sym__range_statement] = STATE(17),
    [sym__length_statement] = STATE(17),
    [sym__generic_statement] = STATE(17),
    [sym_extension_statement] = STATE(2),
    [sym_statement_keyword] = STATE(50),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_submodule] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(14),
    [anon_sym_yang_DASHversion] = ACTIONS(16),
    [anon_sym_enum] = ACTIONS(19),
    [anon_sym_range] = ACTIONS(22),
    [anon_sym_length] = ACTIONS(25),
    [sym_extension_keyword] = ACTIONS(28),
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
    [sym_statement] = STATE(4),
    [sym__yang_version_statement] = STATE(17),
    [sym__enum_statement] = STATE(17),
    [sym__range_statement] = STATE(17),
    [sym__length_statement] = STATE(17),
    [sym__generic_statement] = STATE(17),
    [sym_extension_statement] = STATE(4),
    [sym_statement_keyword] = STATE(50),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_submodule] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_yang_DASHversion] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_range] = ACTIONS(39),
    [anon_sym_length] = ACTIONS(41),
    [sym_extension_keyword] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(31),
    [anon_sym_anydata] = ACTIONS(31),
    [anon_sym_anyxml] = ACTIONS(31),
    [anon_sym_argument] = ACTIONS(31),
    [anon_sym_augment] = ACTIONS(31),
    [anon_sym_base] = ACTIONS(31),
    [anon_sym_belongs_DASHto] = ACTIONS(31),
    [anon_sym_bit] = ACTIONS(31),
    [anon_sym_case] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(31),
    [anon_sym_config] = ACTIONS(31),
    [anon_sym_contact] = ACTIONS(31),
    [anon_sym_container] = ACTIONS(31),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_description] = ACTIONS(31),
    [anon_sym_deviate] = ACTIONS(31),
    [anon_sym_deviation] = ACTIONS(31),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(31),
    [anon_sym_error_DASHmessage] = ACTIONS(31),
    [anon_sym_extension] = ACTIONS(31),
    [anon_sym_feature] = ACTIONS(31),
    [anon_sym_fraction_DASHdigits] = ACTIONS(31),
    [anon_sym_grouping] = ACTIONS(31),
    [anon_sym_identity] = ACTIONS(31),
    [anon_sym_if_DASHfeature] = ACTIONS(31),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_include] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_key] = ACTIONS(31),
    [anon_sym_leaf] = ACTIONS(31),
    [anon_sym_leaf_DASHlist] = ACTIONS(31),
    [anon_sym_list] = ACTIONS(31),
    [anon_sym_mandatory] = ACTIONS(31),
    [anon_sym_max_DASHelements] = ACTIONS(31),
    [anon_sym_min_DASHelements] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_must] = ACTIONS(31),
    [anon_sym_namespace] = ACTIONS(31),
    [anon_sym_notification] = ACTIONS(31),
    [anon_sym_ordered_DASHby] = ACTIONS(31),
    [anon_sym_organization] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_path] = ACTIONS(31),
    [anon_sym_pattern] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_prefix] = ACTIONS(31),
    [anon_sym_presence] = ACTIONS(31),
    [anon_sym_reference] = ACTIONS(31),
    [anon_sym_refine] = ACTIONS(31),
    [anon_sym_require_DASHinstance] = ACTIONS(31),
    [anon_sym_revision] = ACTIONS(31),
    [anon_sym_revision_DASHdate] = ACTIONS(31),
    [anon_sym_rpc] = ACTIONS(31),
    [anon_sym_status] = ACTIONS(31),
    [anon_sym_type] = ACTIONS(31),
    [anon_sym_typedef] = ACTIONS(31),
    [anon_sym_unique] = ACTIONS(31),
    [anon_sym_units] = ACTIONS(31),
    [anon_sym_uses] = ACTIONS(31),
    [anon_sym_value] = ACTIONS(31),
    [anon_sym_when] = ACTIONS(31),
    [anon_sym_yin_DASHelement] = ACTIONS(31),
  },
  [4] = {
    [sym_statement] = STATE(2),
    [sym__yang_version_statement] = STATE(17),
    [sym__enum_statement] = STATE(17),
    [sym__range_statement] = STATE(17),
    [sym__length_statement] = STATE(17),
    [sym__generic_statement] = STATE(17),
    [sym_extension_statement] = STATE(2),
    [sym_statement_keyword] = STATE(50),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_submodule] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_yang_DASHversion] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_range] = ACTIONS(39),
    [anon_sym_length] = ACTIONS(41),
    [sym_extension_keyword] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(31),
    [anon_sym_anydata] = ACTIONS(31),
    [anon_sym_anyxml] = ACTIONS(31),
    [anon_sym_argument] = ACTIONS(31),
    [anon_sym_augment] = ACTIONS(31),
    [anon_sym_base] = ACTIONS(31),
    [anon_sym_belongs_DASHto] = ACTIONS(31),
    [anon_sym_bit] = ACTIONS(31),
    [anon_sym_case] = ACTIONS(31),
    [anon_sym_choice] = ACTIONS(31),
    [anon_sym_config] = ACTIONS(31),
    [anon_sym_contact] = ACTIONS(31),
    [anon_sym_container] = ACTIONS(31),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_description] = ACTIONS(31),
    [anon_sym_deviate] = ACTIONS(31),
    [anon_sym_deviation] = ACTIONS(31),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(31),
    [anon_sym_error_DASHmessage] = ACTIONS(31),
    [anon_sym_extension] = ACTIONS(31),
    [anon_sym_feature] = ACTIONS(31),
    [anon_sym_fraction_DASHdigits] = ACTIONS(31),
    [anon_sym_grouping] = ACTIONS(31),
    [anon_sym_identity] = ACTIONS(31),
    [anon_sym_if_DASHfeature] = ACTIONS(31),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_include] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_key] = ACTIONS(31),
    [anon_sym_leaf] = ACTIONS(31),
    [anon_sym_leaf_DASHlist] = ACTIONS(31),
    [anon_sym_list] = ACTIONS(31),
    [anon_sym_mandatory] = ACTIONS(31),
    [anon_sym_max_DASHelements] = ACTIONS(31),
    [anon_sym_min_DASHelements] = ACTIONS(31),
    [anon_sym_modifier] = ACTIONS(31),
    [anon_sym_must] = ACTIONS(31),
    [anon_sym_namespace] = ACTIONS(31),
    [anon_sym_notification] = ACTIONS(31),
    [anon_sym_ordered_DASHby] = ACTIONS(31),
    [anon_sym_organization] = ACTIONS(31),
    [anon_sym_output] = ACTIONS(31),
    [anon_sym_path] = ACTIONS(31),
    [anon_sym_pattern] = ACTIONS(31),
    [anon_sym_position] = ACTIONS(31),
    [anon_sym_prefix] = ACTIONS(31),
    [anon_sym_presence] = ACTIONS(31),
    [anon_sym_reference] = ACTIONS(31),
    [anon_sym_refine] = ACTIONS(31),
    [anon_sym_require_DASHinstance] = ACTIONS(31),
    [anon_sym_revision] = ACTIONS(31),
    [anon_sym_revision_DASHdate] = ACTIONS(31),
    [anon_sym_rpc] = ACTIONS(31),
    [anon_sym_status] = ACTIONS(31),
    [anon_sym_type] = ACTIONS(31),
    [anon_sym_typedef] = ACTIONS(31),
    [anon_sym_unique] = ACTIONS(31),
    [anon_sym_units] = ACTIONS(31),
    [anon_sym_uses] = ACTIONS(31),
    [anon_sym_value] = ACTIONS(31),
    [anon_sym_when] = ACTIONS(31),
    [anon_sym_yin_DASHelement] = ACTIONS(31),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_module] = ACTIONS(49),
    [anon_sym_submodule] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_yang_DASHversion] = ACTIONS(49),
    [anon_sym_enum] = ACTIONS(49),
    [anon_sym_range] = ACTIONS(49),
    [anon_sym_length] = ACTIONS(49),
    [sym_extension_keyword] = ACTIONS(47),
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
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_module] = ACTIONS(53),
    [anon_sym_submodule] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_yang_DASHversion] = ACTIONS(53),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_range] = ACTIONS(53),
    [anon_sym_length] = ACTIONS(53),
    [sym_extension_keyword] = ACTIONS(51),
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
  [7] = {
    [anon_sym_module] = ACTIONS(55),
    [anon_sym_submodule] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_yang_DASHversion] = ACTIONS(55),
    [anon_sym_enum] = ACTIONS(55),
    [anon_sym_range] = ACTIONS(55),
    [anon_sym_length] = ACTIONS(55),
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
    [anon_sym_yin_DASHelement] = ACTIONS(55),
  },
  [8] = {
    [anon_sym_module] = ACTIONS(59),
    [anon_sym_submodule] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_yang_DASHversion] = ACTIONS(59),
    [anon_sym_enum] = ACTIONS(59),
    [anon_sym_range] = ACTIONS(59),
    [anon_sym_length] = ACTIONS(59),
    [sym_extension_keyword] = ACTIONS(61),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(59),
    [anon_sym_anydata] = ACTIONS(59),
    [anon_sym_anyxml] = ACTIONS(59),
    [anon_sym_argument] = ACTIONS(59),
    [anon_sym_augment] = ACTIONS(59),
    [anon_sym_base] = ACTIONS(59),
    [anon_sym_belongs_DASHto] = ACTIONS(59),
    [anon_sym_bit] = ACTIONS(59),
    [anon_sym_case] = ACTIONS(59),
    [anon_sym_choice] = ACTIONS(59),
    [anon_sym_config] = ACTIONS(59),
    [anon_sym_contact] = ACTIONS(59),
    [anon_sym_container] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(59),
    [anon_sym_description] = ACTIONS(59),
    [anon_sym_deviate] = ACTIONS(59),
    [anon_sym_deviation] = ACTIONS(59),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(59),
    [anon_sym_error_DASHmessage] = ACTIONS(59),
    [anon_sym_extension] = ACTIONS(59),
    [anon_sym_feature] = ACTIONS(59),
    [anon_sym_fraction_DASHdigits] = ACTIONS(59),
    [anon_sym_grouping] = ACTIONS(59),
    [anon_sym_identity] = ACTIONS(59),
    [anon_sym_if_DASHfeature] = ACTIONS(59),
    [anon_sym_import] = ACTIONS(59),
    [anon_sym_include] = ACTIONS(59),
    [anon_sym_input] = ACTIONS(59),
    [anon_sym_key] = ACTIONS(59),
    [anon_sym_leaf] = ACTIONS(59),
    [anon_sym_leaf_DASHlist] = ACTIONS(59),
    [anon_sym_list] = ACTIONS(59),
    [anon_sym_mandatory] = ACTIONS(59),
    [anon_sym_max_DASHelements] = ACTIONS(59),
    [anon_sym_min_DASHelements] = ACTIONS(59),
    [anon_sym_modifier] = ACTIONS(59),
    [anon_sym_must] = ACTIONS(59),
    [anon_sym_namespace] = ACTIONS(59),
    [anon_sym_notification] = ACTIONS(59),
    [anon_sym_ordered_DASHby] = ACTIONS(59),
    [anon_sym_organization] = ACTIONS(59),
    [anon_sym_output] = ACTIONS(59),
    [anon_sym_path] = ACTIONS(59),
    [anon_sym_pattern] = ACTIONS(59),
    [anon_sym_position] = ACTIONS(59),
    [anon_sym_prefix] = ACTIONS(59),
    [anon_sym_presence] = ACTIONS(59),
    [anon_sym_reference] = ACTIONS(59),
    [anon_sym_refine] = ACTIONS(59),
    [anon_sym_require_DASHinstance] = ACTIONS(59),
    [anon_sym_revision] = ACTIONS(59),
    [anon_sym_revision_DASHdate] = ACTIONS(59),
    [anon_sym_rpc] = ACTIONS(59),
    [anon_sym_status] = ACTIONS(59),
    [anon_sym_type] = ACTIONS(59),
    [anon_sym_typedef] = ACTIONS(59),
    [anon_sym_unique] = ACTIONS(59),
    [anon_sym_units] = ACTIONS(59),
    [anon_sym_uses] = ACTIONS(59),
    [anon_sym_value] = ACTIONS(59),
    [anon_sym_when] = ACTIONS(59),
    [anon_sym_yin_DASHelement] = ACTIONS(59),
  },
  [9] = {
    [anon_sym_module] = ACTIONS(63),
    [anon_sym_submodule] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_yang_DASHversion] = ACTIONS(63),
    [anon_sym_enum] = ACTIONS(63),
    [anon_sym_range] = ACTIONS(63),
    [anon_sym_length] = ACTIONS(63),
    [sym_extension_keyword] = ACTIONS(65),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(63),
    [anon_sym_anydata] = ACTIONS(63),
    [anon_sym_anyxml] = ACTIONS(63),
    [anon_sym_argument] = ACTIONS(63),
    [anon_sym_augment] = ACTIONS(63),
    [anon_sym_base] = ACTIONS(63),
    [anon_sym_belongs_DASHto] = ACTIONS(63),
    [anon_sym_bit] = ACTIONS(63),
    [anon_sym_case] = ACTIONS(63),
    [anon_sym_choice] = ACTIONS(63),
    [anon_sym_config] = ACTIONS(63),
    [anon_sym_contact] = ACTIONS(63),
    [anon_sym_container] = ACTIONS(63),
    [anon_sym_default] = ACTIONS(63),
    [anon_sym_description] = ACTIONS(63),
    [anon_sym_deviate] = ACTIONS(63),
    [anon_sym_deviation] = ACTIONS(63),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(63),
    [anon_sym_error_DASHmessage] = ACTIONS(63),
    [anon_sym_extension] = ACTIONS(63),
    [anon_sym_feature] = ACTIONS(63),
    [anon_sym_fraction_DASHdigits] = ACTIONS(63),
    [anon_sym_grouping] = ACTIONS(63),
    [anon_sym_identity] = ACTIONS(63),
    [anon_sym_if_DASHfeature] = ACTIONS(63),
    [anon_sym_import] = ACTIONS(63),
    [anon_sym_include] = ACTIONS(63),
    [anon_sym_input] = ACTIONS(63),
    [anon_sym_key] = ACTIONS(63),
    [anon_sym_leaf] = ACTIONS(63),
    [anon_sym_leaf_DASHlist] = ACTIONS(63),
    [anon_sym_list] = ACTIONS(63),
    [anon_sym_mandatory] = ACTIONS(63),
    [anon_sym_max_DASHelements] = ACTIONS(63),
    [anon_sym_min_DASHelements] = ACTIONS(63),
    [anon_sym_modifier] = ACTIONS(63),
    [anon_sym_must] = ACTIONS(63),
    [anon_sym_namespace] = ACTIONS(63),
    [anon_sym_notification] = ACTIONS(63),
    [anon_sym_ordered_DASHby] = ACTIONS(63),
    [anon_sym_organization] = ACTIONS(63),
    [anon_sym_output] = ACTIONS(63),
    [anon_sym_path] = ACTIONS(63),
    [anon_sym_pattern] = ACTIONS(63),
    [anon_sym_position] = ACTIONS(63),
    [anon_sym_prefix] = ACTIONS(63),
    [anon_sym_presence] = ACTIONS(63),
    [anon_sym_reference] = ACTIONS(63),
    [anon_sym_refine] = ACTIONS(63),
    [anon_sym_require_DASHinstance] = ACTIONS(63),
    [anon_sym_revision] = ACTIONS(63),
    [anon_sym_revision_DASHdate] = ACTIONS(63),
    [anon_sym_rpc] = ACTIONS(63),
    [anon_sym_status] = ACTIONS(63),
    [anon_sym_type] = ACTIONS(63),
    [anon_sym_typedef] = ACTIONS(63),
    [anon_sym_unique] = ACTIONS(63),
    [anon_sym_units] = ACTIONS(63),
    [anon_sym_uses] = ACTIONS(63),
    [anon_sym_value] = ACTIONS(63),
    [anon_sym_when] = ACTIONS(63),
    [anon_sym_yin_DASHelement] = ACTIONS(63),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_submodule] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_yang_DASHversion] = ACTIONS(67),
    [anon_sym_enum] = ACTIONS(67),
    [anon_sym_range] = ACTIONS(67),
    [anon_sym_length] = ACTIONS(67),
    [sym_extension_keyword] = ACTIONS(69),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(67),
    [anon_sym_anydata] = ACTIONS(67),
    [anon_sym_anyxml] = ACTIONS(67),
    [anon_sym_argument] = ACTIONS(67),
    [anon_sym_augment] = ACTIONS(67),
    [anon_sym_base] = ACTIONS(67),
    [anon_sym_belongs_DASHto] = ACTIONS(67),
    [anon_sym_bit] = ACTIONS(67),
    [anon_sym_case] = ACTIONS(67),
    [anon_sym_choice] = ACTIONS(67),
    [anon_sym_config] = ACTIONS(67),
    [anon_sym_contact] = ACTIONS(67),
    [anon_sym_container] = ACTIONS(67),
    [anon_sym_default] = ACTIONS(67),
    [anon_sym_description] = ACTIONS(67),
    [anon_sym_deviate] = ACTIONS(67),
    [anon_sym_deviation] = ACTIONS(67),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(67),
    [anon_sym_error_DASHmessage] = ACTIONS(67),
    [anon_sym_extension] = ACTIONS(67),
    [anon_sym_feature] = ACTIONS(67),
    [anon_sym_fraction_DASHdigits] = ACTIONS(67),
    [anon_sym_grouping] = ACTIONS(67),
    [anon_sym_identity] = ACTIONS(67),
    [anon_sym_if_DASHfeature] = ACTIONS(67),
    [anon_sym_import] = ACTIONS(67),
    [anon_sym_include] = ACTIONS(67),
    [anon_sym_input] = ACTIONS(67),
    [anon_sym_key] = ACTIONS(67),
    [anon_sym_leaf] = ACTIONS(67),
    [anon_sym_leaf_DASHlist] = ACTIONS(67),
    [anon_sym_list] = ACTIONS(67),
    [anon_sym_mandatory] = ACTIONS(67),
    [anon_sym_max_DASHelements] = ACTIONS(67),
    [anon_sym_min_DASHelements] = ACTIONS(67),
    [anon_sym_modifier] = ACTIONS(67),
    [anon_sym_must] = ACTIONS(67),
    [anon_sym_namespace] = ACTIONS(67),
    [anon_sym_notification] = ACTIONS(67),
    [anon_sym_ordered_DASHby] = ACTIONS(67),
    [anon_sym_organization] = ACTIONS(67),
    [anon_sym_output] = ACTIONS(67),
    [anon_sym_path] = ACTIONS(67),
    [anon_sym_pattern] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_prefix] = ACTIONS(67),
    [anon_sym_presence] = ACTIONS(67),
    [anon_sym_reference] = ACTIONS(67),
    [anon_sym_refine] = ACTIONS(67),
    [anon_sym_require_DASHinstance] = ACTIONS(67),
    [anon_sym_revision] = ACTIONS(67),
    [anon_sym_revision_DASHdate] = ACTIONS(67),
    [anon_sym_rpc] = ACTIONS(67),
    [anon_sym_status] = ACTIONS(67),
    [anon_sym_type] = ACTIONS(67),
    [anon_sym_typedef] = ACTIONS(67),
    [anon_sym_unique] = ACTIONS(67),
    [anon_sym_units] = ACTIONS(67),
    [anon_sym_uses] = ACTIONS(67),
    [anon_sym_value] = ACTIONS(67),
    [anon_sym_when] = ACTIONS(67),
    [anon_sym_yin_DASHelement] = ACTIONS(67),
  },
  [11] = {
    [anon_sym_module] = ACTIONS(71),
    [anon_sym_submodule] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_yang_DASHversion] = ACTIONS(71),
    [anon_sym_enum] = ACTIONS(71),
    [anon_sym_range] = ACTIONS(71),
    [anon_sym_length] = ACTIONS(71),
    [sym_extension_keyword] = ACTIONS(73),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(71),
    [anon_sym_anydata] = ACTIONS(71),
    [anon_sym_anyxml] = ACTIONS(71),
    [anon_sym_argument] = ACTIONS(71),
    [anon_sym_augment] = ACTIONS(71),
    [anon_sym_base] = ACTIONS(71),
    [anon_sym_belongs_DASHto] = ACTIONS(71),
    [anon_sym_bit] = ACTIONS(71),
    [anon_sym_case] = ACTIONS(71),
    [anon_sym_choice] = ACTIONS(71),
    [anon_sym_config] = ACTIONS(71),
    [anon_sym_contact] = ACTIONS(71),
    [anon_sym_container] = ACTIONS(71),
    [anon_sym_default] = ACTIONS(71),
    [anon_sym_description] = ACTIONS(71),
    [anon_sym_deviate] = ACTIONS(71),
    [anon_sym_deviation] = ACTIONS(71),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(71),
    [anon_sym_error_DASHmessage] = ACTIONS(71),
    [anon_sym_extension] = ACTIONS(71),
    [anon_sym_feature] = ACTIONS(71),
    [anon_sym_fraction_DASHdigits] = ACTIONS(71),
    [anon_sym_grouping] = ACTIONS(71),
    [anon_sym_identity] = ACTIONS(71),
    [anon_sym_if_DASHfeature] = ACTIONS(71),
    [anon_sym_import] = ACTIONS(71),
    [anon_sym_include] = ACTIONS(71),
    [anon_sym_input] = ACTIONS(71),
    [anon_sym_key] = ACTIONS(71),
    [anon_sym_leaf] = ACTIONS(71),
    [anon_sym_leaf_DASHlist] = ACTIONS(71),
    [anon_sym_list] = ACTIONS(71),
    [anon_sym_mandatory] = ACTIONS(71),
    [anon_sym_max_DASHelements] = ACTIONS(71),
    [anon_sym_min_DASHelements] = ACTIONS(71),
    [anon_sym_modifier] = ACTIONS(71),
    [anon_sym_must] = ACTIONS(71),
    [anon_sym_namespace] = ACTIONS(71),
    [anon_sym_notification] = ACTIONS(71),
    [anon_sym_ordered_DASHby] = ACTIONS(71),
    [anon_sym_organization] = ACTIONS(71),
    [anon_sym_output] = ACTIONS(71),
    [anon_sym_path] = ACTIONS(71),
    [anon_sym_pattern] = ACTIONS(71),
    [anon_sym_position] = ACTIONS(71),
    [anon_sym_prefix] = ACTIONS(71),
    [anon_sym_presence] = ACTIONS(71),
    [anon_sym_reference] = ACTIONS(71),
    [anon_sym_refine] = ACTIONS(71),
    [anon_sym_require_DASHinstance] = ACTIONS(71),
    [anon_sym_revision] = ACTIONS(71),
    [anon_sym_revision_DASHdate] = ACTIONS(71),
    [anon_sym_rpc] = ACTIONS(71),
    [anon_sym_status] = ACTIONS(71),
    [anon_sym_type] = ACTIONS(71),
    [anon_sym_typedef] = ACTIONS(71),
    [anon_sym_unique] = ACTIONS(71),
    [anon_sym_units] = ACTIONS(71),
    [anon_sym_uses] = ACTIONS(71),
    [anon_sym_value] = ACTIONS(71),
    [anon_sym_when] = ACTIONS(71),
    [anon_sym_yin_DASHelement] = ACTIONS(71),
  },
  [12] = {
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_submodule] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_yang_DASHversion] = ACTIONS(75),
    [anon_sym_enum] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(75),
    [anon_sym_length] = ACTIONS(75),
    [sym_extension_keyword] = ACTIONS(77),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(75),
    [anon_sym_anydata] = ACTIONS(75),
    [anon_sym_anyxml] = ACTIONS(75),
    [anon_sym_argument] = ACTIONS(75),
    [anon_sym_augment] = ACTIONS(75),
    [anon_sym_base] = ACTIONS(75),
    [anon_sym_belongs_DASHto] = ACTIONS(75),
    [anon_sym_bit] = ACTIONS(75),
    [anon_sym_case] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_config] = ACTIONS(75),
    [anon_sym_contact] = ACTIONS(75),
    [anon_sym_container] = ACTIONS(75),
    [anon_sym_default] = ACTIONS(75),
    [anon_sym_description] = ACTIONS(75),
    [anon_sym_deviate] = ACTIONS(75),
    [anon_sym_deviation] = ACTIONS(75),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(75),
    [anon_sym_error_DASHmessage] = ACTIONS(75),
    [anon_sym_extension] = ACTIONS(75),
    [anon_sym_feature] = ACTIONS(75),
    [anon_sym_fraction_DASHdigits] = ACTIONS(75),
    [anon_sym_grouping] = ACTIONS(75),
    [anon_sym_identity] = ACTIONS(75),
    [anon_sym_if_DASHfeature] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_include] = ACTIONS(75),
    [anon_sym_input] = ACTIONS(75),
    [anon_sym_key] = ACTIONS(75),
    [anon_sym_leaf] = ACTIONS(75),
    [anon_sym_leaf_DASHlist] = ACTIONS(75),
    [anon_sym_list] = ACTIONS(75),
    [anon_sym_mandatory] = ACTIONS(75),
    [anon_sym_max_DASHelements] = ACTIONS(75),
    [anon_sym_min_DASHelements] = ACTIONS(75),
    [anon_sym_modifier] = ACTIONS(75),
    [anon_sym_must] = ACTIONS(75),
    [anon_sym_namespace] = ACTIONS(75),
    [anon_sym_notification] = ACTIONS(75),
    [anon_sym_ordered_DASHby] = ACTIONS(75),
    [anon_sym_organization] = ACTIONS(75),
    [anon_sym_output] = ACTIONS(75),
    [anon_sym_path] = ACTIONS(75),
    [anon_sym_pattern] = ACTIONS(75),
    [anon_sym_position] = ACTIONS(75),
    [anon_sym_prefix] = ACTIONS(75),
    [anon_sym_presence] = ACTIONS(75),
    [anon_sym_reference] = ACTIONS(75),
    [anon_sym_refine] = ACTIONS(75),
    [anon_sym_require_DASHinstance] = ACTIONS(75),
    [anon_sym_revision] = ACTIONS(75),
    [anon_sym_revision_DASHdate] = ACTIONS(75),
    [anon_sym_rpc] = ACTIONS(75),
    [anon_sym_status] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_typedef] = ACTIONS(75),
    [anon_sym_unique] = ACTIONS(75),
    [anon_sym_units] = ACTIONS(75),
    [anon_sym_uses] = ACTIONS(75),
    [anon_sym_value] = ACTIONS(75),
    [anon_sym_when] = ACTIONS(75),
    [anon_sym_yin_DASHelement] = ACTIONS(75),
  },
  [13] = {
    [anon_sym_module] = ACTIONS(79),
    [anon_sym_submodule] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_yang_DASHversion] = ACTIONS(79),
    [anon_sym_enum] = ACTIONS(79),
    [anon_sym_range] = ACTIONS(79),
    [anon_sym_length] = ACTIONS(79),
    [sym_extension_keyword] = ACTIONS(81),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(79),
    [anon_sym_anydata] = ACTIONS(79),
    [anon_sym_anyxml] = ACTIONS(79),
    [anon_sym_argument] = ACTIONS(79),
    [anon_sym_augment] = ACTIONS(79),
    [anon_sym_base] = ACTIONS(79),
    [anon_sym_belongs_DASHto] = ACTIONS(79),
    [anon_sym_bit] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_choice] = ACTIONS(79),
    [anon_sym_config] = ACTIONS(79),
    [anon_sym_contact] = ACTIONS(79),
    [anon_sym_container] = ACTIONS(79),
    [anon_sym_default] = ACTIONS(79),
    [anon_sym_description] = ACTIONS(79),
    [anon_sym_deviate] = ACTIONS(79),
    [anon_sym_deviation] = ACTIONS(79),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(79),
    [anon_sym_error_DASHmessage] = ACTIONS(79),
    [anon_sym_extension] = ACTIONS(79),
    [anon_sym_feature] = ACTIONS(79),
    [anon_sym_fraction_DASHdigits] = ACTIONS(79),
    [anon_sym_grouping] = ACTIONS(79),
    [anon_sym_identity] = ACTIONS(79),
    [anon_sym_if_DASHfeature] = ACTIONS(79),
    [anon_sym_import] = ACTIONS(79),
    [anon_sym_include] = ACTIONS(79),
    [anon_sym_input] = ACTIONS(79),
    [anon_sym_key] = ACTIONS(79),
    [anon_sym_leaf] = ACTIONS(79),
    [anon_sym_leaf_DASHlist] = ACTIONS(79),
    [anon_sym_list] = ACTIONS(79),
    [anon_sym_mandatory] = ACTIONS(79),
    [anon_sym_max_DASHelements] = ACTIONS(79),
    [anon_sym_min_DASHelements] = ACTIONS(79),
    [anon_sym_modifier] = ACTIONS(79),
    [anon_sym_must] = ACTIONS(79),
    [anon_sym_namespace] = ACTIONS(79),
    [anon_sym_notification] = ACTIONS(79),
    [anon_sym_ordered_DASHby] = ACTIONS(79),
    [anon_sym_organization] = ACTIONS(79),
    [anon_sym_output] = ACTIONS(79),
    [anon_sym_path] = ACTIONS(79),
    [anon_sym_pattern] = ACTIONS(79),
    [anon_sym_position] = ACTIONS(79),
    [anon_sym_prefix] = ACTIONS(79),
    [anon_sym_presence] = ACTIONS(79),
    [anon_sym_reference] = ACTIONS(79),
    [anon_sym_refine] = ACTIONS(79),
    [anon_sym_require_DASHinstance] = ACTIONS(79),
    [anon_sym_revision] = ACTIONS(79),
    [anon_sym_revision_DASHdate] = ACTIONS(79),
    [anon_sym_rpc] = ACTIONS(79),
    [anon_sym_status] = ACTIONS(79),
    [anon_sym_type] = ACTIONS(79),
    [anon_sym_typedef] = ACTIONS(79),
    [anon_sym_unique] = ACTIONS(79),
    [anon_sym_units] = ACTIONS(79),
    [anon_sym_uses] = ACTIONS(79),
    [anon_sym_value] = ACTIONS(79),
    [anon_sym_when] = ACTIONS(79),
    [anon_sym_yin_DASHelement] = ACTIONS(79),
  },
  [14] = {
    [anon_sym_module] = ACTIONS(83),
    [anon_sym_submodule] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_yang_DASHversion] = ACTIONS(83),
    [anon_sym_enum] = ACTIONS(83),
    [anon_sym_range] = ACTIONS(83),
    [anon_sym_length] = ACTIONS(83),
    [sym_extension_keyword] = ACTIONS(85),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(83),
    [anon_sym_anydata] = ACTIONS(83),
    [anon_sym_anyxml] = ACTIONS(83),
    [anon_sym_argument] = ACTIONS(83),
    [anon_sym_augment] = ACTIONS(83),
    [anon_sym_base] = ACTIONS(83),
    [anon_sym_belongs_DASHto] = ACTIONS(83),
    [anon_sym_bit] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_choice] = ACTIONS(83),
    [anon_sym_config] = ACTIONS(83),
    [anon_sym_contact] = ACTIONS(83),
    [anon_sym_container] = ACTIONS(83),
    [anon_sym_default] = ACTIONS(83),
    [anon_sym_description] = ACTIONS(83),
    [anon_sym_deviate] = ACTIONS(83),
    [anon_sym_deviation] = ACTIONS(83),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(83),
    [anon_sym_error_DASHmessage] = ACTIONS(83),
    [anon_sym_extension] = ACTIONS(83),
    [anon_sym_feature] = ACTIONS(83),
    [anon_sym_fraction_DASHdigits] = ACTIONS(83),
    [anon_sym_grouping] = ACTIONS(83),
    [anon_sym_identity] = ACTIONS(83),
    [anon_sym_if_DASHfeature] = ACTIONS(83),
    [anon_sym_import] = ACTIONS(83),
    [anon_sym_include] = ACTIONS(83),
    [anon_sym_input] = ACTIONS(83),
    [anon_sym_key] = ACTIONS(83),
    [anon_sym_leaf] = ACTIONS(83),
    [anon_sym_leaf_DASHlist] = ACTIONS(83),
    [anon_sym_list] = ACTIONS(83),
    [anon_sym_mandatory] = ACTIONS(83),
    [anon_sym_max_DASHelements] = ACTIONS(83),
    [anon_sym_min_DASHelements] = ACTIONS(83),
    [anon_sym_modifier] = ACTIONS(83),
    [anon_sym_must] = ACTIONS(83),
    [anon_sym_namespace] = ACTIONS(83),
    [anon_sym_notification] = ACTIONS(83),
    [anon_sym_ordered_DASHby] = ACTIONS(83),
    [anon_sym_organization] = ACTIONS(83),
    [anon_sym_output] = ACTIONS(83),
    [anon_sym_path] = ACTIONS(83),
    [anon_sym_pattern] = ACTIONS(83),
    [anon_sym_position] = ACTIONS(83),
    [anon_sym_prefix] = ACTIONS(83),
    [anon_sym_presence] = ACTIONS(83),
    [anon_sym_reference] = ACTIONS(83),
    [anon_sym_refine] = ACTIONS(83),
    [anon_sym_require_DASHinstance] = ACTIONS(83),
    [anon_sym_revision] = ACTIONS(83),
    [anon_sym_revision_DASHdate] = ACTIONS(83),
    [anon_sym_rpc] = ACTIONS(83),
    [anon_sym_status] = ACTIONS(83),
    [anon_sym_type] = ACTIONS(83),
    [anon_sym_typedef] = ACTIONS(83),
    [anon_sym_unique] = ACTIONS(83),
    [anon_sym_units] = ACTIONS(83),
    [anon_sym_uses] = ACTIONS(83),
    [anon_sym_value] = ACTIONS(83),
    [anon_sym_when] = ACTIONS(83),
    [anon_sym_yin_DASHelement] = ACTIONS(83),
  },
  [15] = {
    [anon_sym_module] = ACTIONS(87),
    [anon_sym_submodule] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_yang_DASHversion] = ACTIONS(87),
    [anon_sym_enum] = ACTIONS(87),
    [anon_sym_range] = ACTIONS(87),
    [anon_sym_length] = ACTIONS(87),
    [sym_extension_keyword] = ACTIONS(89),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(87),
    [anon_sym_anydata] = ACTIONS(87),
    [anon_sym_anyxml] = ACTIONS(87),
    [anon_sym_argument] = ACTIONS(87),
    [anon_sym_augment] = ACTIONS(87),
    [anon_sym_base] = ACTIONS(87),
    [anon_sym_belongs_DASHto] = ACTIONS(87),
    [anon_sym_bit] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(87),
    [anon_sym_choice] = ACTIONS(87),
    [anon_sym_config] = ACTIONS(87),
    [anon_sym_contact] = ACTIONS(87),
    [anon_sym_container] = ACTIONS(87),
    [anon_sym_default] = ACTIONS(87),
    [anon_sym_description] = ACTIONS(87),
    [anon_sym_deviate] = ACTIONS(87),
    [anon_sym_deviation] = ACTIONS(87),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(87),
    [anon_sym_error_DASHmessage] = ACTIONS(87),
    [anon_sym_extension] = ACTIONS(87),
    [anon_sym_feature] = ACTIONS(87),
    [anon_sym_fraction_DASHdigits] = ACTIONS(87),
    [anon_sym_grouping] = ACTIONS(87),
    [anon_sym_identity] = ACTIONS(87),
    [anon_sym_if_DASHfeature] = ACTIONS(87),
    [anon_sym_import] = ACTIONS(87),
    [anon_sym_include] = ACTIONS(87),
    [anon_sym_input] = ACTIONS(87),
    [anon_sym_key] = ACTIONS(87),
    [anon_sym_leaf] = ACTIONS(87),
    [anon_sym_leaf_DASHlist] = ACTIONS(87),
    [anon_sym_list] = ACTIONS(87),
    [anon_sym_mandatory] = ACTIONS(87),
    [anon_sym_max_DASHelements] = ACTIONS(87),
    [anon_sym_min_DASHelements] = ACTIONS(87),
    [anon_sym_modifier] = ACTIONS(87),
    [anon_sym_must] = ACTIONS(87),
    [anon_sym_namespace] = ACTIONS(87),
    [anon_sym_notification] = ACTIONS(87),
    [anon_sym_ordered_DASHby] = ACTIONS(87),
    [anon_sym_organization] = ACTIONS(87),
    [anon_sym_output] = ACTIONS(87),
    [anon_sym_path] = ACTIONS(87),
    [anon_sym_pattern] = ACTIONS(87),
    [anon_sym_position] = ACTIONS(87),
    [anon_sym_prefix] = ACTIONS(87),
    [anon_sym_presence] = ACTIONS(87),
    [anon_sym_reference] = ACTIONS(87),
    [anon_sym_refine] = ACTIONS(87),
    [anon_sym_require_DASHinstance] = ACTIONS(87),
    [anon_sym_revision] = ACTIONS(87),
    [anon_sym_revision_DASHdate] = ACTIONS(87),
    [anon_sym_rpc] = ACTIONS(87),
    [anon_sym_status] = ACTIONS(87),
    [anon_sym_type] = ACTIONS(87),
    [anon_sym_typedef] = ACTIONS(87),
    [anon_sym_unique] = ACTIONS(87),
    [anon_sym_units] = ACTIONS(87),
    [anon_sym_uses] = ACTIONS(87),
    [anon_sym_value] = ACTIONS(87),
    [anon_sym_when] = ACTIONS(87),
    [anon_sym_yin_DASHelement] = ACTIONS(87),
  },
  [16] = {
    [anon_sym_module] = ACTIONS(91),
    [anon_sym_submodule] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_yang_DASHversion] = ACTIONS(91),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_range] = ACTIONS(91),
    [anon_sym_length] = ACTIONS(91),
    [sym_extension_keyword] = ACTIONS(93),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(91),
    [anon_sym_anydata] = ACTIONS(91),
    [anon_sym_anyxml] = ACTIONS(91),
    [anon_sym_argument] = ACTIONS(91),
    [anon_sym_augment] = ACTIONS(91),
    [anon_sym_base] = ACTIONS(91),
    [anon_sym_belongs_DASHto] = ACTIONS(91),
    [anon_sym_bit] = ACTIONS(91),
    [anon_sym_case] = ACTIONS(91),
    [anon_sym_choice] = ACTIONS(91),
    [anon_sym_config] = ACTIONS(91),
    [anon_sym_contact] = ACTIONS(91),
    [anon_sym_container] = ACTIONS(91),
    [anon_sym_default] = ACTIONS(91),
    [anon_sym_description] = ACTIONS(91),
    [anon_sym_deviate] = ACTIONS(91),
    [anon_sym_deviation] = ACTIONS(91),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(91),
    [anon_sym_error_DASHmessage] = ACTIONS(91),
    [anon_sym_extension] = ACTIONS(91),
    [anon_sym_feature] = ACTIONS(91),
    [anon_sym_fraction_DASHdigits] = ACTIONS(91),
    [anon_sym_grouping] = ACTIONS(91),
    [anon_sym_identity] = ACTIONS(91),
    [anon_sym_if_DASHfeature] = ACTIONS(91),
    [anon_sym_import] = ACTIONS(91),
    [anon_sym_include] = ACTIONS(91),
    [anon_sym_input] = ACTIONS(91),
    [anon_sym_key] = ACTIONS(91),
    [anon_sym_leaf] = ACTIONS(91),
    [anon_sym_leaf_DASHlist] = ACTIONS(91),
    [anon_sym_list] = ACTIONS(91),
    [anon_sym_mandatory] = ACTIONS(91),
    [anon_sym_max_DASHelements] = ACTIONS(91),
    [anon_sym_min_DASHelements] = ACTIONS(91),
    [anon_sym_modifier] = ACTIONS(91),
    [anon_sym_must] = ACTIONS(91),
    [anon_sym_namespace] = ACTIONS(91),
    [anon_sym_notification] = ACTIONS(91),
    [anon_sym_ordered_DASHby] = ACTIONS(91),
    [anon_sym_organization] = ACTIONS(91),
    [anon_sym_output] = ACTIONS(91),
    [anon_sym_path] = ACTIONS(91),
    [anon_sym_pattern] = ACTIONS(91),
    [anon_sym_position] = ACTIONS(91),
    [anon_sym_prefix] = ACTIONS(91),
    [anon_sym_presence] = ACTIONS(91),
    [anon_sym_reference] = ACTIONS(91),
    [anon_sym_refine] = ACTIONS(91),
    [anon_sym_require_DASHinstance] = ACTIONS(91),
    [anon_sym_revision] = ACTIONS(91),
    [anon_sym_revision_DASHdate] = ACTIONS(91),
    [anon_sym_rpc] = ACTIONS(91),
    [anon_sym_status] = ACTIONS(91),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_typedef] = ACTIONS(91),
    [anon_sym_unique] = ACTIONS(91),
    [anon_sym_units] = ACTIONS(91),
    [anon_sym_uses] = ACTIONS(91),
    [anon_sym_value] = ACTIONS(91),
    [anon_sym_when] = ACTIONS(91),
    [anon_sym_yin_DASHelement] = ACTIONS(91),
  },
  [17] = {
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_submodule] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_yang_DASHversion] = ACTIONS(95),
    [anon_sym_enum] = ACTIONS(95),
    [anon_sym_range] = ACTIONS(95),
    [anon_sym_length] = ACTIONS(95),
    [sym_extension_keyword] = ACTIONS(97),
    [sym_comment] = ACTIONS(9),
    [sym__sep] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(95),
    [anon_sym_anydata] = ACTIONS(95),
    [anon_sym_anyxml] = ACTIONS(95),
    [anon_sym_argument] = ACTIONS(95),
    [anon_sym_augment] = ACTIONS(95),
    [anon_sym_base] = ACTIONS(95),
    [anon_sym_belongs_DASHto] = ACTIONS(95),
    [anon_sym_bit] = ACTIONS(95),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_choice] = ACTIONS(95),
    [anon_sym_config] = ACTIONS(95),
    [anon_sym_contact] = ACTIONS(95),
    [anon_sym_container] = ACTIONS(95),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_description] = ACTIONS(95),
    [anon_sym_deviate] = ACTIONS(95),
    [anon_sym_deviation] = ACTIONS(95),
    [anon_sym_error_DASHapp_DASHtag] = ACTIONS(95),
    [anon_sym_error_DASHmessage] = ACTIONS(95),
    [anon_sym_extension] = ACTIONS(95),
    [anon_sym_feature] = ACTIONS(95),
    [anon_sym_fraction_DASHdigits] = ACTIONS(95),
    [anon_sym_grouping] = ACTIONS(95),
    [anon_sym_identity] = ACTIONS(95),
    [anon_sym_if_DASHfeature] = ACTIONS(95),
    [anon_sym_import] = ACTIONS(95),
    [anon_sym_include] = ACTIONS(95),
    [anon_sym_input] = ACTIONS(95),
    [anon_sym_key] = ACTIONS(95),
    [anon_sym_leaf] = ACTIONS(95),
    [anon_sym_leaf_DASHlist] = ACTIONS(95),
    [anon_sym_list] = ACTIONS(95),
    [anon_sym_mandatory] = ACTIONS(95),
    [anon_sym_max_DASHelements] = ACTIONS(95),
    [anon_sym_min_DASHelements] = ACTIONS(95),
    [anon_sym_modifier] = ACTIONS(95),
    [anon_sym_must] = ACTIONS(95),
    [anon_sym_namespace] = ACTIONS(95),
    [anon_sym_notification] = ACTIONS(95),
    [anon_sym_ordered_DASHby] = ACTIONS(95),
    [anon_sym_organization] = ACTIONS(95),
    [anon_sym_output] = ACTIONS(95),
    [anon_sym_path] = ACTIONS(95),
    [anon_sym_pattern] = ACTIONS(95),
    [anon_sym_position] = ACTIONS(95),
    [anon_sym_prefix] = ACTIONS(95),
    [anon_sym_presence] = ACTIONS(95),
    [anon_sym_reference] = ACTIONS(95),
    [anon_sym_refine] = ACTIONS(95),
    [anon_sym_require_DASHinstance] = ACTIONS(95),
    [anon_sym_revision] = ACTIONS(95),
    [anon_sym_revision_DASHdate] = ACTIONS(95),
    [anon_sym_rpc] = ACTIONS(95),
    [anon_sym_status] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(95),
    [anon_sym_typedef] = ACTIONS(95),
    [anon_sym_unique] = ACTIONS(95),
    [anon_sym_units] = ACTIONS(95),
    [anon_sym_uses] = ACTIONS(95),
    [anon_sym_value] = ACTIONS(95),
    [anon_sym_when] = ACTIONS(95),
    [anon_sym_yin_DASHelement] = ACTIONS(95),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__sep,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__keypath,
    ACTIONS(113), 1,
      sym__unquoted_string,
    STATE(16), 1,
      sym_block,
    STATE(24), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(35), 1,
      sym_string,
    STATE(41), 1,
      sym_argument,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 3,
      sym_node_identifier,
      sym_hex,
      sym_date,
    STATE(44), 6,
      sym_number,
      sym_boolean,
      sym_string_concatenation,
      sym_keypath,
      sym_unquoted_string,
      sym_built_in_type,
    ACTIONS(115), 19,
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
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__keypath,
    ACTIONS(113), 1,
      sym__unquoted_string,
    STATE(15), 1,
      sym_block,
    STATE(24), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(35), 1,
      sym_string,
    STATE(37), 1,
      sym_argument,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 3,
      sym_node_identifier,
      sym_hex,
      sym_date,
    STATE(44), 6,
      sym_number,
      sym_boolean,
      sym_string_concatenation,
      sym_keypath,
      sym_unquoted_string,
      sym_built_in_type,
    ACTIONS(115), 19,
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
  [150] = 8,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      sym__number,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_min,
    STATE(73), 1,
      sym_length_argument,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    STATE(74), 2,
      sym_unquoted_range,
      sym_quoted_range,
    STATE(72), 3,
      sym_number,
      sym_string,
      sym_range,
  [179] = 6,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_range_argument,
    STATE(66), 1,
      sym_range,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(121), 2,
      sym__number,
      anon_sym_min,
    STATE(74), 2,
      sym_unquoted_range,
      sym_quoted_range,
  [201] = 6,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(131), 1,
      sym__escape_sequence,
    STATE(30), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(125), 2,
      sym__number,
      anon_sym_min,
  [222] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym__sep,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym__unquoted_string,
    STATE(38), 1,
      sym_enum_argument,
    STATE(56), 1,
      sym_string,
  [244] = 5,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(43), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [261] = 5,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(46), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [278] = 5,
    ACTIONS(137), 1,
      anon_sym_1,
    ACTIONS(139), 1,
      anon_sym_1_DOT1,
    STATE(63), 1,
      sym_yang_version,
    STATE(64), 1,
      sym_yang_version_argument,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [295] = 5,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(146), 1,
      sym__escape_sequence,
    STATE(27), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [312] = 4,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(151), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [327] = 4,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(156), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [342] = 5,
    ACTIONS(131), 1,
      sym__escape_sequence,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      sym__unescaped_double_string_fragment,
    STATE(27), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [359] = 4,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(160), 2,
      sym__unescaped_single_string_fragment,
      sym__escape_sequence,
  [374] = 5,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(131), 1,
      sym__escape_sequence,
    STATE(30), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
  [391] = 5,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      aux_sym_string_concatenation_repeat1,
    STATE(77), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [408] = 5,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(47), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [425] = 3,
    ACTIONS(172), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(170), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [437] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(174), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [447] = 4,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    STATE(11), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [461] = 4,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [475] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sep,
    ACTIONS(180), 3,
      anon_sym_DQUOTE,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [485] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(182), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [495] = 4,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [509] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      sym__sep,
    STATE(9), 1,
      sym_block,
  [525] = 3,
    ACTIONS(172), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(190), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [537] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(170), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [546] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(192), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [555] = 3,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [566] = 3,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [577] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(194), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [586] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(196), 2,
      sym__number,
      anon_sym_max,
  [595] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym__sep,
    STATE(7), 1,
      sym_block,
  [608] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(200), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [617] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(202), 2,
      sym__number,
      anon_sym_min,
  [626] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(204), 2,
      sym__number,
      anon_sym_max,
  [635] = 3,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_DOT_DOT,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [646] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(210), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [655] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(212), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [664] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(214), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [673] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(206), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [682] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
    ACTIONS(216), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [691] = 2,
    ACTIONS(208), 1,
      anon_sym_DOT_DOT,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [699] = 2,
    ACTIONS(218), 1,
      anon_sym_DOT_DOT,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [707] = 2,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [715] = 2,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [723] = 2,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [731] = 2,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [739] = 2,
    ACTIONS(228), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [747] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_LBRACE,
      sym__sep,
  [755] = 2,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [763] = 2,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [771] = 2,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [779] = 2,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [787] = 2,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [795] = 2,
    ACTIONS(242), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [803] = 2,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [811] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [819] = 2,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [827] = 2,
    ACTIONS(172), 1,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
  [835] = 2,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__sep,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 75,
  [SMALL_STATE(20)] = 150,
  [SMALL_STATE(21)] = 179,
  [SMALL_STATE(22)] = 201,
  [SMALL_STATE(23)] = 222,
  [SMALL_STATE(24)] = 244,
  [SMALL_STATE(25)] = 261,
  [SMALL_STATE(26)] = 278,
  [SMALL_STATE(27)] = 295,
  [SMALL_STATE(28)] = 312,
  [SMALL_STATE(29)] = 327,
  [SMALL_STATE(30)] = 342,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 374,
  [SMALL_STATE(33)] = 391,
  [SMALL_STATE(34)] = 408,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 437,
  [SMALL_STATE(37)] = 447,
  [SMALL_STATE(38)] = 461,
  [SMALL_STATE(39)] = 475,
  [SMALL_STATE(40)] = 485,
  [SMALL_STATE(41)] = 495,
  [SMALL_STATE(42)] = 509,
  [SMALL_STATE(43)] = 525,
  [SMALL_STATE(44)] = 537,
  [SMALL_STATE(45)] = 546,
  [SMALL_STATE(46)] = 555,
  [SMALL_STATE(47)] = 566,
  [SMALL_STATE(48)] = 577,
  [SMALL_STATE(49)] = 586,
  [SMALL_STATE(50)] = 595,
  [SMALL_STATE(51)] = 608,
  [SMALL_STATE(52)] = 617,
  [SMALL_STATE(53)] = 626,
  [SMALL_STATE(54)] = 635,
  [SMALL_STATE(55)] = 646,
  [SMALL_STATE(56)] = 655,
  [SMALL_STATE(57)] = 664,
  [SMALL_STATE(58)] = 673,
  [SMALL_STATE(59)] = 682,
  [SMALL_STATE(60)] = 691,
  [SMALL_STATE(61)] = 699,
  [SMALL_STATE(62)] = 707,
  [SMALL_STATE(63)] = 715,
  [SMALL_STATE(64)] = 723,
  [SMALL_STATE(65)] = 731,
  [SMALL_STATE(66)] = 739,
  [SMALL_STATE(67)] = 747,
  [SMALL_STATE(68)] = 755,
  [SMALL_STATE(69)] = 763,
  [SMALL_STATE(70)] = 771,
  [SMALL_STATE(71)] = 779,
  [SMALL_STATE(72)] = 787,
  [SMALL_STATE(73)] = 795,
  [SMALL_STATE(74)] = 803,
  [SMALL_STATE(75)] = 811,
  [SMALL_STATE(76)] = 819,
  [SMALL_STATE(77)] = 827,
  [SMALL_STATE(78)] = 835,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__yang_version_statement, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__yang_version_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_statement, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_statement, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_statement, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_statement, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__length_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__length_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension_statement, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension_statement, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__generic_statement, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_statement, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(27),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(39),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2), SHIFT_REPEAT(32),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2), SHIFT_REPEAT(31),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concatenation, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_concatenation_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_built_in_type, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keypath, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_argument, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_argument, 1, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang_version_argument, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang_version, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_argument, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_keyword, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 3, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_range, 3, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length_argument, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yang, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_range, 5, .production_id = 6),
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
