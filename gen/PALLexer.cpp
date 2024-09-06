
// Generated from dsl/PAL.g4 by ANTLR 4.13.0


#include "PALLexer.h"


using namespace antlr4;

using namespace pal;


using namespace antlr4;

namespace {

struct PALLexerStaticData final {
  PALLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PALLexerStaticData(const PALLexerStaticData&) = delete;
  PALLexerStaticData(PALLexerStaticData&&) = delete;
  PALLexerStaticData& operator=(const PALLexerStaticData&) = delete;
  PALLexerStaticData& operator=(PALLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pallexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PALLexerStaticData *pallexerLexerStaticData = nullptr;

void pallexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pallexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(pallexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PALLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "PAL_COMMENT", "PAL_WS", "PAL_NAMECHAR", "PAL_NAMEFIRSTCHAR", "PAL_DIGIT", 
      "PAL_QUOTED_STRING", "PAL_INT", "PAL_CLICK", "PAL_MOVE", "PAL_SCROLL", 
      "PAL_PASTE", "PAL_ENTER", "PAL_SAVE", "PAL_WAIT", "PAL_PLUGIN", "PAL_AT", 
      "PAL_TO", "PAL_REQUIRED"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,24,166,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,
  	1,9,5,9,78,8,9,10,9,12,9,81,9,9,1,9,1,9,1,10,4,10,86,8,10,11,10,12,10,
  	87,1,10,1,10,1,11,1,11,3,11,94,8,11,1,12,1,12,1,13,1,13,1,14,1,14,5,14,
  	102,8,14,10,14,12,14,105,9,14,1,14,1,14,1,15,4,15,110,8,15,11,15,12,15,
  	111,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,23,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,0,0,27,1,
  	1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,0,25,0,27,0,29,12,
  	31,13,33,14,35,15,37,16,39,17,41,18,43,19,45,20,47,21,49,22,51,23,53,
  	24,1,0,6,2,0,10,10,13,13,3,0,9,10,13,13,32,32,5,0,48,57,95,95,183,183,
  	768,879,8255,8256,13,0,65,90,97,122,192,214,216,246,248,767,880,893,895,
  	8191,8204,8205,8304,8591,11264,12271,12289,55295,63744,64975,65008,65533,
  	1,0,48,57,1,0,34,34,167,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,
  	0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,
  	0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,
  	0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,1,55,1,0,0,0,3,57,
  	1,0,0,0,5,59,1,0,0,0,7,61,1,0,0,0,9,63,1,0,0,0,11,65,1,0,0,0,13,67,1,
  	0,0,0,15,69,1,0,0,0,17,71,1,0,0,0,19,73,1,0,0,0,21,85,1,0,0,0,23,93,1,
  	0,0,0,25,95,1,0,0,0,27,97,1,0,0,0,29,99,1,0,0,0,31,109,1,0,0,0,33,113,
  	1,0,0,0,35,119,1,0,0,0,37,124,1,0,0,0,39,131,1,0,0,0,41,137,1,0,0,0,43,
  	143,1,0,0,0,45,148,1,0,0,0,47,153,1,0,0,0,49,160,1,0,0,0,51,162,1,0,0,
  	0,53,164,1,0,0,0,55,56,5,43,0,0,56,2,1,0,0,0,57,58,5,45,0,0,58,4,1,0,
  	0,0,59,60,5,60,0,0,60,6,1,0,0,0,61,62,5,62,0,0,62,8,1,0,0,0,63,64,5,115,
  	0,0,64,10,1,0,0,0,65,66,5,109,0,0,66,12,1,0,0,0,67,68,5,40,0,0,68,14,
  	1,0,0,0,69,70,5,44,0,0,70,16,1,0,0,0,71,72,5,41,0,0,72,18,1,0,0,0,73,
  	74,5,47,0,0,74,75,5,47,0,0,75,79,1,0,0,0,76,78,8,0,0,0,77,76,1,0,0,0,
  	78,81,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,0,80,82,1,0,0,0,81,79,1,0,0,0,
  	82,83,6,9,0,0,83,20,1,0,0,0,84,86,7,1,0,0,85,84,1,0,0,0,86,87,1,0,0,0,
  	87,85,1,0,0,0,87,88,1,0,0,0,88,89,1,0,0,0,89,90,6,10,1,0,90,22,1,0,0,
  	0,91,94,3,25,12,0,92,94,7,2,0,0,93,91,1,0,0,0,93,92,1,0,0,0,94,24,1,0,
  	0,0,95,96,7,3,0,0,96,26,1,0,0,0,97,98,7,4,0,0,98,28,1,0,0,0,99,103,5,
  	34,0,0,100,102,8,5,0,0,101,100,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,
  	0,103,104,1,0,0,0,104,106,1,0,0,0,105,103,1,0,0,0,106,107,5,34,0,0,107,
  	30,1,0,0,0,108,110,3,27,13,0,109,108,1,0,0,0,110,111,1,0,0,0,111,109,
  	1,0,0,0,111,112,1,0,0,0,112,32,1,0,0,0,113,114,5,99,0,0,114,115,5,108,
  	0,0,115,116,5,105,0,0,116,117,5,99,0,0,117,118,5,107,0,0,118,34,1,0,0,
  	0,119,120,5,109,0,0,120,121,5,111,0,0,121,122,5,118,0,0,122,123,5,101,
  	0,0,123,36,1,0,0,0,124,125,5,115,0,0,125,126,5,99,0,0,126,127,5,114,0,
  	0,127,128,5,111,0,0,128,129,5,108,0,0,129,130,5,108,0,0,130,38,1,0,0,
  	0,131,132,5,112,0,0,132,133,5,97,0,0,133,134,5,115,0,0,134,135,5,116,
  	0,0,135,136,5,101,0,0,136,40,1,0,0,0,137,138,5,101,0,0,138,139,5,110,
  	0,0,139,140,5,116,0,0,140,141,5,101,0,0,141,142,5,114,0,0,142,42,1,0,
  	0,0,143,144,5,115,0,0,144,145,5,97,0,0,145,146,5,118,0,0,146,147,5,101,
  	0,0,147,44,1,0,0,0,148,149,5,119,0,0,149,150,5,97,0,0,150,151,5,105,0,
  	0,151,152,5,116,0,0,152,46,1,0,0,0,153,154,5,112,0,0,154,155,5,108,0,
  	0,155,156,5,117,0,0,156,157,5,103,0,0,157,158,5,105,0,0,158,159,5,110,
  	0,0,159,48,1,0,0,0,160,161,5,64,0,0,161,50,1,0,0,0,162,163,5,37,0,0,163,
  	52,1,0,0,0,164,165,5,33,0,0,165,54,1,0,0,0,6,0,79,87,93,103,111,2,6,0,
  	0,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pallexerLexerStaticData = staticData.release();
}

}

PALLexer::PALLexer(CharStream *input) : Lexer(input) {
  PALLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *pallexerLexerStaticData->atn, pallexerLexerStaticData->decisionToDFA, pallexerLexerStaticData->sharedContextCache);
}

PALLexer::~PALLexer() {
  delete _interpreter;
}

std::string PALLexer::getGrammarFileName() const {
  return "PAL.g4";
}

const std::vector<std::string>& PALLexer::getRuleNames() const {
  return pallexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PALLexer::getChannelNames() const {
  return pallexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PALLexer::getModeNames() const {
  return pallexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PALLexer::getVocabulary() const {
  return pallexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PALLexer::getSerializedATN() const {
  return pallexerLexerStaticData->serializedATN;
}

const atn::ATN& PALLexer::getATN() const {
  return *pallexerLexerStaticData->atn;
}




void PALLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pallexerLexerInitialize();
#else
  ::antlr4::internal::call_once(pallexerLexerOnceFlag, pallexerLexerInitialize);
#endif
}