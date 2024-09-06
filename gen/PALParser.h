
// Generated from dsl/PAL.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"


namespace pal {


class  PALParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, PAL_COMMENT = 10, PAL_WS = 11, PAL_QUOTED_STRING = 12, 
    PAL_INT = 13, PAL_CLICK = 14, PAL_MOVE = 15, PAL_SCROLL = 16, PAL_PASTE = 17, 
    PAL_ENTER = 18, PAL_SAVE = 19, PAL_WAIT = 20, PAL_PLUGIN = 21, PAL_AT = 22, 
    PAL_TO = 23, PAL_REQUIRED = 24
  };

  enum {
    RulePal_direction = 0, RulePal_timeunit = 1, RulePal_target = 2, RulePal_click = 3, 
    RulePal_scroll = 4, RulePal_move = 5, RulePal_enter = 6, RulePal_paste = 7, 
    RulePal_save = 8, RulePal_wait = 9, RulePal_plugin = 10, RulePal_statement = 11, 
    RulePal_program = 12
  };

  explicit PALParser(antlr4::TokenStream *input);
  ~PALParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Pal_directionContext;
  class Pal_timeunitContext;
  class Pal_targetContext;
  class Pal_clickContext;
  class Pal_scrollContext;
  class Pal_moveContext;
  class Pal_enterContext;
  class Pal_pasteContext;
  class Pal_saveContext;
  class Pal_waitContext;
  class Pal_pluginContext;
  class Pal_statementContext;
  class Pal_programContext; 

  class  Pal_directionContext : public antlr4::ParserRuleContext {
  public:
    Pal_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_directionContext* pal_direction();

  class  Pal_timeunitContext : public antlr4::ParserRuleContext {
  public:
    Pal_timeunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_timeunitContext* pal_timeunit();

  class  Pal_targetContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *path = nullptr;
    antlr4::Token *x = nullptr;
    antlr4::Token *y = nullptr;
    Pal_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_AT();
    std::vector<antlr4::tree::TerminalNode *> PAL_INT();
    antlr4::tree::TerminalNode* PAL_INT(size_t i);
    antlr4::tree::TerminalNode *PAL_REQUIRED();
    antlr4::tree::TerminalNode *PAL_QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_targetContext* pal_target();

  class  Pal_clickContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *found = nullptr;
    Pal_clickContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_CLICK();
    Pal_targetContext *pal_target();
    antlr4::tree::TerminalNode *PAL_REQUIRED();
    antlr4::tree::TerminalNode *PAL_QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_clickContext* pal_click();

  class  Pal_scrollContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *offset = nullptr;
    antlr4::Token *found = nullptr;
    Pal_scrollContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_SCROLL();
    antlr4::tree::TerminalNode *PAL_INT();
    Pal_directionContext *pal_direction();
    antlr4::tree::TerminalNode *PAL_AT();
    antlr4::tree::TerminalNode *PAL_QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_scrollContext* pal_scroll();

  class  Pal_moveContext : public antlr4::ParserRuleContext {
  public:
    Pal_moveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_MOVE();
    Pal_targetContext *pal_target();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_moveContext* pal_move();

  class  Pal_enterContext : public antlr4::ParserRuleContext {
  public:
    Pal_enterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_ENTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_enterContext* pal_enter();

  class  Pal_pasteContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *content = nullptr;
    Pal_pasteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_PASTE();
    antlr4::tree::TerminalNode *PAL_QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_pasteContext* pal_paste();

  class  Pal_saveContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *path = nullptr;
    Pal_saveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_SAVE();
    antlr4::tree::TerminalNode *PAL_QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_saveContext* pal_save();

  class  Pal_waitContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *duration = nullptr;
    Pal_waitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_WAIT();
    Pal_timeunitContext *pal_timeunit();
    antlr4::tree::TerminalNode *PAL_INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_waitContext* pal_wait();

  class  Pal_pluginContext : public antlr4::ParserRuleContext {
  public:
    Pal_pluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAL_PLUGIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_pluginContext* pal_plugin();

  class  Pal_statementContext : public antlr4::ParserRuleContext {
  public:
    Pal_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pal_clickContext *pal_click();
    Pal_scrollContext *pal_scroll();
    Pal_moveContext *pal_move();
    Pal_pasteContext *pal_paste();
    Pal_waitContext *pal_wait();
    Pal_saveContext *pal_save();
    Pal_enterContext *pal_enter();
    Pal_pluginContext *pal_plugin();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_statementContext* pal_statement();

  class  Pal_programContext : public antlr4::ParserRuleContext {
  public:
    Pal_programContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pal_statementContext *> pal_statement();
    Pal_statementContext* pal_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pal_programContext* pal_program();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace pal
