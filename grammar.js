
const identifier = /[a-zA-Z_][a-zA-Z0-9-_.]*/;

// A node identifier just refers to the name of a YANG node. Commonly used to
// refer to a custom type or a grouping. A local reference will just be a
// regular identifier. A reference to a different module will have a prefix.
const node_identifier = /([a-zA-Z_][a-zA-Z0-9-_.]*:)?[a-zA-Z_][a-zA-Z0-9-_.]*/;

const prefix = () => seq(identifier, token.immediate(":"))

const relative_keypath = () => seq(node_identifier, absolute_keypath());
const absolute_keypath = () => repeat1(seq('/', node_identifier));

const yang_grammar = grammar({
    name: "yang",

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
            choice(
                $.statement_keyword,
                $.extension_keyword,
            ),
            // A statement can either have
            // - An argument
            // - An argument and a block
            // - Just a block
            choice(
                // An argument
                seq($.argument, ';'),

                // An argument and a block
                seq($.argument, $.block),

                // Just a block
                $.block
            )
        ),

        // Extensions in YANG are just an identifier with a prefix, for example:
        //
        //   tailf:actionpoint
        //
        extension_keyword: $ => seq(prefix(), token.immediate(identifier)),

        argument: $ => choice(
            $.built_in_type,
            $.node_identifier,
            $.string,
            $.date,
            $.keypath
        ),

        identifier: $ => identifier,

        node_identifier: $ => node_identifier,

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

module.exports = yang_grammar
