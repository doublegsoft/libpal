
// Generated from dsl/PAL.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "PALParser.h"


namespace pal {

/**
 * This interface defines an abstract listener for a parse tree produced by PALParser.
 */
class  PALListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPal_direction(PALParser::Pal_directionContext *ctx) = 0;
  virtual void exitPal_direction(PALParser::Pal_directionContext *ctx) = 0;

  virtual void enterPal_timeunit(PALParser::Pal_timeunitContext *ctx) = 0;
  virtual void exitPal_timeunit(PALParser::Pal_timeunitContext *ctx) = 0;

  virtual void enterPal_target(PALParser::Pal_targetContext *ctx) = 0;
  virtual void exitPal_target(PALParser::Pal_targetContext *ctx) = 0;

  virtual void enterPal_click(PALParser::Pal_clickContext *ctx) = 0;
  virtual void exitPal_click(PALParser::Pal_clickContext *ctx) = 0;

  virtual void enterPal_scroll(PALParser::Pal_scrollContext *ctx) = 0;
  virtual void exitPal_scroll(PALParser::Pal_scrollContext *ctx) = 0;

  virtual void enterPal_move(PALParser::Pal_moveContext *ctx) = 0;
  virtual void exitPal_move(PALParser::Pal_moveContext *ctx) = 0;

  virtual void enterPal_enter(PALParser::Pal_enterContext *ctx) = 0;
  virtual void exitPal_enter(PALParser::Pal_enterContext *ctx) = 0;

  virtual void enterPal_paste(PALParser::Pal_pasteContext *ctx) = 0;
  virtual void exitPal_paste(PALParser::Pal_pasteContext *ctx) = 0;

  virtual void enterPal_save(PALParser::Pal_saveContext *ctx) = 0;
  virtual void exitPal_save(PALParser::Pal_saveContext *ctx) = 0;

  virtual void enterPal_wait(PALParser::Pal_waitContext *ctx) = 0;
  virtual void exitPal_wait(PALParser::Pal_waitContext *ctx) = 0;

  virtual void enterPal_plugin(PALParser::Pal_pluginContext *ctx) = 0;
  virtual void exitPal_plugin(PALParser::Pal_pluginContext *ctx) = 0;

  virtual void enterPal_statement(PALParser::Pal_statementContext *ctx) = 0;
  virtual void exitPal_statement(PALParser::Pal_statementContext *ctx) = 0;

  virtual void enterPal_program(PALParser::Pal_programContext *ctx) = 0;
  virtual void exitPal_program(PALParser::Pal_programContext *ctx) = 0;


};

}  // namespace pal
