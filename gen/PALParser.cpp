
// Generated from dsl/PAL.g4 by ANTLR 4.13.0


#include "PALListener.h"

#include "PALParser.h"


using namespace antlrcpp;
using namespace pal;

using namespace antlr4;

namespace {

struct PALParserStaticData final {
  PALParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PALParserStaticData(const PALParserStaticData&) = delete;
  PALParserStaticData(PALParserStaticData&&) = delete;
  PALParserStaticData& operator=(const PALParserStaticData&) = delete;
  PALParserStaticData& operator=(PALParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag palParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PALParserStaticData *palParserStaticData = nullptr;

void palParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (palParserStaticData != nullptr) {
    return;
  }
#else
  assert(palParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PALParserStaticData>(
    std::vector<std::string>{
      "pal_direction", "pal_timeunit", "pal_target", "pal_click", "pal_scroll", 
      "pal_move", "pal_enter", "pal_paste", "pal_save", "pal_wait", "pal_plugin", 
      "pal_statement", "pal_program"
    },
    std::vector<std::string>{
      "", "'+'", "'-'", "'<'", "'>'", "'s'", "'m'", "'('", "','", "')'", 
      "", "", "", "", "'click'", "'move'", "'scroll'", "'paste'", "'enter'", 
      "'save'", "'wait'", "'plugin'", "'@'", "'%'", "'!'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "PAL_COMMENT", "PAL_WS", "PAL_QUOTED_STRING", 
      "PAL_INT", "PAL_CLICK", "PAL_MOVE", "PAL_SCROLL", "PAL_PASTE", "PAL_ENTER", 
      "PAL_SAVE", "PAL_WAIT", "PAL_PLUGIN", "PAL_AT", "PAL_TO", "PAL_REQUIRED"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,95,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,1,1,1,2,
  	1,2,3,2,33,8,2,1,2,3,2,36,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,3,3,
  	47,8,3,1,3,3,3,50,8,3,1,4,1,4,3,4,54,8,4,1,4,1,4,1,4,3,4,59,8,4,1,5,1,
  	5,1,5,1,6,1,6,1,7,1,7,3,7,68,8,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,87,8,11,1,12,5,12,90,8,12,
  	10,12,12,12,93,9,12,1,12,0,0,13,0,2,4,6,8,10,12,14,16,18,20,22,24,0,2,
  	1,0,1,4,1,0,5,6,96,0,26,1,0,0,0,2,28,1,0,0,0,4,30,1,0,0,0,6,43,1,0,0,
  	0,8,51,1,0,0,0,10,60,1,0,0,0,12,63,1,0,0,0,14,65,1,0,0,0,16,69,1,0,0,
  	0,18,72,1,0,0,0,20,76,1,0,0,0,22,86,1,0,0,0,24,91,1,0,0,0,26,27,7,0,0,
  	0,27,1,1,0,0,0,28,29,7,1,0,0,29,3,1,0,0,0,30,32,5,22,0,0,31,33,5,12,0,
  	0,32,31,1,0,0,0,32,33,1,0,0,0,33,35,1,0,0,0,34,36,5,24,0,0,35,34,1,0,
  	0,0,35,36,1,0,0,0,36,37,1,0,0,0,37,38,5,7,0,0,38,39,5,13,0,0,39,40,5,
  	8,0,0,40,41,5,13,0,0,41,42,5,9,0,0,42,5,1,0,0,0,43,44,5,14,0,0,44,46,
  	3,4,2,0,45,47,5,12,0,0,46,45,1,0,0,0,46,47,1,0,0,0,47,49,1,0,0,0,48,50,
  	5,24,0,0,49,48,1,0,0,0,49,50,1,0,0,0,50,7,1,0,0,0,51,53,5,16,0,0,52,54,
  	3,0,0,0,53,52,1,0,0,0,53,54,1,0,0,0,54,55,1,0,0,0,55,58,5,13,0,0,56,57,
  	5,22,0,0,57,59,5,12,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,9,1,0,0,0,60,61,
  	5,15,0,0,61,62,3,4,2,0,62,11,1,0,0,0,63,64,5,18,0,0,64,13,1,0,0,0,65,
  	67,5,17,0,0,66,68,5,12,0,0,67,66,1,0,0,0,67,68,1,0,0,0,68,15,1,0,0,0,
  	69,70,5,19,0,0,70,71,5,12,0,0,71,17,1,0,0,0,72,73,5,20,0,0,73,74,5,13,
  	0,0,74,75,3,2,1,0,75,19,1,0,0,0,76,77,5,21,0,0,77,21,1,0,0,0,78,87,3,
  	6,3,0,79,87,3,8,4,0,80,87,3,10,5,0,81,87,3,14,7,0,82,87,3,18,9,0,83,87,
  	3,16,8,0,84,87,3,12,6,0,85,87,3,20,10,0,86,78,1,0,0,0,86,79,1,0,0,0,86,
  	80,1,0,0,0,86,81,1,0,0,0,86,82,1,0,0,0,86,83,1,0,0,0,86,84,1,0,0,0,86,
  	85,1,0,0,0,87,23,1,0,0,0,88,90,3,22,11,0,89,88,1,0,0,0,90,93,1,0,0,0,
  	91,89,1,0,0,0,91,92,1,0,0,0,92,25,1,0,0,0,93,91,1,0,0,0,9,32,35,46,49,
  	53,58,67,86,91
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  palParserStaticData = staticData.release();
}

}

PALParser::PALParser(TokenStream *input) : PALParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PALParser::PALParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PALParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *palParserStaticData->atn, palParserStaticData->decisionToDFA, palParserStaticData->sharedContextCache, options);
}

PALParser::~PALParser() {
  delete _interpreter;
}

const atn::ATN& PALParser::getATN() const {
  return *palParserStaticData->atn;
}

std::string PALParser::getGrammarFileName() const {
  return "PAL.g4";
}

const std::vector<std::string>& PALParser::getRuleNames() const {
  return palParserStaticData->ruleNames;
}

const dfa::Vocabulary& PALParser::getVocabulary() const {
  return palParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PALParser::getSerializedATN() const {
  return palParserStaticData->serializedATN;
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
      ((1ULL << _la) & 30) != 0))) {
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
      ((1ULL << _la) & 30) != 0)) {
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
      ((1ULL << _la) & 4177920) != 0)) {
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

void PALParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  palParserInitialize();
#else
  ::antlr4::internal::call_once(palParserOnceFlag, palParserInitialize);
#endif
}
