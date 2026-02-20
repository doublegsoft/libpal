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
		T__9=10, PAL_COMMENT=11, PAL_WS=12, PAL_ID=13, PAL_QUOTED_STRING=14, PAL_INT=15, 
		PAL_CLICK=16, PAL_MOVE=17, PAL_SCROLL=18, PAL_PASTE=19, PAL_ENTER=20, 
		PAL_SAVE=21, PAL_WAIT=22, PAL_PLUGIN=23, PAL_AT=24, PAL_OF=25, PAL_REQUIRED=26;
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
			"PAL_DIGIT", "PAL_ID", "PAL_QUOTED_STRING", "PAL_INT", "PAL_CLICK", "PAL_MOVE", 
			"PAL_SCROLL", "PAL_PASTE", "PAL_ENTER", "PAL_SAVE", "PAL_WAIT", "PAL_PLUGIN", 
			"PAL_AT", "PAL_OF", "PAL_REQUIRED"
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
		"\u0004\u0000\u001a\u00b9\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a"+
		"\u0002\u001b\u0007\u001b\u0002\u001c\u0007\u001c\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0005"+
		"\nZ\b\n\n\n\f\n]\t\n\u0001\n\u0001\n\u0001\u000b\u0004\u000bb\b\u000b"+
		"\u000b\u000b\f\u000bc\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0003\f"+
		"j\b\f\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f"+
		"\u0005\u000fr\b\u000f\n\u000f\f\u000fu\t\u000f\u0001\u0010\u0001\u0010"+
		"\u0005\u0010y\b\u0010\n\u0010\f\u0010|\t\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0011\u0004\u0011\u0081\b\u0011\u000b\u0011\f\u0011\u0082\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0014\u0001"+
		"\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0018\u0001"+
		"\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001"+
		"\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u001a\u0001"+
		"\u001a\u0001\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0000\u0000\u001d"+
		"\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r"+
		"\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\u0000\u001b\u0000"+
		"\u001d\u0000\u001f\r!\u000e#\u000f%\u0010\'\u0011)\u0012+\u0013-\u0014"+
		"/\u00151\u00163\u00175\u00187\u00199\u001a\u0001\u0000\u0006\u0002\u0000"+
		"\n\n\r\r\u0003\u0000\t\n\r\r  \u0005\u000009__\u00b7\u00b7\u0300\u036f"+
		"\u203f\u2040\r\u0000AZaz\u00c0\u00d6\u00d8\u00f6\u00f8\u02ff\u0370\u037d"+
		"\u037f\u1fff\u200c\u200d\u2070\u218f\u2c00\u2fef\u3001\u8000\ud7ff\u8000"+
		"\uf900\u8000\ufdcf\u8000\ufdf0\u8000\ufffd\u0001\u000009\u0001\u0000\""+
		"\"\u00bb\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000"+
		"\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000"+
		"\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000"+
		"\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000"+
		"\u0011\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000"+
		"\u0015\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000"+
		"\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001"+
		"\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'\u0001\u0000"+
		"\u0000\u0000\u0000)\u0001\u0000\u0000\u0000\u0000+\u0001\u0000\u0000\u0000"+
		"\u0000-\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000\u0000\u00001"+
		"\u0001\u0000\u0000\u0000\u00003\u0001\u0000\u0000\u0000\u00005\u0001\u0000"+
		"\u0000\u0000\u00007\u0001\u0000\u0000\u0000\u00009\u0001\u0000\u0000\u0000"+
		"\u0001;\u0001\u0000\u0000\u0000\u0003=\u0001\u0000\u0000\u0000\u0005?"+
		"\u0001\u0000\u0000\u0000\u0007A\u0001\u0000\u0000\u0000\tC\u0001\u0000"+
		"\u0000\u0000\u000bE\u0001\u0000\u0000\u0000\rG\u0001\u0000\u0000\u0000"+
		"\u000fI\u0001\u0000\u0000\u0000\u0011K\u0001\u0000\u0000\u0000\u0013M"+
		"\u0001\u0000\u0000\u0000\u0015U\u0001\u0000\u0000\u0000\u0017a\u0001\u0000"+
		"\u0000\u0000\u0019i\u0001\u0000\u0000\u0000\u001bk\u0001\u0000\u0000\u0000"+
		"\u001dm\u0001\u0000\u0000\u0000\u001fo\u0001\u0000\u0000\u0000!v\u0001"+
		"\u0000\u0000\u0000#\u0080\u0001\u0000\u0000\u0000%\u0084\u0001\u0000\u0000"+
		"\u0000\'\u008a\u0001\u0000\u0000\u0000)\u008f\u0001\u0000\u0000\u0000"+
		"+\u0096\u0001\u0000\u0000\u0000-\u009c\u0001\u0000\u0000\u0000/\u00a2"+
		"\u0001\u0000\u0000\u00001\u00a7\u0001\u0000\u0000\u00003\u00ac\u0001\u0000"+
		"\u0000\u00005\u00b3\u0001\u0000\u0000\u00007\u00b5\u0001\u0000\u0000\u0000"+
		"9\u00b7\u0001\u0000\u0000\u0000;<\u0005+\u0000\u0000<\u0002\u0001\u0000"+
		"\u0000\u0000=>\u0005-\u0000\u0000>\u0004\u0001\u0000\u0000\u0000?@\u0005"+
		"<\u0000\u0000@\u0006\u0001\u0000\u0000\u0000AB\u0005>\u0000\u0000B\b\u0001"+
		"\u0000\u0000\u0000CD\u0005s\u0000\u0000D\n\u0001\u0000\u0000\u0000EF\u0005"+
		"m\u0000\u0000F\f\u0001\u0000\u0000\u0000GH\u0005(\u0000\u0000H\u000e\u0001"+
		"\u0000\u0000\u0000IJ\u0005,\u0000\u0000J\u0010\u0001\u0000\u0000\u0000"+
		"KL\u0005)\u0000\u0000L\u0012\u0001\u0000\u0000\u0000MN\u0005#\u0000\u0000"+
		"NO\u0005r\u0000\u0000OP\u0005e\u0000\u0000PQ\u0005m\u0000\u0000QR\u0005"+
		"o\u0000\u0000RS\u0005v\u0000\u0000ST\u0005e\u0000\u0000T\u0014\u0001\u0000"+
		"\u0000\u0000UV\u0005/\u0000\u0000VW\u0005/\u0000\u0000W[\u0001\u0000\u0000"+
		"\u0000XZ\b\u0000\u0000\u0000YX\u0001\u0000\u0000\u0000Z]\u0001\u0000\u0000"+
		"\u0000[Y\u0001\u0000\u0000\u0000[\\\u0001\u0000\u0000\u0000\\^\u0001\u0000"+
		"\u0000\u0000][\u0001\u0000\u0000\u0000^_\u0006\n\u0000\u0000_\u0016\u0001"+
		"\u0000\u0000\u0000`b\u0007\u0001\u0000\u0000a`\u0001\u0000\u0000\u0000"+
		"bc\u0001\u0000\u0000\u0000ca\u0001\u0000\u0000\u0000cd\u0001\u0000\u0000"+
		"\u0000de\u0001\u0000\u0000\u0000ef\u0006\u000b\u0001\u0000f\u0018\u0001"+
		"\u0000\u0000\u0000gj\u0003\u001b\r\u0000hj\u0007\u0002\u0000\u0000ig\u0001"+
		"\u0000\u0000\u0000ih\u0001\u0000\u0000\u0000j\u001a\u0001\u0000\u0000"+
		"\u0000kl\u0007\u0003\u0000\u0000l\u001c\u0001\u0000\u0000\u0000mn\u0007"+
		"\u0004\u0000\u0000n\u001e\u0001\u0000\u0000\u0000os\u0003\u001b\r\u0000"+
		"pr\u0003\u0019\f\u0000qp\u0001\u0000\u0000\u0000ru\u0001\u0000\u0000\u0000"+
		"sq\u0001\u0000\u0000\u0000st\u0001\u0000\u0000\u0000t \u0001\u0000\u0000"+
		"\u0000us\u0001\u0000\u0000\u0000vz\u0005\"\u0000\u0000wy\b\u0005\u0000"+
		"\u0000xw\u0001\u0000\u0000\u0000y|\u0001\u0000\u0000\u0000zx\u0001\u0000"+
		"\u0000\u0000z{\u0001\u0000\u0000\u0000{}\u0001\u0000\u0000\u0000|z\u0001"+
		"\u0000\u0000\u0000}~\u0005\"\u0000\u0000~\"\u0001\u0000\u0000\u0000\u007f"+
		"\u0081\u0003\u001d\u000e\u0000\u0080\u007f\u0001\u0000\u0000\u0000\u0081"+
		"\u0082\u0001\u0000\u0000\u0000\u0082\u0080\u0001\u0000\u0000\u0000\u0082"+
		"\u0083\u0001\u0000\u0000\u0000\u0083$\u0001\u0000\u0000\u0000\u0084\u0085"+
		"\u0005c\u0000\u0000\u0085\u0086\u0005l\u0000\u0000\u0086\u0087\u0005i"+
		"\u0000\u0000\u0087\u0088\u0005c\u0000\u0000\u0088\u0089\u0005k\u0000\u0000"+
		"\u0089&\u0001\u0000\u0000\u0000\u008a\u008b\u0005m\u0000\u0000\u008b\u008c"+
		"\u0005o\u0000\u0000\u008c\u008d\u0005v\u0000\u0000\u008d\u008e\u0005e"+
		"\u0000\u0000\u008e(\u0001\u0000\u0000\u0000\u008f\u0090\u0005s\u0000\u0000"+
		"\u0090\u0091\u0005c\u0000\u0000\u0091\u0092\u0005r\u0000\u0000\u0092\u0093"+
		"\u0005o\u0000\u0000\u0093\u0094\u0005l\u0000\u0000\u0094\u0095\u0005l"+
		"\u0000\u0000\u0095*\u0001\u0000\u0000\u0000\u0096\u0097\u0005p\u0000\u0000"+
		"\u0097\u0098\u0005a\u0000\u0000\u0098\u0099\u0005s\u0000\u0000\u0099\u009a"+
		"\u0005t\u0000\u0000\u009a\u009b\u0005e\u0000\u0000\u009b,\u0001\u0000"+
		"\u0000\u0000\u009c\u009d\u0005e\u0000\u0000\u009d\u009e\u0005n\u0000\u0000"+
		"\u009e\u009f\u0005t\u0000\u0000\u009f\u00a0\u0005e\u0000\u0000\u00a0\u00a1"+
		"\u0005r\u0000\u0000\u00a1.\u0001\u0000\u0000\u0000\u00a2\u00a3\u0005s"+
		"\u0000\u0000\u00a3\u00a4\u0005a\u0000\u0000\u00a4\u00a5\u0005v\u0000\u0000"+
		"\u00a5\u00a6\u0005e\u0000\u0000\u00a60\u0001\u0000\u0000\u0000\u00a7\u00a8"+
		"\u0005w\u0000\u0000\u00a8\u00a9\u0005a\u0000\u0000\u00a9\u00aa\u0005i"+
		"\u0000\u0000\u00aa\u00ab\u0005t\u0000\u0000\u00ab2\u0001\u0000\u0000\u0000"+
		"\u00ac\u00ad\u0005p\u0000\u0000\u00ad\u00ae\u0005l\u0000\u0000\u00ae\u00af"+
		"\u0005u\u0000\u0000\u00af\u00b0\u0005g\u0000\u0000\u00b0\u00b1\u0005i"+
		"\u0000\u0000\u00b1\u00b2\u0005n\u0000\u0000\u00b24\u0001\u0000\u0000\u0000"+
		"\u00b3\u00b4\u0005@\u0000\u0000\u00b46\u0001\u0000\u0000\u0000\u00b5\u00b6"+
		"\u0005%\u0000\u0000\u00b68\u0001\u0000\u0000\u0000\u00b7\u00b8\u0005!"+
		"\u0000\u0000\u00b8:\u0001\u0000\u0000\u0000\u0007\u0000[cisz\u0082\u0002"+
		"\u0006\u0000\u0000\u0000\u0001\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}