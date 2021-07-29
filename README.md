# Tree-sitter parser for YANG 1.1

Tree-sitter parser implementation for YANG, a data modeling language used to
model configuration data, state data, Remote Procedure Calls and notifications
for network management protocols.

https://datatracker.ietf.org/doc/html/rfc7950

## TODO

- [x] Implement strings properly (Done: https://github.com/Hubro/tree-sitter-yang/pull/3)
  
  Currently the string parsing is just copied from [the Javascript grammar][javascript-grammar-string] and slightly modified to hide escape sequences in single quoted strings.
  
  Strings are well documented in the YANG RFC and should be properly implemented in the grammar:
  
  https://datatracker.ietf.org/doc/html/rfc7950#section-6.1.3
  
[javascript-grammar-string]: https://github.com/tree-sitter/tree-sitter-javascript/blob/2c5b138ea488259dbf11a34595042eb261965259/grammar.js#L865

- [ ] Support quoted keypaths

  Parsing keypaths currently works well, but quoted keypaths are currently parsed as strings.
  
  It should be possible to parse quoted keypaths by creating a custom statement symbol for the keywords that expect keypaths (like `augment`, `leafref` and so on.)
