
// Generated from dsl/PAL.g4 by ANTLR 4.9.3


#include "PALListener.h"

#include "PALParser.h"


using namespace antlrcpp;
using namespace pal;
using namespace antlr4;

PALParser::PALParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PALParser::~PALParser() {
  delete _interpreter;
}

std::string PALParser::getGrammarFileName() const {
  return "PAL.g4";
}

const std::vector<std::string>& PALParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PALParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Pal_directionContext ------------------------------------------------------------------

PALParser::Pal_directionContext::Pal_directionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PALParser::Pal_directionContext::getRuleIndex() const {
  return PALParser::RulePal_direction;
}

void PALParser::Pal_directionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_direction(this);
}

void PALParser::Pal_directionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_direction(this);
}

PALParser::Pal_directionContext* PALParser::pal_direction() {
  Pal_directionContext *_localctx = _tracker.createInstance<Pal_directionContext>(_ctx, getState());
  enterRule(_localctx, 0, PALParser::RulePal_direction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PALParser::T__0)
      | (1ULL << PALParser::T__1)
      | (1ULL << PALParser::T__2)
      | (1ULL << PALParser::T__3))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_timeunitContext ------------------------------------------------------------------

PALParser::Pal_timeunitContext::Pal_timeunitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PALParser::Pal_timeunitContext::getRuleIndex() const {
  return PALParser::RulePal_timeunit;
}

void PALParser::Pal_timeunitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_timeunit(this);
}

void PALParser::Pal_timeunitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_timeunit(this);
}

PALParser::Pal_timeunitContext* PALParser::pal_timeunit() {
  Pal_timeunitContext *_localctx = _tracker.createInstance<Pal_timeunitContext>(_ctx, getState());
  enterRule(_localctx, 2, PALParser::RulePal_timeunit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    _la = _input->LA(1);
    if (!(_la == PALParser::T__4

    || _la == PALParser::T__5)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_targetContext ------------------------------------------------------------------

PALParser::Pal_targetContext::Pal_targetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_targetContext::PAL_AT() {
  return getToken(PALParser::PAL_AT, 0);
}

std::vector<tree::TerminalNode *> PALParser::Pal_targetContext::PAL_INT() {
  return getTokens(PALParser::PAL_INT);
}

tree::TerminalNode* PALParser::Pal_targetContext::PAL_INT(size_t i) {
  return getToken(PALParser::PAL_INT, i);
}

tree::TerminalNode* PALParser::Pal_targetContext::PAL_REQUIRED() {
  return getToken(PALParser::PAL_REQUIRED, 0);
}

tree::TerminalNode* PALParser::Pal_targetContext::PAL_QUOTED_STRING() {
  return getToken(PALParser::PAL_QUOTED_STRING, 0);
}


size_t PALParser::Pal_targetContext::getRuleIndex() const {
  return PALParser::RulePal_target;
}

void PALParser::Pal_targetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_target(this);
}

void PALParser::Pal_targetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_target(this);
}

PALParser::Pal_targetContext* PALParser::pal_target() {
  Pal_targetContext *_localctx = _tracker.createInstance<Pal_targetContext>(_ctx, getState());
  enterRule(_localctx, 4, PALParser::RulePal_target);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(PALParser::PAL_AT);
    setState(32);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PALParser::PAL_QUOTED_STRING) {
      setState(31);
      antlrcpp::downCast<Pal_targetContext *>(_localctx)->path = match(PALParser::PAL_QUOTED_STRING);
    }
    setState(35);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PALParser::PAL_REQUIRED) {
      setState(34);
      match(PALParser::PAL_REQUIRED);
    }
    setState(37);
    match(PALParser::T__6);
    setState(38);
    antlrcpp::downCast<Pal_targetContext *>(_localctx)->x = match(PALParser::PAL_INT);
    setState(39);
    match(PALParser::T__7);
    setState(40);
    antlrcpp::downCast<Pal_targetContext *>(_localctx)->y = match(PALParser::PAL_INT);
    setState(41);
    match(PALParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_clickContext ------------------------------------------------------------------

PALParser::Pal_clickContext::Pal_clickContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_clickContext::PAL_CLICK() {
  return getToken(PALParser::PAL_CLICK, 0);
}

PALParser::Pal_targetContext* PALParser::Pal_clickContext::pal_target() {
  return getRuleContext<PALParser::Pal_targetContext>(0);
}

tree::TerminalNode* PALParser::Pal_clickContext::PAL_REQUIRED() {
  return getToken(PALParser::PAL_REQUIRED, 0);
}

tree::TerminalNode* PALParser::Pal_clickContext::PAL_QUOTED_STRING() {
  return getToken(PALParser::PAL_QUOTED_STRING, 0);
}


size_t PALParser::Pal_clickContext::getRuleIndex() const {
  return PALParser::RulePal_click;
}

void PALParser::Pal_clickContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_click(this);
}

