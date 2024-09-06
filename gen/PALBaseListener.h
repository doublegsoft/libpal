
// Generated from dsl/PAL.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "PALListener.h"


namespace pal {

/**
 * This class provides an empty implementation of PALListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PALBaseListener : public PALListener {
public:

  virtual void enterPal_direction(PALParser::Pal_directionContext * /*ctx*/) override { }
  virtual void exitPal_direction(PALParser::Pal_directionContext * /*ctx*/) override { }

  virtual void enterPal_timeunit(PALParser::Pal_timeunitContext * /*ctx*/) override { }
  virtual void exitPal_timeunit(PALParser::Pal_timeunitContext * /*ctx*/) override { }

  virtual void enterPal_target(PALParser::Pal_targetContext * /*ctx*/) override { }
  virtual void exitPal_target(PALParser::Pal_targetContext * /*ctx*/) override { }

  virtual void enterPal_click(PALParser::Pal_clickContext * /*ctx*/) override { }
  virtual void exitPal_click(PALParser::Pal_clickContext * /*ctx*/) override { }

  virtual void enterPal_scroll(PALParser::Pal_scrollContext * /*ctx*/) override { }
  virtual void exitPal_scroll(PALParser::Pal_scrollContext * /*ctx*/) override { }

  virtual void enterPal_move(PALParser::Pal_moveContext * /*ctx*/) override { }
  virtual void exitPal_move(PALParser::Pal_moveContext * /*ctx*/) override { }

  virtual void enterPal_enter(PALParser::Pal_enterContext * /*ctx*/) override { }
  virtual void exitPal_enter(PALParser::Pal_enterContext * /*ctx*/) override { }

  virtual void enterPal_paste(PALParser::Pal_pasteContext * /*ctx*/) override { }
  virtual void exitPal_paste(PALParser::Pal_pasteContext * /*ctx*/) override { }

  virtual void enterPal_save(PALParser::Pal_saveContext * /*ctx*/) override { }
  virtual void exitPal_save(PALParser::Pal_saveContext * /*ctx*/) override { }

  virtual void enterPal_wait(PALParser::Pal_waitContext * /*ctx*/) override { }
  virtual void exitPal_wait(PALParser::Pal_waitContext * /*ctx*/) override { }

  virtual void enterPal_plugin(PALParser::Pal_pluginContext * /*ctx*/) override { }
  virtual void exitPal_plugin(PALParser::Pal_pluginContext * /*ctx*/) override { }

  virtual void enterPal_statement(PALParser::Pal_statementContext * /*ctx*/) override { }
  virtual void exitPal_statement(PALParser::Pal_statementContext * /*ctx*/) override { }

  virtual void enterPal_program(PALParser::Pal_programContext * /*ctx*/) override { }
  virtual void exitPal_program(PALParser::Pal_programContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace pal
