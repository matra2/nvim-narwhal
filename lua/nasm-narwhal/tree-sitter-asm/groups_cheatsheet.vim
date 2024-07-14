
" nvim-treesitter/nvim-treesitter {{{
call sonokai#highlight('TSStrong', s:palette.none, s:palette.none, 'bold')
call sonokai#highlight('TSEmphasis', s:palette.none, s:palette.none, 'italic')
call sonokai#highlight('TSUnderline', s:palette.none, s:palette.none, 'underline')
call sonokai#highlight('TSNote', s:palette.bg0, s:palette.green, 'bold')
call sonokai#highlight('TSWarning', s:palette.bg0, s:palette.yellow, 'bold')
call sonokai#highlight('TSDanger', s:palette.bg0, s:palette.red, 'bold')
highlight! link TSAnnotation BlueItalic
highlight! link TSAttribute BlueItalic
highlight! link TSBoolean Purple
highlight! link TSCharacter Yellow
highlight! link TSCharacterSpecial SpecialChar
highlight! link TSComment Comment
highlight! link TSConditional Red
highlight! link TSConstBuiltin PurpleItalic
highlight! link TSConstMacro PurpleItalic
highlight! link TSConstant Fg
highlight! link TSConstructor Green
highlight! link TSDebug Debug
highlight! link TSDefine Define
highlight! link TSEnvironment Macro
highlight! link TSEnvironmentName Type
highlight! link TSError Error
highlight! link TSException Red
highlight! link TSField Orange
highlight! link TSFloat Purple
highlight! link TSFuncBuiltin Green
highlight! link TSFuncMacro Green
highlight! link TSFunction Green
highlight! link TSFunctionCall Green
highlight! link TSInclude Red
highlight! link TSKeyword Red
highlight! link TSKeywordFunction Red
highlight! link TSKeywordOperator Red
highlight! link TSKeywordReturn Red
highlight! link TSLabel Red
highlight! link TSLiteral String
highlight! link TSMath Yellow
highlight! link TSMethod Green
highlight! link TSMethodCall Green
highlight! link TSNamespace BlueItalic
highlight! link TSNone Fg
highlight! link TSNumber Purple
highlight! link TSOperator Red
highlight! link TSParameter Fg
highlight! link TSParameterReference Fg
highlight! link TSPreProc PreProc
highlight! link TSProperty Orange
highlight! link TSPunctBracket Grey
highlight! link TSPunctDelimiter Grey
highlight! link TSPunctSpecial Yellow
highlight! link TSRepeat Red
highlight! link TSStorageClass Red
highlight! link TSStorageClassLifetime Red
highlight! link TSStrike Grey
highlight! link TSString Yellow
highlight! link TSStringEscape Green
highlight! link TSStringRegex Green
highlight! link TSStringSpecial SpecialChar
highlight! link TSSymbol Fg
highlight! link TSTag BlueItalic
highlight! link TSTagAttribute Green
highlight! link TSTagDelimiter Red
highlight! link TSText Green
highlight! link TSTextReference Constant
highlight! link TSTitle Title
highlight! link TSTodo Todo
highlight! link TSType BlueItalic
highlight! link TSTypeBuiltin BlueItalic
highlight! link TSTypeDefinition BlueItalic
highlight! link TSTypeQualifier Red
call sonokai#highlight('TSURI', s:palette.blue, s:palette.none, 'underline')
highlight! link TSVariable Fg
highlight! link TSVariableBuiltin PurpleItalic
if has('nvim-0.8')
  highlight! link @annotation TSAnnotation
  highlight! link @attribute TSAttribute
  highlight! link @boolean TSBoolean
  highlight! link @character TSCharacter
  highlight! link @character.special TSCharacterSpecial
  highlight! link @comment TSComment
  highlight! link @comment.error TSDanger
  highlight! link @comment.note TSNote
  highlight! link @comment.todo TSTodo
  highlight! link @comment.warning TSWarning
  highlight! link @conceal Grey
  highlight! link @conditional TSConditional
  highlight! link @constant TSConstant
  highlight! link @constant.builtin TSConstBuiltin
  highlight! link @constant.macro TSConstMacro
  highlight! link @constructor TSConstructor
  highlight! link @debug TSDebug
  highlight! link @define TSDefine
  highlight! link @diff.delta diffChanged
  highlight! link @diff.minus diffRemoved
  highlight! link @diff.plus diffAdded
  highlight! link @error TSError " This has been removed from nvim-treesitter
  highlight! link @exception TSException
  highlight! link @field TSField
  highlight! link @float TSFloat
  highlight! link @function TSFunction
  highlight! link @function.builtin TSFuncBuiltin
  highlight! link @function.call TSFunctionCall
  highlight! link @function.macro TSFuncMacro
  highlight! link @function.method TSMethod
  highlight! link @function.method.call TSMethodCall
  highlight! link @include TSInclude
  highlight! link @keyword TSKeyword
  highlight! link @keyword.conditional TSConditional
  highlight! link @keyword.debug TSDebug
  highlight! link @keyword.directive TSPreProc
  highlight! link @keyword.directive.define TSDefine
  highlight! link @keyword.exception TSException
  highlight! link @keyword.function TSKeywordFunction
  highlight! link @keyword.import TSInclude
  highlight! link @keyword.operator TSKeywordOperator
  highlight! link @keyword.repeat TSRepeat
  highlight! link @keyword.return TSKeywordReturn
  highlight! link @keyword.storage TSStorageClass
  highlight! link @label TSLabel
  highlight! link @markup.emphasis TSEmphasis
  highlight! link @markup.environment TSEnvironment
  highlight! link @markup.environment.name TSEnvironmentName
  highlight! link @markup.heading TSTitle
  highlight! link @markup.link TSTextReference
  highlight! link @markup.link.label TSStringSpecial
  highlight! link @markup.link.url TSURI
  highlight! link @markup.list TSPunctSpecial
  highlight! link @markup.list.checked Green
  highlight! link @markup.list.unchecked Ignore
  highlight! link @markup.math TSMath
  highlight! link @markup.note TSNote
  highlight! link @markup.quote Grey
  highlight! link @markup.raw TSLiteral
  highlight! link @markup.strike TSStrike
  highlight! link @markup.strong TSStrong
  highlight! link @markup.underline TSUnderline
  highlight! link @math TSMath
  highlight! link @method TSMethod
  highlight! link @method.call TSMethodCall
  highlight! link @module TSNamespace
  highlight! link @namespace TSNamespace
  highlight! link @none TSNone
  highlight! link @number TSNumber
  highlight! link @number.float TSFloat
  highlight! link @operator TSOperator
  highlight! link @parameter TSParameter
  highlight! link @parameter.reference TSParameterReference
  highlight! link @preproc TSPreProc
  highlight! link @property TSProperty
  highlight! link @punctuation.bracket TSPunctBracket
  highlight! link @punctuation.delimiter TSPunctDelimiter
  highlight! link @punctuation.special TSPunctSpecial
  highlight! link @repeat TSRepeat
  highlight! link @storageclass TSStorageClass
  highlight! link @storageclass.lifetime TSStorageClassLifetime
  highlight! link @strike TSStrike
  highlight! link @string TSString
  highlight! link @string.escape TSStringEscape
  highlight! link @string.regex TSStringRegex
  highlight! link @string.regexp TSStringRegex
  highlight! link @string.special TSStringSpecial
  highlight! link @string.special.symbol TSSymbol
  highlight! link @string.special.uri TSURI
  highlight! link @symbol TSSymbol
  highlight! link @tag TSTag
  highlight! link @tag.attribute TSTagAttribute
  highlight! link @tag.delimiter TSTagDelimiter
  highlight! link @text TSText
  highlight! link @text.danger TSDanger
  highlight! link @text.diff.add diffAdded
  highlight! link @text.diff.delete diffRemoved
  highlight! link @text.emphasis TSEmphasis
  highlight! link @text.environment TSEnvironment
  highlight! link @text.environment.name TSEnvironmentName
  highlight! link @text.literal TSLiteral
  highlight! link @text.math TSMath
  highlight! link @text.note TSNote
  highlight! link @text.reference TSTextReference
  highlight! link @text.strike TSStrike
  highlight! link @text.strong TSStrong
  highlight! link @text.title TSTitle
  highlight! link @text.todo TSTodo
  highlight! link @text.todo.checked Green
  highlight! link @text.todo.unchecked Ignore
  highlight! link @text.underline TSUnderline
  highlight! link @text.uri TSURI
  highlight! link @text.warning TSWarning
  highlight! link @todo TSTodo
  highlight! link @type TSType
  highlight! link @type.builtin TSTypeBuiltin
  highlight! link @type.definition TSTypeDefinition
  highlight! link @type.qualifier TSTypeQualifier
  highlight! link @uri TSURI
  highlight! link @variable TSVariable
  highlight! link @variable.builtin TSVariableBuiltin
  highlight! link @variable.member TSField
  highlight! link @variable.parameter TSParameter