void PALParser::Pal_clickContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_click(this);
}

PALParser::Pal_clickContext* PALParser::pal_click() {
  Pal_clickContext *_localctx = _tracker.createInstance<Pal_clickContext>(_ctx, getState());
  enterRule(_localctx, 6, PALParser::RulePal_click);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(PALParser::PAL_CLICK);
    setState(44);
    pal_target();
    setState(46);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PALParser::PAL_QUOTED_STRING) {
      setState(45);
      antlrcpp::downCast<Pal_clickContext *>(_localctx)->found = match(PALParser::PAL_QUOTED_STRING);
    }
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PALParser::PAL_REQUIRED) {
      setState(48);
      match(PALParser::PAL_REQUIRED);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_scrollContext ------------------------------------------------------------------

PALParser::Pal_scrollContext::Pal_scrollContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_scrollContext::PAL_SCROLL() {
  return getToken(PALParser::PAL_SCROLL, 0);
}

tree::TerminalNode* PALParser::Pal_scrollContext::PAL_INT() {
  return getToken(PALParser::PAL_INT, 0);
}

PALParser::Pal_directionContext* PALParser::Pal_scrollContext::pal_direction() {
  return getRuleContext<PALParser::Pal_directionContext>(0);
}

tree::TerminalNode* PALParser::Pal_scrollContext::PAL_AT() {
  return getToken(PALParser::PAL_AT, 0);
}

tree::TerminalNode* PALParser::Pal_scrollContext::PAL_QUOTED_STRING() {
  return getToken(PALParser::PAL_QUOTED_STRING, 0);
}


size_t PALParser::Pal_scrollContext::getRuleIndex() const {
  return PALParser::RulePal_scroll;
}

void PALParser::Pal_scrollContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_scroll(this);
}

void PALParser::Pal_scrollContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_scroll(this);
}

PALParser::Pal_scrollContext* PALParser::pal_scroll() {
  Pal_scrollContext *_localctx = _tracker.createInstance<Pal_scrollContext>(_ctx, getState());
  enterRule(_localctx, 8, PALParser::RulePal_scroll);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(PALParser::PAL_SCROLL);
    setState(53);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PALParser::T__0)
      | (1ULL << PALParser::T__1)
      | (1ULL << PALParser::T__2)
      | (1ULL << PALParser::T__3))) != 0)) {
      setState(52);
      pal_direction();
    }
    setState(55);
    antlrcpp::downCast<Pal_scrollContext *>(_localctx)->offset = match(PALParser::PAL_INT);
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PALParser::PAL_AT) {
      setState(56);
      match(PALParser::PAL_AT);
      setState(57);
      antlrcpp::downCast<Pal_scrollContext *>(_localctx)->found = match(PALParser::PAL_QUOTED_STRING);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_moveContext ------------------------------------------------------------------

PALParser::Pal_moveContext::Pal_moveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_moveContext::PAL_MOVE() {
  return getToken(PALParser::PAL_MOVE, 0);
}

PALParser::Pal_targetContext* PALParser::Pal_moveContext::pal_target() {
  return getRuleContext<PALParser::Pal_targetContext>(0);
}


size_t PALParser::Pal_moveContext::getRuleIndex() const {
  return PALParser::RulePal_move;
}

void PALParser::Pal_moveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_move(this);
}

