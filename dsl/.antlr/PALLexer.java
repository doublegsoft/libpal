// Generated from /Users/christian/export/local/works/doublegsoft.me/myhotkey/03.Development/libpal/dsl/PAL.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class PALLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, PAL_COMMENT=11, PAL_WS=12, PAL_QUOTED_STRING=13, PAL_INT=14, 
		PAL_CLICK=15, PAL_MOVE=16, PAL_SCROLL=17, PAL_PASTE=18, PAL_ENTER=19, 
		PAL_SAVE=20, PAL_WAIT=21, PAL_PLUGIN=22, PAL_AT=23, PAL_OF=24, PAL_REQUIRED=25;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "PAL_COMMENT", "PAL_WS", "PAL_NAMECHAR", "PAL_NAMEFIRSTCHAR", 
			"PAL_DIGIT", "PAL_QUOTED_STRING", "PAL_INT", "PAL_CLICK", "PAL_MOVE", 
			"PAL_SCROLL", "PAL_PASTE", "PAL_ENTER", "PAL_SAVE", "PAL_WAIT", "PAL_PLUGIN", 
			"PAL_AT", "PAL_OF", "PAL_REQUIRED"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'+'", "'-'", "'<'", "'>'", "'s'", "'m'", "'('", "','", "')'", 
			"'#remove'", null, null, null, null, "'click'", "'move'", "'scroll'", 
			"'paste'", "'enter'", "'save'", "'wait'", "'plugin'", "'@'", "'%'", "'!'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, "PAL_COMMENT", 
			"PAL_WS", "PAL_QUOTED_STRING", "PAL_INT", "PAL_CLICK", "PAL_MOVE", "PAL_SCROLL", 
			"PAL_PASTE", "PAL_ENTER", "PAL_SAVE", "PAL_WAIT", "PAL_PLUGIN", "PAL_AT", 
			"PAL_OF", "PAL_REQUIRED"
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


	public PALLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "PAL.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u0019\u00b0\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a"+
		"\u0002\u001b\u0007\u001b\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0005\nX\b\n\n\n\f\n[\t\n\u0001"+
		"\n\u0001\n\u0001\u000b\u0004\u000b`\b\u000b\u000b\u000b\f\u000ba\u0001"+
		"\u000b\u0001\u000b\u0001\f\u0001\f\u0003\fh\b\f\u0001\r\u0001\r\u0001"+
		"\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0005\u000fp\b\u000f\n\u000f"+
		"\f\u000fs\t\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0004\u0010x\b\u0010"+
		"\u000b\u0010\f\u0010y\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015"+
		"\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016"+
		"\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018"+
		"\u0001\u0018\u0001\u0019\u0001\u0019\u0001\u001a\u0001\u001a\u0001\u001b"+
		"\u0001\u001b\u0000\u0000\u001c\u0001\u0001\u0003\u0002\u0005\u0003\u0007"+
		"\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b"+
		"\u0017\f\u0019\u0000\u001b\u0000\u001d\u0000\u001f\r!\u000e#\u000f%\u0010"+
		"\'\u0011)\u0012+\u0013-\u0014/\u00151\u00163\u00175\u00187\u0019\u0001"+
		"\u0000\u0006\u0002\u0000\n\n\r\r\u0003\u0000\t\n\r\r  \u0005\u000009_"+
		"_\u00b7\u00b7\u0300\u036f\u203f\u2040\r\u0000AZaz\u00c0\u00d6\u00d8\u00f6"+
		"\u00f8\u02ff\u0370\u037d\u037f\u1fff\u200c\u200d\u2070\u218f\u2c00\u2fef"+
		"\u3001\u8000\ud7ff\u8000\uf900\u8000\ufdcf\u8000\ufdf0\u8000\ufffd\u0001"+
		"\u000009\u0001\u0000\"\"\u00b1\u0000\u0001\u0001\u0000\u0000\u0000\u0000"+
		"\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000"+
		"\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b"+
		"\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001"+
		"\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013\u0001"+
		"\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017\u0001"+
		"\u0000\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000"+
		"\u0000\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000"+
		"\u0000\'\u0001\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000\u0000"+
		"+\u0001\u0000\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/\u0001"+
		"\u0000\u0000\u0000\u00001\u0001\u0000\u0000\u0000\u00003\u0001\u0000\u0000"+
		"\u0000\u00005\u0001\u0000\u0000\u0000\u00007\u0001\u0000\u0000\u0000\u0001"+
		"9\u0001\u0000\u0000\u0000\u0003;\u0001\u0000\u0000\u0000\u0005=\u0001"+
		"\u0000\u0000\u0000\u0007?\u0001\u0000\u0000\u0000\tA\u0001\u0000\u0000"+
		"\u0000\u000bC\u0001\u0000\u0000\u0000\rE\u0001\u0000\u0000\u0000\u000f"+
		"G\u0001\u0000\u0000\u0000\u0011I\u0001\u0000\u0000\u0000\u0013K\u0001"+
		"\u0000\u0000\u0000\u0015S\u0001\u0000\u0000\u0000\u0017_\u0001\u0000\u0000"+
		"\u0000\u0019g\u0001\u0000\u0000\u0000\u001bi\u0001\u0000\u0000\u0000\u001d"+
		"k\u0001\u0000\u0000\u0000\u001fm\u0001\u0000\u0000\u0000!w\u0001\u0000"+
		"\u0000\u0000#{\u0001\u0000\u0000\u0000%\u0081\u0001\u0000\u0000\u0000"+
		"\'\u0086\u0001\u0000\u0000\u0000)\u008d\u0001\u0000\u0000\u0000+\u0093"+
		"\u0001\u0000\u0000\u0000-\u0099\u0001\u0000\u0000\u0000/\u009e\u0001\u0000"+
		"\u0000\u00001\u00a3\u0001\u0000\u0000\u00003\u00aa\u0001\u0000\u0000\u0000"+
		"5\u00ac\u0001\u0000\u0000\u00007\u00ae\u0001\u0000\u0000\u00009:\u0005"+
		"+\u0000\u0000:\u0002\u0001\u0000\u0000\u0000;<\u0005-\u0000\u0000<\u0004"+
		"\u0001\u0000\u0000\u0000=>\u0005<\u0000\u0000>\u0006\u0001\u0000\u0000"+
		"\u0000?@\u0005>\u0000\u0000@\b\u0001\u0000\u0000\u0000AB\u0005s\u0000"+
		"\u0000B\n\u0001\u0000\u0000\u0000CD\u0005m\u0000\u0000D\f\u0001\u0000"+
		"\u0000\u0000EF\u0005(\u0000\u0000F\u000e\u0001\u0000\u0000\u0000GH\u0005"+
		",\u0000\u0000H\u0010\u0001\u0000\u0000\u0000IJ\u0005)\u0000\u0000J\u0012"+
		"\u0001\u0000\u0000\u0000KL\u0005#\u0000\u0000LM\u0005r\u0000\u0000MN\u0005"+
		"e\u0000\u0000NO\u0005m\u0000\u0000OP\u0005o\u0000\u0000PQ\u0005v\u0000"+
		"\u0000QR\u0005e\u0000\u0000R\u0014\u0001\u0000\u0000\u0000ST\u0005/\u0000"+
		"\u0000TU\u0005/\u0000\u0000UY\u0001\u0000\u0000\u0000VX\b\u0000\u0000"+
		"\u0000WV\u0001\u0000\u0000\u0000X[\u0001\u0000\u0000\u0000YW\u0001\u0000"+
		"\u0000\u0000YZ\u0001\u0000\u0000\u0000Z\\\u0001\u0000\u0000\u0000[Y\u0001"+
		"\u0000\u0000\u0000\\]\u0006\n\u0000\u0000]\u0016\u0001\u0000\u0000\u0000"+
		"^`\u0007\u0001\u0000\u0000_^\u0001\u0000\u0000\u0000`a\u0001\u0000\u0000"+
		"\u0000a_\u0001\u0000\u0000\u0000ab\u0001\u0000\u0000\u0000bc\u0001\u0000"+
		"\u0000\u0000cd\u0006\u000b\u0001\u0000d\u0018\u0001\u0000\u0000\u0000"+
		"eh\u0003\u001b\r\u0000fh\u0007\u0002\u0000\u0000ge\u0001\u0000\u0000\u0000"+
		"gf\u0001\u0000\u0000\u0000h\u001a\u0001\u0000\u0000\u0000ij\u0007\u0003"+
		"\u0000\u0000j\u001c\u0001\u0000\u0000\u0000kl\u0007\u0004\u0000\u0000"+
		"l\u001e\u0001\u0000\u0000\u0000mq\u0005\"\u0000\u0000np\b\u0005\u0000"+
		"\u0000on\u0001\u0000\u0000\u0000ps\u0001\u0000\u0000\u0000qo\u0001\u0000"+
		"\u0000\u0000qr\u0001\u0000\u0000\u0000rt\u0001\u0000\u0000\u0000sq\u0001"+
		"\u0000\u0000\u0000tu\u0005\"\u0000\u0000u \u0001\u0000\u0000\u0000vx\u0003"+
		"\u001d\u000e\u0000wv\u0001\u0000\u0000\u0000xy\u0001\u0000\u0000\u0000"+
		"yw\u0001\u0000\u0000\u0000yz\u0001\u0000\u0000\u0000z\"\u0001\u0000\u0000"+
		"\u0000{|\u0005c\u0000\u0000|}\u0005l\u0000\u0000}~\u0005i\u0000\u0000"+
		"~\u007f\u0005c\u0000\u0000\u007f\u0080\u0005k\u0000\u0000\u0080$\u0001"+
		"\u0000\u0000\u0000\u0081\u0082\u0005m\u0000\u0000\u0082\u0083\u0005o\u0000"+
		"\u0000\u0083\u0084\u0005v\u0000\u0000\u0084\u0085\u0005e\u0000\u0000\u0085"+
		"&\u0001\u0000\u0000\u0000\u0086\u0087\u0005s\u0000\u0000\u0087\u0088\u0005"+
		"c\u0000\u0000\u0088\u0089\u0005r\u0000\u0000\u0089\u008a\u0005o\u0000"+
		"\u0000\u008a\u008b\u0005l\u0000\u0000\u008b\u008c\u0005l\u0000\u0000\u008c"+
		"(\u0001\u0000\u0000\u0000\u008d\u008e\u0005p\u0000\u0000\u008e\u008f\u0005"+
		"a\u0000\u0000\u008f\u0090\u0005s\u0000\u0000\u0090\u0091\u0005t\u0000"+
		"\u0000\u0091\u0092\u0005e\u0000\u0000\u0092*\u0001\u0000\u0000\u0000\u0093"+
		"\u0094\u0005e\u0000\u0000\u0094\u0095\u0005n\u0000\u0000\u0095\u0096\u0005"+
		"t\u0000\u0000\u0096\u0097\u0005e\u0000\u0000\u0097\u0098\u0005r\u0000"+
		"\u0000\u0098,\u0001\u0000\u0000\u0000\u0099\u009a\u0005s\u0000\u0000\u009a"+
		"\u009b\u0005a\u0000\u0000\u009b\u009c\u0005v\u0000\u0000\u009c\u009d\u0005"+
		"e\u0000\u0000\u009d.\u0001\u0000\u0000\u0000\u009e\u009f\u0005w\u0000"+
		"\u0000\u009f\u00a0\u0005a\u0000\u0000\u00a0\u00a1\u0005i\u0000\u0000\u00a1"+
		"\u00a2\u0005t\u0000\u0000\u00a20\u0001\u0000\u0000\u0000\u00a3\u00a4\u0005"+
		"p\u0000\u0000\u00a4\u00a5\u0005l\u0000\u0000\u00a5\u00a6\u0005u\u0000"+
		"\u0000\u00a6\u00a7\u0005g\u0000\u0000\u00a7\u00a8\u0005i\u0000\u0000\u00a8"+
		"\u00a9\u0005n\u0000\u0000\u00a92\u0001\u0000\u0000\u0000\u00aa\u00ab\u0005"+
		"@\u0000\u0000\u00ab4\u0001\u0000\u0000\u0000\u00ac\u00ad\u0005%\u0000"+
		"\u0000\u00ad6\u0001\u0000\u0000\u0000\u00ae\u00af\u0005!\u0000\u0000\u00af"+
		"8\u0001\u0000\u0000\u0000\u0006\u0000Yagqy\u0002\u0006\u0000\u0000\u0000"+
		"\u0001\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}