// Generated from /Users/christian/export/local/works/doublegsoft.me/myhotkey/03.Development/libpal/dsl/PAL.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class PALParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, PAL_COMMENT=11, PAL_WS=12, PAL_ID=13, PAL_QUOTED_STRING=14, PAL_INT=15, 
		PAL_CLICK=16, PAL_MOVE=17, PAL_SCROLL=18, PAL_PASTE=19, PAL_ENTER=20, 
		PAL_SAVE=21, PAL_WAIT=22, PAL_PLUGIN=23, PAL_AT=24, PAL_OF=25, PAL_REQUIRED=26;
	public static final int
		RULE_pal_id = 0, RULE_pal_direction = 1, RULE_pal_timeunit = 2, RULE_pal_target = 3, 
		RULE_pal_click = 4, RULE_pal_scroll = 5, RULE_pal_move = 6, RULE_pal_enter = 7, 
		RULE_pal_paste = 8, RULE_pal_save = 9, RULE_pal_wait = 10, RULE_pal_plugin = 11, 
		RULE_pal_statement = 12, RULE_pal_program = 13;
	private static String[] makeRuleNames() {
		return new String[] {
			"pal_id", "pal_direction", "pal_timeunit", "pal_target", "pal_click", 
			"pal_scroll", "pal_move", "pal_enter", "pal_paste", "pal_save", "pal_wait", 
			"pal_plugin", "pal_statement", "pal_program"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'+'", "'-'", "'<'", "'>'", "'s'", "'m'", "'('", "','", "')'", 
			"'#remove'", null, null, null, null, null, "'click'", "'move'", "'scroll'", 
			"'paste'", "'enter'", "'save'", "'wait'", "'plugin'", "'@'", "'%'", "'!'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, "PAL_COMMENT", 
			"PAL_WS", "PAL_ID", "PAL_QUOTED_STRING", "PAL_INT", "PAL_CLICK", "PAL_MOVE", 
			"PAL_SCROLL", "PAL_PASTE", "PAL_ENTER", "PAL_SAVE", "PAL_WAIT", "PAL_PLUGIN", 
			"PAL_AT", "PAL_OF", "PAL_REQUIRED"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "PAL.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public PALParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_idContext extends ParserRuleContext {
		public TerminalNode PAL_ID() { return getToken(PALParser.PAL_ID, 0); }
		public Pal_idContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_id; }
	}

	public final Pal_idContext pal_id() throws RecognitionException {
		Pal_idContext _localctx = new Pal_idContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_pal_id);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(28);
			match(PAL_ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_directionContext extends ParserRuleContext {
		public Pal_directionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_direction; }
	}

	public final Pal_directionContext pal_direction() throws RecognitionException {
		Pal_directionContext _localctx = new Pal_directionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_pal_direction);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(30);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 30L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_timeunitContext extends ParserRuleContext {
		public Pal_timeunitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_timeunit; }
	}

	public final Pal_timeunitContext pal_timeunit() throws RecognitionException {
		Pal_timeunitContext _localctx = new Pal_timeunitContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_pal_timeunit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(32);
			_la = _input.LA(1);
			if ( !(_la==T__4 || _la==T__5) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_targetContext extends ParserRuleContext {
		public Token path;
		public Token x;
		public Token y;
		public TerminalNode PAL_AT() { return getToken(PALParser.PAL_AT, 0); }
		public TerminalNode PAL_OF() { return getToken(PALParser.PAL_OF, 0); }
		public List<TerminalNode> PAL_INT() { return getTokens(PALParser.PAL_INT); }
		public TerminalNode PAL_INT(int i) {
			return getToken(PALParser.PAL_INT, i);
		}
		public TerminalNode PAL_REQUIRED() { return getToken(PALParser.PAL_REQUIRED, 0); }
		public TerminalNode PAL_QUOTED_STRING() { return getToken(PALParser.PAL_QUOTED_STRING, 0); }
		public Pal_targetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_target; }
	}

	public final Pal_targetContext pal_target() throws RecognitionException {
		Pal_targetContext _localctx = new Pal_targetContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_pal_target);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(34);
			_la = _input.LA(1);
			if ( !(_la==PAL_AT || _la==PAL_OF) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(36);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PAL_QUOTED_STRING) {
				{
				setState(35);
				((Pal_targetContext)_localctx).path = match(PAL_QUOTED_STRING);
				}
			}

			setState(39);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PAL_REQUIRED) {
				{
				setState(38);
				match(PAL_REQUIRED);
				}
			}

			setState(41);
			match(T__6);
			setState(42);
			((Pal_targetContext)_localctx).x = match(PAL_INT);
			setState(43);
			match(T__7);
			setState(44);
			((Pal_targetContext)_localctx).y = match(PAL_INT);
			setState(45);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_clickContext extends ParserRuleContext {
		public Token found;
		public TerminalNode PAL_CLICK() { return getToken(PALParser.PAL_CLICK, 0); }
		public Pal_targetContext pal_target() {
			return getRuleContext(Pal_targetContext.class,0);
		}
		public TerminalNode PAL_REQUIRED() { return getToken(PALParser.PAL_REQUIRED, 0); }
		public TerminalNode PAL_QUOTED_STRING() { return getToken(PALParser.PAL_QUOTED_STRING, 0); }
		public Pal_clickContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_click; }
	}

	public final Pal_clickContext pal_click() throws RecognitionException {
		Pal_clickContext _localctx = new Pal_clickContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_pal_click);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(47);
			match(PAL_CLICK);
			setState(48);
			pal_target();
			setState(50);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PAL_QUOTED_STRING) {
				{
				setState(49);
				((Pal_clickContext)_localctx).found = match(PAL_QUOTED_STRING);
				}
			}

			setState(53);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PAL_REQUIRED) {
				{
				setState(52);
				match(PAL_REQUIRED);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_scrollContext extends ParserRuleContext {
		public Token offset;
		public Token found;
		public TerminalNode PAL_SCROLL() { return getToken(PALParser.PAL_SCROLL, 0); }
		public TerminalNode PAL_INT() { return getToken(PALParser.PAL_INT, 0); }
		public Pal_directionContext pal_direction() {
			return getRuleContext(Pal_directionContext.class,0);
		}
		public TerminalNode PAL_AT() { return getToken(PALParser.PAL_AT, 0); }
		public TerminalNode PAL_QUOTED_STRING() { return getToken(PALParser.PAL_QUOTED_STRING, 0); }
		public Pal_scrollContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_scroll; }
	}

	public final Pal_scrollContext pal_scroll() throws RecognitionException {
		Pal_scrollContext _localctx = new Pal_scrollContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_pal_scroll);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
			match(PAL_SCROLL);
			setState(57);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 30L) != 0)) {
				{
				setState(56);
				pal_direction();
				}
			}

			setState(59);
			((Pal_scrollContext)_localctx).offset = match(PAL_INT);
			setState(62);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PAL_AT) {
				{
				setState(60);
				match(PAL_AT);
				setState(61);
				((Pal_scrollContext)_localctx).found = match(PAL_QUOTED_STRING);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_moveContext extends ParserRuleContext {
		public TerminalNode PAL_MOVE() { return getToken(PALParser.PAL_MOVE, 0); }
		public Pal_targetContext pal_target() {
			return getRuleContext(Pal_targetContext.class,0);
		}
		public Pal_moveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_move; }
	}

	public final Pal_moveContext pal_move() throws RecognitionException {
		Pal_moveContext _localctx = new Pal_moveContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_pal_move);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(64);
			match(PAL_MOVE);
			setState(65);
			pal_target();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_enterContext extends ParserRuleContext {
		public TerminalNode PAL_ENTER() { return getToken(PALParser.PAL_ENTER, 0); }
		public Pal_enterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_enter; }
	}

	public final Pal_enterContext pal_enter() throws RecognitionException {
		Pal_enterContext _localctx = new Pal_enterContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_pal_enter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			match(PAL_ENTER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_pasteContext extends ParserRuleContext {
		public Token content;
		public TerminalNode PAL_PASTE() { return getToken(PALParser.PAL_PASTE, 0); }
		public TerminalNode PAL_QUOTED_STRING() { return getToken(PALParser.PAL_QUOTED_STRING, 0); }
		public Pal_pasteContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_paste; }
	}

	public final Pal_pasteContext pal_paste() throws RecognitionException {
		Pal_pasteContext _localctx = new Pal_pasteContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_pal_paste);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(69);
			match(PAL_PASTE);
			setState(71);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PAL_QUOTED_STRING) {
				{
				setState(70);
				((Pal_pasteContext)_localctx).content = match(PAL_QUOTED_STRING);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_saveContext extends ParserRuleContext {
		public Token path;
		public TerminalNode PAL_SAVE() { return getToken(PALParser.PAL_SAVE, 0); }
		public TerminalNode PAL_QUOTED_STRING() { return getToken(PALParser.PAL_QUOTED_STRING, 0); }
		public Pal_saveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_save; }
	}

	public final Pal_saveContext pal_save() throws RecognitionException {
		Pal_saveContext _localctx = new Pal_saveContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_pal_save);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(73);
			match(PAL_SAVE);
			setState(74);
			((Pal_saveContext)_localctx).path = match(PAL_QUOTED_STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_waitContext extends ParserRuleContext {
		public Token duration;
		public TerminalNode PAL_WAIT() { return getToken(PALParser.PAL_WAIT, 0); }
		public Pal_timeunitContext pal_timeunit() {
			return getRuleContext(Pal_timeunitContext.class,0);
		}
		public TerminalNode PAL_INT() { return getToken(PALParser.PAL_INT, 0); }
		public Pal_waitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_wait; }
	}

	public final Pal_waitContext pal_wait() throws RecognitionException {
		Pal_waitContext _localctx = new Pal_waitContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_pal_wait);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			match(PAL_WAIT);
			setState(77);
			((Pal_waitContext)_localctx).duration = match(PAL_INT);
			setState(78);
			pal_timeunit();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_pluginContext extends ParserRuleContext {
		public Token path;
		public TerminalNode PAL_PLUGIN() { return getToken(PALParser.PAL_PLUGIN, 0); }
		public TerminalNode PAL_QUOTED_STRING() { return getToken(PALParser.PAL_QUOTED_STRING, 0); }
		public Pal_pluginContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_plugin; }
	}

	public final Pal_pluginContext pal_plugin() throws RecognitionException {
		Pal_pluginContext _localctx = new Pal_pluginContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_pal_plugin);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(80);
			match(PAL_PLUGIN);
			setState(81);
			match(T__9);
			setState(82);
			match(T__6);
			setState(83);
			((Pal_pluginContext)_localctx).path = match(PAL_QUOTED_STRING);
			setState(84);
			match(T__8);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_statementContext extends ParserRuleContext {
		public Pal_clickContext pal_click() {
			return getRuleContext(Pal_clickContext.class,0);
		}
		public Pal_scrollContext pal_scroll() {
			return getRuleContext(Pal_scrollContext.class,0);
		}
		public Pal_moveContext pal_move() {
			return getRuleContext(Pal_moveContext.class,0);
		}
		public Pal_pasteContext pal_paste() {
			return getRuleContext(Pal_pasteContext.class,0);
		}
		public Pal_waitContext pal_wait() {
			return getRuleContext(Pal_waitContext.class,0);
		}
		public Pal_saveContext pal_save() {
			return getRuleContext(Pal_saveContext.class,0);
		}
		public Pal_enterContext pal_enter() {
			return getRuleContext(Pal_enterContext.class,0);
		}
		public Pal_pluginContext pal_plugin() {
			return getRuleContext(Pal_pluginContext.class,0);
		}
		public Pal_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_statement; }
	}

	public final Pal_statementContext pal_statement() throws RecognitionException {
		Pal_statementContext _localctx = new Pal_statementContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_pal_statement);
		try {
			setState(94);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PAL_CLICK:
				enterOuterAlt(_localctx, 1);
				{
				setState(86);
				pal_click();
				}
				break;
			case PAL_SCROLL:
				enterOuterAlt(_localctx, 2);
				{
				setState(87);
				pal_scroll();
				}
				break;
			case PAL_MOVE:
				enterOuterAlt(_localctx, 3);
				{
				setState(88);
				pal_move();
				}
				break;
			case PAL_PASTE:
				enterOuterAlt(_localctx, 4);
				{
				setState(89);
				pal_paste();
				}
				break;
			case PAL_WAIT:
				enterOuterAlt(_localctx, 5);
				{
				setState(90);
				pal_wait();
				}
				break;
			case PAL_SAVE:
				enterOuterAlt(_localctx, 6);
				{
				setState(91);
				pal_save();
				}
				break;
			case PAL_ENTER:
				enterOuterAlt(_localctx, 7);
				{
				setState(92);
				pal_enter();
				}
				break;
			case PAL_PLUGIN:
				enterOuterAlt(_localctx, 8);
				{
				setState(93);
				pal_plugin();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Pal_programContext extends ParserRuleContext {
		public List<Pal_statementContext> pal_statement() {
			return getRuleContexts(Pal_statementContext.class);
		}
		public Pal_statementContext pal_statement(int i) {
			return getRuleContext(Pal_statementContext.class,i);
		}
		public Pal_programContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pal_program; }
	}

	public final Pal_programContext pal_program() throws RecognitionException {
		Pal_programContext _localctx = new Pal_programContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_pal_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 16711680L) != 0)) {
				{
				{
				setState(96);
				pal_statement();
				}
				}
				setState(101);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u001ag\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0003\u0003%\b\u0003"+
		"\u0001\u0003\u0003\u0003(\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0003\u00043\b\u0004\u0001\u0004\u0003\u00046\b\u0004\u0001\u0005\u0001"+
		"\u0005\u0003\u0005:\b\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003"+
		"\u0005?\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001"+
		"\u0007\u0001\b\u0001\b\u0003\bH\b\b\u0001\t\u0001\t\u0001\t\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0003\f_\b\f\u0001\r\u0005\rb\b\r\n\r\f\re\t\r\u0001\r\u0000"+
		"\u0000\u000e\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016"+
		"\u0018\u001a\u0000\u0003\u0001\u0000\u0001\u0004\u0001\u0000\u0005\u0006"+
		"\u0001\u0000\u0018\u0019g\u0000\u001c\u0001\u0000\u0000\u0000\u0002\u001e"+
		"\u0001\u0000\u0000\u0000\u0004 \u0001\u0000\u0000\u0000\u0006\"\u0001"+
		"\u0000\u0000\u0000\b/\u0001\u0000\u0000\u0000\n7\u0001\u0000\u0000\u0000"+
		"\f@\u0001\u0000\u0000\u0000\u000eC\u0001\u0000\u0000\u0000\u0010E\u0001"+
		"\u0000\u0000\u0000\u0012I\u0001\u0000\u0000\u0000\u0014L\u0001\u0000\u0000"+
		"\u0000\u0016P\u0001\u0000\u0000\u0000\u0018^\u0001\u0000\u0000\u0000\u001a"+
		"c\u0001\u0000\u0000\u0000\u001c\u001d\u0005\r\u0000\u0000\u001d\u0001"+
		"\u0001\u0000\u0000\u0000\u001e\u001f\u0007\u0000\u0000\u0000\u001f\u0003"+
		"\u0001\u0000\u0000\u0000 !\u0007\u0001\u0000\u0000!\u0005\u0001\u0000"+
		"\u0000\u0000\"$\u0007\u0002\u0000\u0000#%\u0005\u000e\u0000\u0000$#\u0001"+
		"\u0000\u0000\u0000$%\u0001\u0000\u0000\u0000%\'\u0001\u0000\u0000\u0000"+
		"&(\u0005\u001a\u0000\u0000\'&\u0001\u0000\u0000\u0000\'(\u0001\u0000\u0000"+
		"\u0000()\u0001\u0000\u0000\u0000)*\u0005\u0007\u0000\u0000*+\u0005\u000f"+
		"\u0000\u0000+,\u0005\b\u0000\u0000,-\u0005\u000f\u0000\u0000-.\u0005\t"+
		"\u0000\u0000.\u0007\u0001\u0000\u0000\u0000/0\u0005\u0010\u0000\u0000"+
		"02\u0003\u0006\u0003\u000013\u0005\u000e\u0000\u000021\u0001\u0000\u0000"+
		"\u000023\u0001\u0000\u0000\u000035\u0001\u0000\u0000\u000046\u0005\u001a"+
		"\u0000\u000054\u0001\u0000\u0000\u000056\u0001\u0000\u0000\u00006\t\u0001"+
		"\u0000\u0000\u000079\u0005\u0012\u0000\u00008:\u0003\u0002\u0001\u0000"+
		"98\u0001\u0000\u0000\u00009:\u0001\u0000\u0000\u0000:;\u0001\u0000\u0000"+
		"\u0000;>\u0005\u000f\u0000\u0000<=\u0005\u0018\u0000\u0000=?\u0005\u000e"+
		"\u0000\u0000><\u0001\u0000\u0000\u0000>?\u0001\u0000\u0000\u0000?\u000b"+
		"\u0001\u0000\u0000\u0000@A\u0005\u0011\u0000\u0000AB\u0003\u0006\u0003"+
		"\u0000B\r\u0001\u0000\u0000\u0000CD\u0005\u0014\u0000\u0000D\u000f\u0001"+
		"\u0000\u0000\u0000EG\u0005\u0013\u0000\u0000FH\u0005\u000e\u0000\u0000"+
		"GF\u0001\u0000\u0000\u0000GH\u0001\u0000\u0000\u0000H\u0011\u0001\u0000"+
		"\u0000\u0000IJ\u0005\u0015\u0000\u0000JK\u0005\u000e\u0000\u0000K\u0013"+
		"\u0001\u0000\u0000\u0000LM\u0005\u0016\u0000\u0000MN\u0005\u000f\u0000"+
		"\u0000NO\u0003\u0004\u0002\u0000O\u0015\u0001\u0000\u0000\u0000PQ\u0005"+
		"\u0017\u0000\u0000QR\u0005\n\u0000\u0000RS\u0005\u0007\u0000\u0000ST\u0005"+
		"\u000e\u0000\u0000TU\u0005\t\u0000\u0000U\u0017\u0001\u0000\u0000\u0000"+
		"V_\u0003\b\u0004\u0000W_\u0003\n\u0005\u0000X_\u0003\f\u0006\u0000Y_\u0003"+
		"\u0010\b\u0000Z_\u0003\u0014\n\u0000[_\u0003\u0012\t\u0000\\_\u0003\u000e"+
		"\u0007\u0000]_\u0003\u0016\u000b\u0000^V\u0001\u0000\u0000\u0000^W\u0001"+
		"\u0000\u0000\u0000^X\u0001\u0000\u0000\u0000^Y\u0001\u0000\u0000\u0000"+
		"^Z\u0001\u0000\u0000\u0000^[\u0001\u0000\u0000\u0000^\\\u0001\u0000\u0000"+
		"\u0000^]\u0001\u0000\u0000\u0000_\u0019\u0001\u0000\u0000\u0000`b\u0003"+
		"\u0018\f\u0000a`\u0001\u0000\u0000\u0000be\u0001\u0000\u0000\u0000ca\u0001"+
		"\u0000\u0000\u0000cd\u0001\u0000\u0000\u0000d\u001b\u0001\u0000\u0000"+
		"\u0000ec\u0001\u0000\u0000\u0000\t$\'259>G^c";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}