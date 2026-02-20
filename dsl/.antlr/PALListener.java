// Generated from /Users/christian/export/local/works/doublegsoft.me/myhotkey/03.Development/libpal/dsl/PAL.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link PALParser}.
 */
public interface PALListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_direction}.
	 * @param ctx the parse tree
	 */
	void enterPal_direction(PALParser.Pal_directionContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_direction}.
	 * @param ctx the parse tree
	 */
	void exitPal_direction(PALParser.Pal_directionContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_timeunit}.
	 * @param ctx the parse tree
	 */
	void enterPal_timeunit(PALParser.Pal_timeunitContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_timeunit}.
	 * @param ctx the parse tree
	 */
	void exitPal_timeunit(PALParser.Pal_timeunitContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_target}.
	 * @param ctx the parse tree
	 */
	void enterPal_target(PALParser.Pal_targetContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_target}.
	 * @param ctx the parse tree
	 */
	void exitPal_target(PALParser.Pal_targetContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_click}.
	 * @param ctx the parse tree
	 */
	void enterPal_click(PALParser.Pal_clickContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_click}.
	 * @param ctx the parse tree
	 */
	void exitPal_click(PALParser.Pal_clickContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_scroll}.
	 * @param ctx the parse tree
	 */
	void enterPal_scroll(PALParser.Pal_scrollContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_scroll}.
	 * @param ctx the parse tree
	 */
	void exitPal_scroll(PALParser.Pal_scrollContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_move}.
	 * @param ctx the parse tree
	 */
	void enterPal_move(PALParser.Pal_moveContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_move}.
	 * @param ctx the parse tree
	 */
	void exitPal_move(PALParser.Pal_moveContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_enter}.
	 * @param ctx the parse tree
	 */
	void enterPal_enter(PALParser.Pal_enterContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_enter}.
	 * @param ctx the parse tree
	 */
	void exitPal_enter(PALParser.Pal_enterContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_paste}.
	 * @param ctx the parse tree
	 */
	void enterPal_paste(PALParser.Pal_pasteContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_paste}.
	 * @param ctx the parse tree
	 */
	void exitPal_paste(PALParser.Pal_pasteContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_save}.
	 * @param ctx the parse tree
	 */
	void enterPal_save(PALParser.Pal_saveContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_save}.
	 * @param ctx the parse tree
	 */
	void exitPal_save(PALParser.Pal_saveContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_wait}.
	 * @param ctx the parse tree
	 */
	void enterPal_wait(PALParser.Pal_waitContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_wait}.
	 * @param ctx the parse tree
	 */
	void exitPal_wait(PALParser.Pal_waitContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_plugin}.
	 * @param ctx the parse tree
	 */
	void enterPal_plugin(PALParser.Pal_pluginContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_plugin}.
	 * @param ctx the parse tree
	 */
	void exitPal_plugin(PALParser.Pal_pluginContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_statement}.
	 * @param ctx the parse tree
	 */
	void enterPal_statement(PALParser.Pal_statementContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_statement}.
	 * @param ctx the parse tree
	 */
	void exitPal_statement(PALParser.Pal_statementContext ctx);
	/**
	 * Enter a parse tree produced by {@link PALParser#pal_program}.
	 * @param ctx the parse tree
	 */
	void enterPal_program(PALParser.Pal_programContext ctx);
	/**
	 * Exit a parse tree produced by {@link PALParser#pal_program}.
	 * @param ctx the parse tree
	 */
	void exitPal_program(PALParser.Pal_programContext ctx);
}