void PALParser::Pal_moveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_move(this);
}

PALParser::Pal_moveContext* PALParser::pal_move() {
  Pal_moveContext *_localctx = _tracker.createInstance<Pal_moveContext>(_ctx, getState());
  enterRule(_localctx, 10, PALParser::RulePal_move);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(PALParser::PAL_MOVE);
    setState(61);
    pal_target();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_enterContext ------------------------------------------------------------------

PALParser::Pal_enterContext::Pal_enterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_enterContext::PAL_ENTER() {
  return getToken(PALParser::PAL_ENTER, 0);
}


size_t PALParser::Pal_enterContext::getRuleIndex() const {
  return PALParser::RulePal_enter;
}

void PALParser::Pal_enterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_enter(this);
}

void PALParser::Pal_enterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_enter(this);
}

PALParser::Pal_enterContext* PALParser::pal_enter() {
  Pal_enterContext *_localctx = _tracker.createInstance<Pal_enterContext>(_ctx, getState());
  enterRule(_localctx, 12, PALParser::RulePal_enter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(PALParser::PAL_ENTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_pasteContext ------------------------------------------------------------------

PALParser::Pal_pasteContext::Pal_pasteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_pasteContext::PAL_PASTE() {
  return getToken(PALParser::PAL_PASTE, 0);
}

tree::TerminalNode* PALParser::Pal_pasteContext::PAL_QUOTED_STRING() {
  return getToken(PALParser::PAL_QUOTED_STRING, 0);
}


size_t PALParser::Pal_pasteContext::getRuleIndex() const {
  return PALParser::RulePal_paste;
}

void PALParser::Pal_pasteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_paste(this);
}

void PALParser::Pal_pasteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_paste(this);
}

PALParser::Pal_pasteContext* PALParser::pal_paste() {
  Pal_pasteContext *_localctx = _tracker.createInstance<Pal_pasteContext>(_ctx, getState());
  enterRule(_localctx, 14, PALParser::RulePal_paste);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(PALParser::PAL_PASTE);
    setState(67);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PALParser::PAL_QUOTED_STRING) {
      setState(66);
      antlrcpp::downCast<Pal_pasteContext *>(_localctx)->content = match(PALParser::PAL_QUOTED_STRING);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_saveContext ------------------------------------------------------------------

PALParser::Pal_saveContext::Pal_saveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_saveContext::PAL_SAVE() {
  return getToken(PALParser::PAL_SAVE, 0);
}

tree::TerminalNode* PALParser::Pal_saveContext::PAL_QUOTED_STRING() {
  return getToken(PALParser::PAL_QUOTED_STRING, 0);
}


size_t PALParser::Pal_saveContext::getRuleIndex() const {
  return PALParser::RulePal_save;
}

void PALParser::Pal_saveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_save(this);
}

void PALParser::Pal_saveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_save(this);
}

PALParser::Pal_saveContext* PALParser::pal_save() {
  Pal_saveContext *_localctx = _tracker.createInstance<Pal_saveContext>(_ctx, getState());
  enterRule(_localctx, 16, PALParser::RulePal_save);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(PALParser::PAL_SAVE);
    setState(70);
    antlrcpp::downCast<Pal_saveContext *>(_localctx)->path = match(PALParser::PAL_QUOTED_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_waitContext ------------------------------------------------------------------

PALParser::Pal_waitContext::Pal_waitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_waitContext::PAL_WAIT() {
  return getToken(PALParser::PAL_WAIT, 0);
}

PALParser::Pal_timeunitContext* PALParser::Pal_waitContext::pal_timeunit() {
  return getRuleContext<PALParser::Pal_timeunitContext>(0);
}

tree::TerminalNode* PALParser::Pal_waitContext::PAL_INT() {
  return getToken(PALParser::PAL_INT, 0);
}


size_t PALParser::Pal_waitContext::getRuleIndex() const {
  return PALParser::RulePal_wait;
}

void PALParser::Pal_waitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_wait(this);
}

void PALParser::Pal_waitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_wait(this);
}