endif
if has('nvim-0.9')
  highlight! link @lsp.type.class TSType
  highlight! link @lsp.type.comment TSComment
  highlight! link @lsp.type.decorator TSFunction
  highlight! link @lsp.type.enum TSType
  highlight! link @lsp.type.enumMember TSProperty
  highlight! link @lsp.type.events TSLabel
  highlight! link @lsp.type.function TSFunction
  highlight! link @lsp.type.interface TSType
  highlight! link @lsp.type.keyword TSKeyword
  highlight! link @lsp.type.macro TSConstMacro
  highlight! link @lsp.type.method TSMethod
  highlight! link @lsp.type.modifier TSTypeQualifier
  highlight! link @lsp.type.namespace TSNamespace
  highlight! link @lsp.type.number TSNumber
  highlight! link @lsp.type.operator TSOperator
  highlight! link @lsp.type.parameter TSParameter
  highlight! link @lsp.type.property TSProperty
  highlight! link @lsp.type.regexp TSStringRegex
  highlight! link @lsp.type.string TSString
  highlight! link @lsp.type.struct TSType
  highlight! link @lsp.type.type TSType
  highlight! link @lsp.type.typeParameter TSTypeDefinition
  highlight! link @lsp.type.variable TSVariable
  call sonokai#highlight('DiagnosticUnnecessary', s:palette.grey, s:palette.none)
endif
highlight! link TSModuleInfoGood Green
highlight! link TSModuleInfoBad Red
" }}}
