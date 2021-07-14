
const identifier = /[a-zA-Z_][a-zA-Z0-9-_.]*/;

const node_identifier = () => seq(
    optional(seq(identifier, token.immediate(":"))),
    identifier
);

const relative_keypath = () => seq(node_identifier(), absolute_keypath());
const absolute_keypath = () => repeat1(seq('/', node_identifier()));

module.exports = grammar({
    name: "yang",

    word: $ => $.identifier,

    extras: $ => [
        /\s+/,
        $.comment,
    ],

    rules: {
        yang: $ => choice(
            $.module,
            $.submodule,
        ),

        module: $ => seq(
            'module',
            field('module_name', $.identifier),
            field('module_block', $.block),
        ),

        submodule: $ => seq(
            'submodule',
            field('submodule_name', $.identifier),
            field('submodule_block', $.block),
        ),

        block: $ => seq(
            '{',
            repeat($.statement),
            '}',
        ),

        statement: $ => seq(
            $.statement_keyword,
            $._sep,
            $.value,
            choice(
                $._stmtend,
                $.block,
            )
        ),

        value: $ => choice(
            $.built_in_type,
            $.identifier,
            $.string,
            $.date,
            $.keypath,
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9-_.]*/,

        string: $ => seq(
            '"',
            /[^"]*/,
            '"',
        ),

        date: $ => /\d{4}-\d{2}-\d{2}/,

        keypath: $ => token(
            choice(
                absolute_keypath(),
                relative_keypath(),
            )
        ),

        // Copied from "tree-sitter-javascript":
        //
        // https://github.com/tree-sitter/tree-sitter-javascript/blob/2c5b138ea488259dbf11a34595042eb261965259/grammar.js#L907
        //
        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),

        /*
         * Misc
         */

        _sep: $ => /\s+/,      // Separator
        _stmtend: $ => ';',    // End of statement

        built_in_type: $ => choice(
            'binary',
            'bits',
            'boolean',
            'decimal64',
            'empty',
            'enumeration',
            'identityref',
            'instance-identifier',
            'int8',
            'int16',
            'int32',
            'int64',
            'leafref',
            'string',
            'uint8',
            'uint16',
            'uint32',
            'uint64',
            'union',
        ),

        statement_keyword: $ => choice(
            'action',
            'anydata',
            'anyxml',
            'argument',
            'augment',
            'base',
            'belongs-to',
            'bit',
            'case',
            'choice',
            'config',
            'contact',
            'container',
            'default',
            'description',
            'deviate',
            'deviation',
            'enum',
            'error-app-tag',
            'error-message',
            'extension',
            'feature',
            'fraction-digits',
            'grouping',
            'identity',
            'if-feature',
            'import',
            'include',
            'input',
            'key',
            'leaf',
            'leaf-list',
            'length',
            'list',
            'mandatory',
            'max-elements',
            'min-elements',
            'modifier',
            'module',
            'must',
            'namespace',
            'notification',
            'ordered-by',
            'organization',
            'output',
            'path',
            'pattern',
            'position',
            'prefix',
            'presence',
            'range',
            'reference',
            'refine',
            'require-instance',
            'revision',
            'revision-date',
            'rpc',
            'status',
            'submodule',
            'type',
            'typedef',
            'unique',
            'units',
            'uses',
            'value',
            'when',
            'yang-version',
            'yin-element',
        )
    },
});