PALParser::Pal_waitContext* PALParser::pal_wait() {
  Pal_waitContext *_localctx = _tracker.createInstance<Pal_waitContext>(_ctx, getState());
  enterRule(_localctx, 18, PALParser::RulePal_wait);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(PALParser::PAL_WAIT);
    setState(73);
    antlrcpp::downCast<Pal_waitContext *>(_localctx)->duration = match(PALParser::PAL_INT);
    setState(74);
    pal_timeunit();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_pluginContext ------------------------------------------------------------------

PALParser::Pal_pluginContext::Pal_pluginContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PALParser::Pal_pluginContext::PAL_PLUGIN() {
  return getToken(PALParser::PAL_PLUGIN, 0);
}


size_t PALParser::Pal_pluginContext::getRuleIndex() const {
  return PALParser::RulePal_plugin;
}

void PALParser::Pal_pluginContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_plugin(this);
}

void PALParser::Pal_pluginContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_plugin(this);
}

PALParser::Pal_pluginContext* PALParser::pal_plugin() {
  Pal_pluginContext *_localctx = _tracker.createInstance<Pal_pluginContext>(_ctx, getState());
  enterRule(_localctx, 20, PALParser::RulePal_plugin);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(PALParser::PAL_PLUGIN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_statementContext ------------------------------------------------------------------

PALParser::Pal_statementContext::Pal_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PALParser::Pal_clickContext* PALParser::Pal_statementContext::pal_click() {
  return getRuleContext<PALParser::Pal_clickContext>(0);
}

PALParser::Pal_scrollContext* PALParser::Pal_statementContext::pal_scroll() {
  return getRuleContext<PALParser::Pal_scrollContext>(0);
}

PALParser::Pal_moveContext* PALParser::Pal_statementContext::pal_move() {
  return getRuleContext<PALParser::Pal_moveContext>(0);
}

PALParser::Pal_pasteContext* PALParser::Pal_statementContext::pal_paste() {
  return getRuleContext<PALParser::Pal_pasteContext>(0);
}

PALParser::Pal_waitContext* PALParser::Pal_statementContext::pal_wait() {
  return getRuleContext<PALParser::Pal_waitContext>(0);
}

PALParser::Pal_saveContext* PALParser::Pal_statementContext::pal_save() {
  return getRuleContext<PALParser::Pal_saveContext>(0);
}

PALParser::Pal_enterContext* PALParser::Pal_statementContext::pal_enter() {
  return getRuleContext<PALParser::Pal_enterContext>(0);
}

PALParser::Pal_pluginContext* PALParser::Pal_statementContext::pal_plugin() {
  return getRuleContext<PALParser::Pal_pluginContext>(0);
}


size_t PALParser::Pal_statementContext::getRuleIndex() const {
  return PALParser::RulePal_statement;
}

void PALParser::Pal_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_statement(this);
}

void PALParser::Pal_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_statement(this);
}

