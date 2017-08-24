/* lexer header section */

// Generated from /home/osboxes/Documents/antlr4-4.7/runtime/Cpp/demo/TLexer.g4 by ANTLR 4.7

#pragma once

/* lexer precinclude section */

#include "antlr4-runtime.h"


/* lexer postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


namespace antlrcpptest {

/* lexer context section */

class  TLexer : public antlr4::Lexer {
public:
  enum {
    DUMMY = 1, SYM_AND = 2, SYM_OR = 3, SYM_NOT = 4, SYM_BOOL = 5, SYM_CONTINUED_EXECUTION = 6, 
    SYM_ERROR = 7, SYM_FALSE = 8, SYM_IMMEDIATE_EXIT = 9, SYM_INCOMPLETE = 10, 
    SYM_LOGIC = 11, SYM_MEMOUT = 12, SYM_SAT = 13, SYM_SUCCESS = 14, SYM_THEORY = 15, 
    SYM_TRUE = 16, SYM_UNKNOWN = 17, SYM_UNSAT = 18, SYM_UNSUPPORTED = 19, 
    KEYWORD_ALL_STATISTICS = 20, KEYWORD_AUTHORS = 21, KEYWORD_AXIOMS = 22, 
    KEYWORD_CHAINABLE = 23, KEYWORD_DEFINITION = 24, KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL = 25, 
    KEYWORD_ERROR_BEHAVIOR = 26, KEYWORD_EXPAND_DEFINITIONS = 27, KEYWORD_EXTENSIONS = 28, 
    KEYWORD_FUNS = 29, KEYWORD_FUNS_DESCRIPTION = 30, KEYWORD_INTERACTIVE_MODE = 31, 
    KEYWORD_LANGUAGE = 32, KEYWORD_LEFT_ASSOC = 33, KEYWORD_NAME = 34, KEYWORD_NAMED = 35, 
    KEYWORD_NOTES = 36, KEYWORD_PRINT_SUCCESS = 37, KEYWORD_PRODUCE_ASSIGNMENTS = 38, 
    KEYWORD_PRODUCE_MODELS = 39, KEYWORD_PRODUCE_PROOFS = 40, KEYWORD_PRODUCE_UNSAT_CORES = 41, 
    KEYWORD_RANDOM_SEED = 42, KEYWORD_REASON_UNKNOWN = 43, KEYWORD_REGULAR_OUTPUT_CHANNEL = 44, 
    KEYWORD_RIGHT_ASSOC = 45, KEYWORD_SORTS = 46, KEYWORD_SORTS_DESCRIPTION = 47, 
    KEYWORD_STATUS = 48, KEYWORD_THEORIES = 49, KEYWORD_VALUES = 50, KEYWORD_VERBOSITY = 51, 
    KEYWORD_VERSION = 52, TOKEN_BANG = 53, TOKEN_UNDERSCORE = 54, TOKEN_AS = 55, 
    TOKEN_DECIMAL = 56, TOKEN_EXISTS = 57, TOKEN_FORALL = 58, TOKEN_LET = 59, 
    TOKEN_NUMERAL = 60, TOKEN_PAR = 61, TOKEN_STRING = 62, TOKEN_CMD_ASSERT = 63, 
    TOKEN_CMD_CHECK_SAT = 64, TOKEN_CMD_DECLARE_SORT = 65, TOKEN_CMD_DECLARE_FUN = 66, 
    TOKEN_CMD_DEFINE_SORT = 67, TOKEN_CMD_DEFINE_FUN = 68, TOKEN_CMD_EXIT = 69, 
    TOKEN_CMD_GET_ASSERTIONS = 70, TOKEN_CMD_GET_ASSIGNMENT = 71, TOKEN_CMD_GET_INFO = 72, 
    TOKEN_CMD_GET_OPTION = 73, TOKEN_CMD_GET_PROOF = 74, TOKEN_CMD_GET_UNSAT_CORE = 75, 
    TOKEN_CMD_GET_VALUE = 76, TOKEN_CMD_POP = 77, TOKEN_CMD_PUSH = 78, TOKEN_CMD_SET_LOGIC = 79, 
    TOKEN_CMD_SET_INFO = 80, TOKEN_CMD_SET_OPTION = 81, NUMERAL = 82, DECIMAL = 83, 
    HEXADECIMAL = 84, BINARY = 85, STRING = 86, WS = 87, SIMPLE_SYM = 88, 
    QUOTED_SYM = 89, COMMENT = 90, KEYWORD_TOKEN = 91, OpenPar = 92, ClosePar = 93
  };

  enum {
    CommentsChannel = 2, DirectiveChannel = 3
  };

  TLexer(antlr4::CharStream *input);
  ~TLexer();

  /* public lexer declarations section */
  bool canTestFoo() { return true; }
  bool isItFoo() { return true; }
  bool isItBar() { return true; }

  void myFooLexerAction() { /* do something*/ };
  void myBarLexerAction() { /* do something*/ };

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;

  /* private lexer declarations/members section */

  // Individual action functions triggered by action() above.
  void WSAction(antlr4::RuleContext *context, size_t actionIndex);
  void COMMENTAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
