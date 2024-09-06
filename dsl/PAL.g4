grammar PAL;

PAL_COMMENT:                  '//' ~[\r\n]* -> skip;

PAL_WS:                       [ \n\t\r]+ -> channel(HIDDEN);

fragment
PAL_NAMECHAR
  :   PAL_NAMEFIRSTCHAR
  |   '0'..'9'
  |   '_'
  |   '\u00B7'
  |   '\u0300'..'\u036F'
  |   '\u203F'..'\u2040'
  ;

fragment
PAL_NAMEFIRSTCHAR
  :   'A'..'Z'
  |   'a'..'z'
  |   '\u00C0'..'\u00D6'
  |   '\u00D8'..'\u00F6'
  |   '\u00F8'..'\u02FF'
  |   '\u0370'..'\u037D'
  |   '\u037F'..'\u1FFF'
  |   '\u200C'..'\u200D'
  |   '\u2070'..'\u218F'
  |   '\u2C00'..'\u2FEF'
  |   '\u3001'..'\uD7FF'
  |   '\uF900'..'\uFDCF'
  |   '\uFDF0'..'\uFFFD'
  ; // ignores | ['\u10000-'\uEFFFF];

fragment
PAL_DIGIT:                    [0-9];

PAL_QUOTED_STRING:            '"' (~["])* '"';

PAL_INT:                      PAL_DIGIT+;

PAL_CLICK:                    'click';
PAL_MOVE:                     'move';
PAL_SCROLL:                   'scroll';
PAL_PASTE:                    'paste';
PAL_ENTER:                    'enter';
PAL_SAVE:                     'save';
PAL_WAIT:                     'wait';
PAL_PLUGIN:                   'plugin';
PAL_AT:                       '@';
PAL_TO:                       '%';
PAL_REQUIRED:                 '!';

pal_direction
  :   '+'
  |   '-'
  |   '<'
  |   '>'
  ;

pal_timeunit
  :   's'
  |   'm'
  ;

pal_target
  :   PAL_AT path=PAL_QUOTED_STRING? PAL_REQUIRED? '(' x=PAL_INT ',' y=PAL_INT ')'
  ;

pal_click
  :   PAL_CLICK pal_target found=PAL_QUOTED_STRING? PAL_REQUIRED?
  ;

pal_scroll
  :   PAL_SCROLL pal_direction? offset=PAL_INT (PAL_AT found=PAL_QUOTED_STRING)?
  ;  

pal_move
  :   PAL_MOVE pal_target
  ;

pal_enter
  :   PAL_ENTER
  ;  

pal_paste
  :   PAL_PASTE content=PAL_QUOTED_STRING?
  ;

pal_save
  :   PAL_SAVE path=PAL_QUOTED_STRING
  ;

pal_wait
  :   PAL_WAIT duration=PAL_INT pal_timeunit
  ;

pal_plugin
  :   PAL_PLUGIN  
  ;

pal_statement
  :   pal_click
  |   pal_scroll
  |   pal_move
  |   pal_paste
  |   pal_wait
  |   pal_save
  |   pal_enter
  |   pal_plugin
  ;

pal_program
  :   pal_statement*
  ;