PALParser::Pal_statementContext* PALParser::pal_statement() {
  Pal_statementContext *_localctx = _tracker.createInstance<Pal_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, PALParser::RulePal_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PALParser::PAL_CLICK: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        pal_click();
        break;
      }

      case PALParser::PAL_SCROLL: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        pal_scroll();
        break;
      }

      case PALParser::PAL_MOVE: {
        enterOuterAlt(_localctx, 3);
        setState(80);
        pal_move();
        break;
      }

      case PALParser::PAL_PASTE: {
        enterOuterAlt(_localctx, 4);
        setState(81);
        pal_paste();
        break;
      }

      case PALParser::PAL_WAIT: {
        enterOuterAlt(_localctx, 5);
        setState(82);
        pal_wait();
        break;
      }

      case PALParser::PAL_SAVE: {
        enterOuterAlt(_localctx, 6);
        setState(83);
        pal_save();
        break;
      }

      case PALParser::PAL_ENTER: {
        enterOuterAlt(_localctx, 7);
        setState(84);
        pal_enter();
        break;
      }

      case PALParser::PAL_PLUGIN: {
        enterOuterAlt(_localctx, 8);
        setState(85);
        pal_plugin();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pal_programContext ------------------------------------------------------------------

PALParser::Pal_programContext::Pal_programContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PALParser::Pal_statementContext *> PALParser::Pal_programContext::pal_statement() {
  return getRuleContexts<PALParser::Pal_statementContext>();
}

PALParser::Pal_statementContext* PALParser::Pal_programContext::pal_statement(size_t i) {
  return getRuleContext<PALParser::Pal_statementContext>(i);
}


size_t PALParser::Pal_programContext::getRuleIndex() const {
  return PALParser::RulePal_program;
}

void PALParser::Pal_programContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPal_program(this);
}

void PALParser::Pal_programContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PALListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPal_program(this);
}

PALParser::Pal_programContext* PALParser::pal_program() {
  Pal_programContext *_localctx = _tracker.createInstance<Pal_programContext>(_ctx, getState());
  enterRule(_localctx, 24, PALParser::RulePal_program);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PALParser::PAL_CLICK)
      | (1ULL << PALParser::PAL_MOVE)
      | (1ULL << PALParser::PAL_SCROLL)
      | (1ULL << PALParser::PAL_PASTE)
      | (1ULL << PALParser::PAL_ENTER)
      | (1ULL << PALParser::PAL_SAVE)
      | (1ULL << PALParser::PAL_WAIT)
      | (1ULL << PALParser::PAL_PLUGIN))) != 0)) {
      setState(88);
      pal_statement();
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> PALParser::_decisionToDFA;
atn::PredictionContextCache PALParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PALParser::_atn;
std::vector<uint16_t> PALParser::_serializedATN;

std::vector<std::string> PALParser::_ruleNames = {
  "pal_direction", "pal_timeunit", "pal_target", "pal_click", "pal_scroll", 
  "pal_move", "pal_enter", "pal_paste", "pal_save", "pal_wait", "pal_plugin", 
  "pal_statement", "pal_program"
};

std::vector<std::string> PALParser::_literalNames = {
  "", "'+'", "'-'", "'<'", "'>'", "'s'", "'m'", "'('", "','", "')'", "", 
  "", "", "", "'click'", "'move'", "'scroll'", "'paste'", "'enter'", "'save'", 
  "'wait'", "'plugin'", "'@'", "'%'", "'!'"
};

std::vector<std::string> PALParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "PAL_COMMENT", "PAL_WS", "PAL_QUOTED_STRING", 
  "PAL_INT", "PAL_CLICK", "PAL_MOVE", "PAL_SCROLL", "PAL_PASTE", "PAL_ENTER", 
  "PAL_SAVE", "PAL_WAIT", "PAL_PLUGIN", "PAL_AT", "PAL_TO", "PAL_REQUIRED"
};

dfa::Vocabulary PALParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PALParser::_tokenNames;

PALParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x1a, 0x61, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
       0x3, 0x4, 0x5, 0x4, 0x23, 0xa, 0x4, 0x3, 0x4, 0x5, 0x4, 0x26, 0xa, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x31, 0xa, 0x5, 0x3, 0x5, 
       0x5, 0x5, 0x34, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x38, 0xa, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x3d, 0xa, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
       0x5, 0x9, 0x46, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x5, 0xd, 0x59, 0xa, 0xd, 0x3, 0xe, 0x7, 0xe, 0x5c, 0xa, 0xe, 0xc, 
       0xe, 0xe, 0xe, 0x5f, 0xb, 0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x2, 0x4, 
       0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 
       0x4, 0x3, 0x2, 0x3, 0x6, 0x3, 0x2, 0x7, 0x8, 0x2, 0x62, 0x2, 0x1c, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x20, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x35, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x41, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x43, 0x3, 0x2, 0x2, 0x2, 0x12, 0x47, 0x3, 0x2, 0x2, 0x2, 
       0x14, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x58, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 
       0x9, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x9, 
       0x3, 0x2, 0x2, 0x1f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x7, 0x18, 
       0x2, 0x2, 0x21, 0x23, 0x7, 0xe, 0x2, 0x2, 0x22, 0x21, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x25, 0x3, 0x2, 0x2, 0x2, 
       0x24, 0x26, 0x7, 0x1a, 0x2, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 
       0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 
       0x28, 0x7, 0x9, 0x2, 0x2, 0x28, 0x29, 0x7, 0xf, 0x2, 0x2, 0x29, 0x2a, 
       0x7, 0xa, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0xf, 0x2, 0x2, 0x2b, 0x2c, 0x7, 
       0xb, 0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x10, 
       0x2, 0x2, 0x2e, 0x30, 0x5, 0x6, 0x4, 0x2, 0x2f, 0x31, 0x7, 0xe, 0x2, 
       0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 
       0x31, 0x33, 0x3, 0x2, 0x2, 0x2, 0x32, 0x34, 0x7, 0x1a, 0x2, 0x2, 
       0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x9, 0x3, 0x2, 0x2, 0x2, 0x35, 0x37, 0x7, 0x12, 0x2, 0x2, 0x36, 0x38, 
       0x5, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 
       0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 0x7, 0xf, 
       0x2, 0x2, 0x3a, 0x3b, 0x7, 0x18, 0x2, 0x2, 0x3b, 0x3d, 0x7, 0xe, 
       0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 
       0x2, 0x3d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x11, 0x2, 0x2, 
       0x3f, 0x40, 0x5, 0x6, 0x4, 0x2, 0x40, 0xd, 0x3, 0x2, 0x2, 0x2, 0x41, 
       0x42, 0x7, 0x14, 0x2, 0x2, 0x42, 0xf, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 
       0x7, 0x13, 0x2, 0x2, 0x44, 0x46, 0x7, 0xe, 0x2, 0x2, 0x45, 0x44, 
       0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x11, 0x3, 
       0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x15, 0x2, 0x2, 0x48, 0x49, 0x7, 
       0xe, 0x2, 0x2, 0x49, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x16, 
       0x2, 0x2, 0x4b, 0x4c, 0x7, 0xf, 0x2, 0x2, 0x4c, 0x4d, 0x5, 0x4, 0x3, 
       0x2, 0x4d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x17, 0x2, 
       0x2, 0x4f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x50, 0x59, 0x5, 0x8, 0x5, 0x2, 
       0x51, 0x59, 0x5, 0xa, 0x6, 0x2, 0x52, 0x59, 0x5, 0xc, 0x7, 0x2, 0x53, 
       0x59, 0x5, 0x10, 0x9, 0x2, 0x54, 0x59, 0x5, 0x14, 0xb, 0x2, 0x55, 
       0x59, 0x5, 0x12, 0xa, 0x2, 0x56, 0x59, 0x5, 0xe, 0x8, 0x2, 0x57, 
       0x59, 0x5, 0x16, 0xc, 0x2, 0x58, 0x50, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x51, 0x3, 0x2, 0x2, 0x2, 0x58, 0x52, 0x3, 0x2, 0x2, 0x2, 0x58, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x58, 0x54, 0x3, 0x2, 0x2, 0x2, 0x58, 0x55, 0x3, 
       0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x57, 0x3, 0x2, 
       0x2, 0x2, 0x59, 0x19, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x18, 
       0xd, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 0x2, 
       0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 
       0x5e, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0xb, 
       0x22, 0x25, 0x30, 0x33, 0x37, 0x3c, 0x45, 0x58, 0x5d, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PALParser::Initializer PALParser::_init;
