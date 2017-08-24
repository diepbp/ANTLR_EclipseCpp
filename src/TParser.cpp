/* parser/listener/visitor header section */

// Generated from /home/osboxes/Documents/antlr4-4.7/runtime/Cpp/demo/TParser.g4 by ANTLR 4.7

/* parser precinclude section */

#include "TParserListener.h"
#include "TParserVisitor.h"

#include "TParser.h"


/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

TParser::TParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TParser::~TParser() {
  delete _interpreter;
}

std::string TParser::getGrammarFileName() const {
  return "TParser.g4";
}

const std::vector<std::string>& TParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TParser::getVocabulary() const {
  return _vocabulary;
}

/* parser definitions section */

//----------------- SymbolContext ------------------------------------------------------------------

TParser::SymbolContext::SymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::SymbolContext::SIMPLE_SYM() {
  return getToken(TParser::SIMPLE_SYM, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_AND() {
  return getToken(TParser::SYM_AND, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_OR() {
  return getToken(TParser::SYM_OR, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_NOT() {
  return getToken(TParser::SYM_NOT, 0);
}

tree::TerminalNode* TParser::SymbolContext::QUOTED_SYM() {
  return getToken(TParser::QUOTED_SYM, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_BOOL() {
  return getToken(TParser::SYM_BOOL, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_CONTINUED_EXECUTION() {
  return getToken(TParser::SYM_CONTINUED_EXECUTION, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_ERROR() {
  return getToken(TParser::SYM_ERROR, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_FALSE() {
  return getToken(TParser::SYM_FALSE, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_IMMEDIATE_EXIT() {
  return getToken(TParser::SYM_IMMEDIATE_EXIT, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_INCOMPLETE() {
  return getToken(TParser::SYM_INCOMPLETE, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_LOGIC() {
  return getToken(TParser::SYM_LOGIC, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_MEMOUT() {
  return getToken(TParser::SYM_MEMOUT, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_SAT() {
  return getToken(TParser::SYM_SAT, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_SUCCESS() {
  return getToken(TParser::SYM_SUCCESS, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_THEORY() {
  return getToken(TParser::SYM_THEORY, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_TRUE() {
  return getToken(TParser::SYM_TRUE, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_UNKNOWN() {
  return getToken(TParser::SYM_UNKNOWN, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_UNSAT() {
  return getToken(TParser::SYM_UNSAT, 0);
}

tree::TerminalNode* TParser::SymbolContext::SYM_UNSUPPORTED() {
  return getToken(TParser::SYM_UNSUPPORTED, 0);
}


size_t TParser::SymbolContext::getRuleIndex() const {
  return TParser::RuleSymbol;
}

void TParser::SymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbol(this);
}

void TParser::SymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbol(this);
}


antlrcpp::Any TParser::SymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitSymbol(this);
  else
    return visitor->visitChildren(this);
}

TParser::SymbolContext* TParser::symbol() {
  SymbolContext *_localctx = _tracker.createInstance<SymbolContext>(_ctx, getState());
  enterRule(_localctx, 0, TParser::RuleSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
      | (1ULL << TParser::SYM_OR)
      | (1ULL << TParser::SYM_NOT)
      | (1ULL << TParser::SYM_BOOL)
      | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
      | (1ULL << TParser::SYM_ERROR)
      | (1ULL << TParser::SYM_FALSE)
      | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
      | (1ULL << TParser::SYM_INCOMPLETE)
      | (1ULL << TParser::SYM_LOGIC)
      | (1ULL << TParser::SYM_MEMOUT)
      | (1ULL << TParser::SYM_SAT)
      | (1ULL << TParser::SYM_SUCCESS)
      | (1ULL << TParser::SYM_THEORY)
      | (1ULL << TParser::SYM_TRUE)
      | (1ULL << TParser::SYM_UNKNOWN)
      | (1ULL << TParser::SYM_UNSAT)
      | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || _la == TParser::SIMPLE_SYM

    || _la == TParser::QUOTED_SYM)) {
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

//----------------- KeywordContext ------------------------------------------------------------------

TParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_TOKEN() {
  return getToken(TParser::KEYWORD_TOKEN, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_ALL_STATISTICS() {
  return getToken(TParser::KEYWORD_ALL_STATISTICS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_AUTHORS() {
  return getToken(TParser::KEYWORD_AUTHORS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_AXIOMS() {
  return getToken(TParser::KEYWORD_AXIOMS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_CHAINABLE() {
  return getToken(TParser::KEYWORD_CHAINABLE, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_DEFINITION() {
  return getToken(TParser::KEYWORD_DEFINITION, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL() {
  return getToken(TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_ERROR_BEHAVIOR() {
  return getToken(TParser::KEYWORD_ERROR_BEHAVIOR, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_EXPAND_DEFINITIONS() {
  return getToken(TParser::KEYWORD_EXPAND_DEFINITIONS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_EXTENSIONS() {
  return getToken(TParser::KEYWORD_EXTENSIONS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_FUNS() {
  return getToken(TParser::KEYWORD_FUNS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_FUNS_DESCRIPTION() {
  return getToken(TParser::KEYWORD_FUNS_DESCRIPTION, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_INTERACTIVE_MODE() {
  return getToken(TParser::KEYWORD_INTERACTIVE_MODE, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_LANGUAGE() {
  return getToken(TParser::KEYWORD_LANGUAGE, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_LEFT_ASSOC() {
  return getToken(TParser::KEYWORD_LEFT_ASSOC, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_NAME() {
  return getToken(TParser::KEYWORD_NAME, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_NAMED() {
  return getToken(TParser::KEYWORD_NAMED, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_NOTES() {
  return getToken(TParser::KEYWORD_NOTES, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_PRINT_SUCCESS() {
  return getToken(TParser::KEYWORD_PRINT_SUCCESS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_PRODUCE_ASSIGNMENTS() {
  return getToken(TParser::KEYWORD_PRODUCE_ASSIGNMENTS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_PRODUCE_MODELS() {
  return getToken(TParser::KEYWORD_PRODUCE_MODELS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_PRODUCE_PROOFS() {
  return getToken(TParser::KEYWORD_PRODUCE_PROOFS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_PRODUCE_UNSAT_CORES() {
  return getToken(TParser::KEYWORD_PRODUCE_UNSAT_CORES, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_RANDOM_SEED() {
  return getToken(TParser::KEYWORD_RANDOM_SEED, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_REASON_UNKNOWN() {
  return getToken(TParser::KEYWORD_REASON_UNKNOWN, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_REGULAR_OUTPUT_CHANNEL() {
  return getToken(TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_RIGHT_ASSOC() {
  return getToken(TParser::KEYWORD_RIGHT_ASSOC, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_SORTS() {
  return getToken(TParser::KEYWORD_SORTS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_SORTS_DESCRIPTION() {
  return getToken(TParser::KEYWORD_SORTS_DESCRIPTION, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_STATUS() {
  return getToken(TParser::KEYWORD_STATUS, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_THEORIES() {
  return getToken(TParser::KEYWORD_THEORIES, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_VALUES() {
  return getToken(TParser::KEYWORD_VALUES, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_VERBOSITY() {
  return getToken(TParser::KEYWORD_VERBOSITY, 0);
}

tree::TerminalNode* TParser::KeywordContext::KEYWORD_VERSION() {
  return getToken(TParser::KEYWORD_VERSION, 0);
}


size_t TParser::KeywordContext::getRuleIndex() const {
  return TParser::RuleKeyword;
}

void TParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void TParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}


antlrcpp::Any TParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

TParser::KeywordContext* TParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 2, TParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
      | (1ULL << TParser::KEYWORD_AUTHORS)
      | (1ULL << TParser::KEYWORD_AXIOMS)
      | (1ULL << TParser::KEYWORD_CHAINABLE)
      | (1ULL << TParser::KEYWORD_DEFINITION)
      | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
      | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
      | (1ULL << TParser::KEYWORD_EXTENSIONS)
      | (1ULL << TParser::KEYWORD_FUNS)
      | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
      | (1ULL << TParser::KEYWORD_LANGUAGE)
      | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
      | (1ULL << TParser::KEYWORD_NAME)
      | (1ULL << TParser::KEYWORD_NAMED)
      | (1ULL << TParser::KEYWORD_NOTES)
      | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
      | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
      | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
      | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
      | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
      | (1ULL << TParser::KEYWORD_RANDOM_SEED)
      | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
      | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
      | (1ULL << TParser::KEYWORD_SORTS)
      | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_STATUS)
      | (1ULL << TParser::KEYWORD_THEORIES)
      | (1ULL << TParser::KEYWORD_VALUES)
      | (1ULL << TParser::KEYWORD_VERBOSITY)
      | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN)) {
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

//----------------- Spec_constantContext ------------------------------------------------------------------

TParser::Spec_constantContext::Spec_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Spec_constantContext::NUMERAL() {
  return getToken(TParser::NUMERAL, 0);
}

tree::TerminalNode* TParser::Spec_constantContext::DECIMAL() {
  return getToken(TParser::DECIMAL, 0);
}

tree::TerminalNode* TParser::Spec_constantContext::HEXADECIMAL() {
  return getToken(TParser::HEXADECIMAL, 0);
}

tree::TerminalNode* TParser::Spec_constantContext::BINARY() {
  return getToken(TParser::BINARY, 0);
}

tree::TerminalNode* TParser::Spec_constantContext::STRING() {
  return getToken(TParser::STRING, 0);
}


size_t TParser::Spec_constantContext::getRuleIndex() const {
  return TParser::RuleSpec_constant;
}

void TParser::Spec_constantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpec_constant(this);
}

void TParser::Spec_constantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpec_constant(this);
}


antlrcpp::Any TParser::Spec_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitSpec_constant(this);
  else
    return visitor->visitChildren(this);
}

TParser::Spec_constantContext* TParser::spec_constant() {
  Spec_constantContext *_localctx = _tracker.createInstance<Spec_constantContext>(_ctx, getState());
  enterRule(_localctx, 4, TParser::RuleSpec_constant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    _la = _input->LA(1);
    if (!(((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & ((1ULL << (TParser::NUMERAL - 82))
      | (1ULL << (TParser::DECIMAL - 82))
      | (1ULL << (TParser::HEXADECIMAL - 82))
      | (1ULL << (TParser::BINARY - 82))
      | (1ULL << (TParser::STRING - 82)))) != 0))) {
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

//----------------- S_exprContext ------------------------------------------------------------------

TParser::S_exprContext::S_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::Spec_constantContext* TParser::S_exprContext::spec_constant() {
  return getRuleContext<TParser::Spec_constantContext>(0);
}

TParser::SymbolContext* TParser::S_exprContext::symbol() {
  return getRuleContext<TParser::SymbolContext>(0);
}

TParser::KeywordContext* TParser::S_exprContext::keyword() {
  return getRuleContext<TParser::KeywordContext>(0);
}

tree::TerminalNode* TParser::S_exprContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::S_exprContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::S_exprContext *> TParser::S_exprContext::s_expr() {
  return getRuleContexts<TParser::S_exprContext>();
}

TParser::S_exprContext* TParser::S_exprContext::s_expr(size_t i) {
  return getRuleContext<TParser::S_exprContext>(i);
}


size_t TParser::S_exprContext::getRuleIndex() const {
  return TParser::RuleS_expr;
}

void TParser::S_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_expr(this);
}

void TParser::S_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_expr(this);
}


antlrcpp::Any TParser::S_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitS_expr(this);
  else
    return visitor->visitChildren(this);
}

TParser::S_exprContext* TParser::s_expr() {
  S_exprContext *_localctx = _tracker.createInstance<S_exprContext>(_ctx, getState());
  enterRule(_localctx, 6, TParser::RuleS_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::NUMERAL:
      case TParser::DECIMAL:
      case TParser::HEXADECIMAL:
      case TParser::BINARY:
      case TParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(88);
        spec_constant();
        break;
      }

      case TParser::SYM_AND:
      case TParser::SYM_OR:
      case TParser::SYM_NOT:
      case TParser::SYM_BOOL:
      case TParser::SYM_CONTINUED_EXECUTION:
      case TParser::SYM_ERROR:
      case TParser::SYM_FALSE:
      case TParser::SYM_IMMEDIATE_EXIT:
      case TParser::SYM_INCOMPLETE:
      case TParser::SYM_LOGIC:
      case TParser::SYM_MEMOUT:
      case TParser::SYM_SAT:
      case TParser::SYM_SUCCESS:
      case TParser::SYM_THEORY:
      case TParser::SYM_TRUE:
      case TParser::SYM_UNKNOWN:
      case TParser::SYM_UNSAT:
      case TParser::SYM_UNSUPPORTED:
      case TParser::SIMPLE_SYM:
      case TParser::QUOTED_SYM: {
        enterOuterAlt(_localctx, 2);
        setState(89);
        symbol();
        break;
      }

      case TParser::KEYWORD_ALL_STATISTICS:
      case TParser::KEYWORD_AUTHORS:
      case TParser::KEYWORD_AXIOMS:
      case TParser::KEYWORD_CHAINABLE:
      case TParser::KEYWORD_DEFINITION:
      case TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL:
      case TParser::KEYWORD_ERROR_BEHAVIOR:
      case TParser::KEYWORD_EXPAND_DEFINITIONS:
      case TParser::KEYWORD_EXTENSIONS:
      case TParser::KEYWORD_FUNS:
      case TParser::KEYWORD_FUNS_DESCRIPTION:
      case TParser::KEYWORD_INTERACTIVE_MODE:
      case TParser::KEYWORD_LANGUAGE:
      case TParser::KEYWORD_LEFT_ASSOC:
      case TParser::KEYWORD_NAME:
      case TParser::KEYWORD_NAMED:
      case TParser::KEYWORD_NOTES:
      case TParser::KEYWORD_PRINT_SUCCESS:
      case TParser::KEYWORD_PRODUCE_ASSIGNMENTS:
      case TParser::KEYWORD_PRODUCE_MODELS:
      case TParser::KEYWORD_PRODUCE_PROOFS:
      case TParser::KEYWORD_PRODUCE_UNSAT_CORES:
      case TParser::KEYWORD_RANDOM_SEED:
      case TParser::KEYWORD_REASON_UNKNOWN:
      case TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL:
      case TParser::KEYWORD_RIGHT_ASSOC:
      case TParser::KEYWORD_SORTS:
      case TParser::KEYWORD_SORTS_DESCRIPTION:
      case TParser::KEYWORD_STATUS:
      case TParser::KEYWORD_THEORIES:
      case TParser::KEYWORD_VALUES:
      case TParser::KEYWORD_VERBOSITY:
      case TParser::KEYWORD_VERSION:
      case TParser::KEYWORD_TOKEN: {
        enterOuterAlt(_localctx, 3);
        setState(90);
        keyword();
        break;
      }

      case TParser::OpenPar: {
        enterOuterAlt(_localctx, 4);
        setState(91);
        match(TParser::OpenPar);
        setState(95);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
          | (1ULL << TParser::SYM_OR)
          | (1ULL << TParser::SYM_NOT)
          | (1ULL << TParser::SYM_BOOL)
          | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
          | (1ULL << TParser::SYM_ERROR)
          | (1ULL << TParser::SYM_FALSE)
          | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
          | (1ULL << TParser::SYM_INCOMPLETE)
          | (1ULL << TParser::SYM_LOGIC)
          | (1ULL << TParser::SYM_MEMOUT)
          | (1ULL << TParser::SYM_SAT)
          | (1ULL << TParser::SYM_SUCCESS)
          | (1ULL << TParser::SYM_THEORY)
          | (1ULL << TParser::SYM_TRUE)
          | (1ULL << TParser::SYM_UNKNOWN)
          | (1ULL << TParser::SYM_UNSAT)
          | (1ULL << TParser::SYM_UNSUPPORTED)
          | (1ULL << TParser::KEYWORD_ALL_STATISTICS)
          | (1ULL << TParser::KEYWORD_AUTHORS)
          | (1ULL << TParser::KEYWORD_AXIOMS)
          | (1ULL << TParser::KEYWORD_CHAINABLE)
          | (1ULL << TParser::KEYWORD_DEFINITION)
          | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
          | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
          | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
          | (1ULL << TParser::KEYWORD_EXTENSIONS)
          | (1ULL << TParser::KEYWORD_FUNS)
          | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
          | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
          | (1ULL << TParser::KEYWORD_LANGUAGE)
          | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
          | (1ULL << TParser::KEYWORD_NAME)
          | (1ULL << TParser::KEYWORD_NAMED)
          | (1ULL << TParser::KEYWORD_NOTES)
          | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
          | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
          | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
          | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
          | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
          | (1ULL << TParser::KEYWORD_RANDOM_SEED)
          | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
          | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
          | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
          | (1ULL << TParser::KEYWORD_SORTS)
          | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
          | (1ULL << TParser::KEYWORD_STATUS)
          | (1ULL << TParser::KEYWORD_THEORIES)
          | (1ULL << TParser::KEYWORD_VALUES)
          | (1ULL << TParser::KEYWORD_VERBOSITY)
          | (1ULL << TParser::KEYWORD_VERSION))) != 0) || ((((_la - 82) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 82)) & ((1ULL << (TParser::NUMERAL - 82))
          | (1ULL << (TParser::DECIMAL - 82))
          | (1ULL << (TParser::HEXADECIMAL - 82))
          | (1ULL << (TParser::BINARY - 82))
          | (1ULL << (TParser::STRING - 82))
          | (1ULL << (TParser::SIMPLE_SYM - 82))
          | (1ULL << (TParser::QUOTED_SYM - 82))
          | (1ULL << (TParser::KEYWORD_TOKEN - 82))
          | (1ULL << (TParser::OpenPar - 82)))) != 0)) {
          setState(92);
          s_expr();
          setState(97);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(98);
        match(TParser::ClosePar);
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

//----------------- IdentifierContext ------------------------------------------------------------------

TParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::SymbolContext* TParser::IdentifierContext::symbol() {
  return getRuleContext<TParser::SymbolContext>(0);
}

tree::TerminalNode* TParser::IdentifierContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::IdentifierContext::TOKEN_UNDERSCORE() {
  return getToken(TParser::TOKEN_UNDERSCORE, 0);
}

tree::TerminalNode* TParser::IdentifierContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<tree::TerminalNode *> TParser::IdentifierContext::NUMERAL() {
  return getTokens(TParser::NUMERAL);
}

tree::TerminalNode* TParser::IdentifierContext::NUMERAL(size_t i) {
  return getToken(TParser::NUMERAL, i);
}


size_t TParser::IdentifierContext::getRuleIndex() const {
  return TParser::RuleIdentifier;
}

void TParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void TParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any TParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

TParser::IdentifierContext* TParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 8, TParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::SYM_AND:
      case TParser::SYM_OR:
      case TParser::SYM_NOT:
      case TParser::SYM_BOOL:
      case TParser::SYM_CONTINUED_EXECUTION:
      case TParser::SYM_ERROR:
      case TParser::SYM_FALSE:
      case TParser::SYM_IMMEDIATE_EXIT:
      case TParser::SYM_INCOMPLETE:
      case TParser::SYM_LOGIC:
      case TParser::SYM_MEMOUT:
      case TParser::SYM_SAT:
      case TParser::SYM_SUCCESS:
      case TParser::SYM_THEORY:
      case TParser::SYM_TRUE:
      case TParser::SYM_UNKNOWN:
      case TParser::SYM_UNSAT:
      case TParser::SYM_UNSUPPORTED:
      case TParser::SIMPLE_SYM:
      case TParser::QUOTED_SYM: {
        enterOuterAlt(_localctx, 1);
        setState(101);
        symbol();
        break;
      }

      case TParser::OpenPar: {
        enterOuterAlt(_localctx, 2);
        setState(102);
        match(TParser::OpenPar);
        setState(103);
        match(TParser::TOKEN_UNDERSCORE);
        setState(104);
        symbol();
        setState(106); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(105);
          match(TParser::NUMERAL);
          setState(108); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == TParser::NUMERAL);
        setState(110);
        match(TParser::ClosePar);
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

//----------------- SortContext ------------------------------------------------------------------

TParser::SortContext::SortContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::IdentifierContext* TParser::SortContext::identifier() {
  return getRuleContext<TParser::IdentifierContext>(0);
}

tree::TerminalNode* TParser::SortContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::SortContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::SortContext *> TParser::SortContext::sort() {
  return getRuleContexts<TParser::SortContext>();
}

TParser::SortContext* TParser::SortContext::sort(size_t i) {
  return getRuleContext<TParser::SortContext>(i);
}


size_t TParser::SortContext::getRuleIndex() const {
  return TParser::RuleSort;
}

void TParser::SortContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSort(this);
}

void TParser::SortContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSort(this);
}


antlrcpp::Any TParser::SortContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitSort(this);
  else
    return visitor->visitChildren(this);
}

TParser::SortContext* TParser::sort() {
  SortContext *_localctx = _tracker.createInstance<SortContext>(_ctx, getState());
  enterRule(_localctx, 10, TParser::RuleSort);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      match(TParser::OpenPar);
      setState(116);
      identifier();
      setState(118); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(117);
        sort();
        setState(120); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || ((((_la - 88) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 88)) & ((1ULL << (TParser::SIMPLE_SYM - 88))
        | (1ULL << (TParser::QUOTED_SYM - 88))
        | (1ULL << (TParser::OpenPar - 88)))) != 0));
      setState(122);
      match(TParser::ClosePar);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_valueContext ------------------------------------------------------------------

TParser::Attribute_valueContext::Attribute_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::SymbolContext* TParser::Attribute_valueContext::symbol() {
  return getRuleContext<TParser::SymbolContext>(0);
}

TParser::Spec_constantContext* TParser::Attribute_valueContext::spec_constant() {
  return getRuleContext<TParser::Spec_constantContext>(0);
}

tree::TerminalNode* TParser::Attribute_valueContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Attribute_valueContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::S_exprContext *> TParser::Attribute_valueContext::s_expr() {
  return getRuleContexts<TParser::S_exprContext>();
}

TParser::S_exprContext* TParser::Attribute_valueContext::s_expr(size_t i) {
  return getRuleContext<TParser::S_exprContext>(i);
}


size_t TParser::Attribute_valueContext::getRuleIndex() const {
  return TParser::RuleAttribute_value;
}

void TParser::Attribute_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_value(this);
}

void TParser::Attribute_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_value(this);
}


antlrcpp::Any TParser::Attribute_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAttribute_value(this);
  else
    return visitor->visitChildren(this);
}

TParser::Attribute_valueContext* TParser::attribute_value() {
  Attribute_valueContext *_localctx = _tracker.createInstance<Attribute_valueContext>(_ctx, getState());
  enterRule(_localctx, 12, TParser::RuleAttribute_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::SYM_AND:
      case TParser::SYM_OR:
      case TParser::SYM_NOT:
      case TParser::SYM_BOOL:
      case TParser::SYM_CONTINUED_EXECUTION:
      case TParser::SYM_ERROR:
      case TParser::SYM_FALSE:
      case TParser::SYM_IMMEDIATE_EXIT:
      case TParser::SYM_INCOMPLETE:
      case TParser::SYM_LOGIC:
      case TParser::SYM_MEMOUT:
      case TParser::SYM_SAT:
      case TParser::SYM_SUCCESS:
      case TParser::SYM_THEORY:
      case TParser::SYM_TRUE:
      case TParser::SYM_UNKNOWN:
      case TParser::SYM_UNSAT:
      case TParser::SYM_UNSUPPORTED:
      case TParser::SIMPLE_SYM:
      case TParser::QUOTED_SYM: {
        enterOuterAlt(_localctx, 1);
        setState(126);
        symbol();
        break;
      }

      case TParser::NUMERAL:
      case TParser::DECIMAL:
      case TParser::HEXADECIMAL:
      case TParser::BINARY:
      case TParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(127);
        spec_constant();
        break;
      }

      case TParser::OpenPar: {
        enterOuterAlt(_localctx, 3);
        setState(128);
        match(TParser::OpenPar);
        setState(132);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
          | (1ULL << TParser::SYM_OR)
          | (1ULL << TParser::SYM_NOT)
          | (1ULL << TParser::SYM_BOOL)
          | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
          | (1ULL << TParser::SYM_ERROR)
          | (1ULL << TParser::SYM_FALSE)
          | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
          | (1ULL << TParser::SYM_INCOMPLETE)
          | (1ULL << TParser::SYM_LOGIC)
          | (1ULL << TParser::SYM_MEMOUT)
          | (1ULL << TParser::SYM_SAT)
          | (1ULL << TParser::SYM_SUCCESS)
          | (1ULL << TParser::SYM_THEORY)
          | (1ULL << TParser::SYM_TRUE)
          | (1ULL << TParser::SYM_UNKNOWN)
          | (1ULL << TParser::SYM_UNSAT)
          | (1ULL << TParser::SYM_UNSUPPORTED)
          | (1ULL << TParser::KEYWORD_ALL_STATISTICS)
          | (1ULL << TParser::KEYWORD_AUTHORS)
          | (1ULL << TParser::KEYWORD_AXIOMS)
          | (1ULL << TParser::KEYWORD_CHAINABLE)
          | (1ULL << TParser::KEYWORD_DEFINITION)
          | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
          | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
          | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
          | (1ULL << TParser::KEYWORD_EXTENSIONS)
          | (1ULL << TParser::KEYWORD_FUNS)
          | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
          | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
          | (1ULL << TParser::KEYWORD_LANGUAGE)
          | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
          | (1ULL << TParser::KEYWORD_NAME)
          | (1ULL << TParser::KEYWORD_NAMED)
          | (1ULL << TParser::KEYWORD_NOTES)
          | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
          | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
          | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
          | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
          | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
          | (1ULL << TParser::KEYWORD_RANDOM_SEED)
          | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
          | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
          | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
          | (1ULL << TParser::KEYWORD_SORTS)
          | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
          | (1ULL << TParser::KEYWORD_STATUS)
          | (1ULL << TParser::KEYWORD_THEORIES)
          | (1ULL << TParser::KEYWORD_VALUES)
          | (1ULL << TParser::KEYWORD_VERBOSITY)
          | (1ULL << TParser::KEYWORD_VERSION))) != 0) || ((((_la - 82) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 82)) & ((1ULL << (TParser::NUMERAL - 82))
          | (1ULL << (TParser::DECIMAL - 82))
          | (1ULL << (TParser::HEXADECIMAL - 82))
          | (1ULL << (TParser::BINARY - 82))
          | (1ULL << (TParser::STRING - 82))
          | (1ULL << (TParser::SIMPLE_SYM - 82))
          | (1ULL << (TParser::QUOTED_SYM - 82))
          | (1ULL << (TParser::KEYWORD_TOKEN - 82))
          | (1ULL << (TParser::OpenPar - 82)))) != 0)) {
          setState(129);
          s_expr();
          setState(134);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(135);
        match(TParser::ClosePar);
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

//----------------- AttributeContext ------------------------------------------------------------------

TParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::KeywordContext* TParser::AttributeContext::keyword() {
  return getRuleContext<TParser::KeywordContext>(0);
}

TParser::Attribute_valueContext* TParser::AttributeContext::attribute_value() {
  return getRuleContext<TParser::Attribute_valueContext>(0);
}


size_t TParser::AttributeContext::getRuleIndex() const {
  return TParser::RuleAttribute;
}

void TParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void TParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}


antlrcpp::Any TParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

TParser::AttributeContext* TParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 14, TParser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      keyword();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(139);
      keyword();
      setState(140);
      attribute_value();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Qual_identifierContext ------------------------------------------------------------------

TParser::Qual_identifierContext::Qual_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::IdentifierContext* TParser::Qual_identifierContext::identifier() {
  return getRuleContext<TParser::IdentifierContext>(0);
}

tree::TerminalNode* TParser::Qual_identifierContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Qual_identifierContext::TOKEN_AS() {
  return getToken(TParser::TOKEN_AS, 0);
}

TParser::SortContext* TParser::Qual_identifierContext::sort() {
  return getRuleContext<TParser::SortContext>(0);
}

tree::TerminalNode* TParser::Qual_identifierContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}


size_t TParser::Qual_identifierContext::getRuleIndex() const {
  return TParser::RuleQual_identifier;
}

void TParser::Qual_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQual_identifier(this);
}

void TParser::Qual_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQual_identifier(this);
}


antlrcpp::Any TParser::Qual_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitQual_identifier(this);
  else
    return visitor->visitChildren(this);
}

TParser::Qual_identifierContext* TParser::qual_identifier() {
  Qual_identifierContext *_localctx = _tracker.createInstance<Qual_identifierContext>(_ctx, getState());
  enterRule(_localctx, 16, TParser::RuleQual_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(144);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      match(TParser::OpenPar);
      setState(146);
      match(TParser::TOKEN_AS);
      setState(147);
      identifier();
      setState(148);
      sort();
      setState(149);
      match(TParser::ClosePar);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_bindingContext ------------------------------------------------------------------

TParser::Var_bindingContext::Var_bindingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Var_bindingContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

TParser::SymbolContext* TParser::Var_bindingContext::symbol() {
  return getRuleContext<TParser::SymbolContext>(0);
}

TParser::TermContext* TParser::Var_bindingContext::term() {
  return getRuleContext<TParser::TermContext>(0);
}

tree::TerminalNode* TParser::Var_bindingContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}


size_t TParser::Var_bindingContext::getRuleIndex() const {
  return TParser::RuleVar_binding;
}

void TParser::Var_bindingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_binding(this);
}

void TParser::Var_bindingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_binding(this);
}


antlrcpp::Any TParser::Var_bindingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitVar_binding(this);
  else
    return visitor->visitChildren(this);
}

TParser::Var_bindingContext* TParser::var_binding() {
  Var_bindingContext *_localctx = _tracker.createInstance<Var_bindingContext>(_ctx, getState());
  enterRule(_localctx, 18, TParser::RuleVar_binding);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(TParser::OpenPar);
    setState(154);
    symbol();
    setState(155);
    term();
    setState(156);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sorted_varContext ------------------------------------------------------------------

TParser::Sorted_varContext::Sorted_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Sorted_varContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

TParser::SymbolContext* TParser::Sorted_varContext::symbol() {
  return getRuleContext<TParser::SymbolContext>(0);
}

TParser::SortContext* TParser::Sorted_varContext::sort() {
  return getRuleContext<TParser::SortContext>(0);
}

tree::TerminalNode* TParser::Sorted_varContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}


size_t TParser::Sorted_varContext::getRuleIndex() const {
  return TParser::RuleSorted_var;
}

void TParser::Sorted_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSorted_var(this);
}

void TParser::Sorted_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSorted_var(this);
}


antlrcpp::Any TParser::Sorted_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitSorted_var(this);
  else
    return visitor->visitChildren(this);
}

TParser::Sorted_varContext* TParser::sorted_var() {
  Sorted_varContext *_localctx = _tracker.createInstance<Sorted_varContext>(_ctx, getState());
  enterRule(_localctx, 20, TParser::RuleSorted_var);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(TParser::OpenPar);
    setState(159);
    symbol();
    setState(160);
    sort();
    setState(161);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

TParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::Spec_constantContext* TParser::TermContext::spec_constant() {
  return getRuleContext<TParser::Spec_constantContext>(0);
}

TParser::Qual_identifierContext* TParser::TermContext::qual_identifier() {
  return getRuleContext<TParser::Qual_identifierContext>(0);
}

std::vector<tree::TerminalNode *> TParser::TermContext::OpenPar() {
  return getTokens(TParser::OpenPar);
}

tree::TerminalNode* TParser::TermContext::OpenPar(size_t i) {
  return getToken(TParser::OpenPar, i);
}

std::vector<tree::TerminalNode *> TParser::TermContext::ClosePar() {
  return getTokens(TParser::ClosePar);
}

tree::TerminalNode* TParser::TermContext::ClosePar(size_t i) {
  return getToken(TParser::ClosePar, i);
}

std::vector<TParser::TermContext *> TParser::TermContext::term() {
  return getRuleContexts<TParser::TermContext>();
}

TParser::TermContext* TParser::TermContext::term(size_t i) {
  return getRuleContext<TParser::TermContext>(i);
}

tree::TerminalNode* TParser::TermContext::TOKEN_LET() {
  return getToken(TParser::TOKEN_LET, 0);
}

std::vector<TParser::Var_bindingContext *> TParser::TermContext::var_binding() {
  return getRuleContexts<TParser::Var_bindingContext>();
}

TParser::Var_bindingContext* TParser::TermContext::var_binding(size_t i) {
  return getRuleContext<TParser::Var_bindingContext>(i);
}

tree::TerminalNode* TParser::TermContext::TOKEN_FORALL() {
  return getToken(TParser::TOKEN_FORALL, 0);
}

std::vector<TParser::Sorted_varContext *> TParser::TermContext::sorted_var() {
  return getRuleContexts<TParser::Sorted_varContext>();
}

TParser::Sorted_varContext* TParser::TermContext::sorted_var(size_t i) {
  return getRuleContext<TParser::Sorted_varContext>(i);
}

tree::TerminalNode* TParser::TermContext::TOKEN_EXISTS() {
  return getToken(TParser::TOKEN_EXISTS, 0);
}

tree::TerminalNode* TParser::TermContext::TOKEN_BANG() {
  return getToken(TParser::TOKEN_BANG, 0);
}

std::vector<TParser::AttributeContext *> TParser::TermContext::attribute() {
  return getRuleContexts<TParser::AttributeContext>();
}

TParser::AttributeContext* TParser::TermContext::attribute(size_t i) {
  return getRuleContext<TParser::AttributeContext>(i);
}


size_t TParser::TermContext::getRuleIndex() const {
  return TParser::RuleTerm;
}

void TParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void TParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


antlrcpp::Any TParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

TParser::TermContext* TParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 22, TParser::RuleTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(163);
      spec_constant();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(164);
      qual_identifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(165);
      match(TParser::OpenPar);
      setState(166);
      qual_identifier();
      setState(168); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(167);
        term();
        setState(170); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || ((((_la - 82) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 82)) & ((1ULL << (TParser::NUMERAL - 82))
        | (1ULL << (TParser::DECIMAL - 82))
        | (1ULL << (TParser::HEXADECIMAL - 82))
        | (1ULL << (TParser::BINARY - 82))
        | (1ULL << (TParser::STRING - 82))
        | (1ULL << (TParser::SIMPLE_SYM - 82))
        | (1ULL << (TParser::QUOTED_SYM - 82))
        | (1ULL << (TParser::OpenPar - 82)))) != 0));
      setState(172);
      match(TParser::ClosePar);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(174);
      match(TParser::OpenPar);
      setState(175);
      match(TParser::TOKEN_LET);
      setState(176);
      match(TParser::OpenPar);
      setState(178); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(177);
        var_binding();
        setState(180); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TParser::OpenPar);
      setState(182);
      match(TParser::ClosePar);
      setState(183);
      term();
      setState(184);
      match(TParser::ClosePar);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(186);
      match(TParser::OpenPar);
      setState(187);
      match(TParser::TOKEN_FORALL);
      setState(188);
      match(TParser::OpenPar);
      setState(190); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(189);
        sorted_var();
        setState(192); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TParser::OpenPar);
      setState(194);
      match(TParser::ClosePar);
      setState(195);
      term();
      setState(196);
      match(TParser::ClosePar);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(198);
      match(TParser::OpenPar);
      setState(199);
      match(TParser::TOKEN_EXISTS);
      setState(200);
      match(TParser::OpenPar);
      setState(202); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(201);
        sorted_var();
        setState(204); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TParser::OpenPar);
      setState(206);
      match(TParser::ClosePar);
      setState(207);
      term();
      setState(208);
      match(TParser::ClosePar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(210);
      match(TParser::OpenPar);
      setState(211);
      match(TParser::TOKEN_BANG);
      setState(212);
      term();
      setState(214); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(213);
        attribute();
        setState(216); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
        | (1ULL << TParser::KEYWORD_AUTHORS)
        | (1ULL << TParser::KEYWORD_AXIOMS)
        | (1ULL << TParser::KEYWORD_CHAINABLE)
        | (1ULL << TParser::KEYWORD_DEFINITION)
        | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
        | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
        | (1ULL << TParser::KEYWORD_EXTENSIONS)
        | (1ULL << TParser::KEYWORD_FUNS)
        | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
        | (1ULL << TParser::KEYWORD_LANGUAGE)
        | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
        | (1ULL << TParser::KEYWORD_NAME)
        | (1ULL << TParser::KEYWORD_NAMED)
        | (1ULL << TParser::KEYWORD_NOTES)
        | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
        | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
        | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
        | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
        | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
        | (1ULL << TParser::KEYWORD_RANDOM_SEED)
        | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
        | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
        | (1ULL << TParser::KEYWORD_SORTS)
        | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_STATUS)
        | (1ULL << TParser::KEYWORD_THEORIES)
        | (1ULL << TParser::KEYWORD_VALUES)
        | (1ULL << TParser::KEYWORD_VERBOSITY)
        | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN);
      setState(218);
      match(TParser::ClosePar);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sort_symbol_declContext ------------------------------------------------------------------

TParser::Sort_symbol_declContext::Sort_symbol_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Sort_symbol_declContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

TParser::IdentifierContext* TParser::Sort_symbol_declContext::identifier() {
  return getRuleContext<TParser::IdentifierContext>(0);
}

tree::TerminalNode* TParser::Sort_symbol_declContext::NUMERAL() {
  return getToken(TParser::NUMERAL, 0);
}

tree::TerminalNode* TParser::Sort_symbol_declContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::AttributeContext *> TParser::Sort_symbol_declContext::attribute() {
  return getRuleContexts<TParser::AttributeContext>();
}

TParser::AttributeContext* TParser::Sort_symbol_declContext::attribute(size_t i) {
  return getRuleContext<TParser::AttributeContext>(i);
}


size_t TParser::Sort_symbol_declContext::getRuleIndex() const {
  return TParser::RuleSort_symbol_decl;
}

void TParser::Sort_symbol_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSort_symbol_decl(this);
}

void TParser::Sort_symbol_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSort_symbol_decl(this);
}


antlrcpp::Any TParser::Sort_symbol_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitSort_symbol_decl(this);
  else
    return visitor->visitChildren(this);
}

TParser::Sort_symbol_declContext* TParser::sort_symbol_decl() {
  Sort_symbol_declContext *_localctx = _tracker.createInstance<Sort_symbol_declContext>(_ctx, getState());
  enterRule(_localctx, 24, TParser::RuleSort_symbol_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(TParser::OpenPar);
    setState(223);
    identifier();
    setState(224);
    match(TParser::NUMERAL);
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
      | (1ULL << TParser::KEYWORD_AUTHORS)
      | (1ULL << TParser::KEYWORD_AXIOMS)
      | (1ULL << TParser::KEYWORD_CHAINABLE)
      | (1ULL << TParser::KEYWORD_DEFINITION)
      | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
      | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
      | (1ULL << TParser::KEYWORD_EXTENSIONS)
      | (1ULL << TParser::KEYWORD_FUNS)
      | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
      | (1ULL << TParser::KEYWORD_LANGUAGE)
      | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
      | (1ULL << TParser::KEYWORD_NAME)
      | (1ULL << TParser::KEYWORD_NAMED)
      | (1ULL << TParser::KEYWORD_NOTES)
      | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
      | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
      | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
      | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
      | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
      | (1ULL << TParser::KEYWORD_RANDOM_SEED)
      | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
      | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
      | (1ULL << TParser::KEYWORD_SORTS)
      | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_STATUS)
      | (1ULL << TParser::KEYWORD_THEORIES)
      | (1ULL << TParser::KEYWORD_VALUES)
      | (1ULL << TParser::KEYWORD_VERBOSITY)
      | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN) {
      setState(225);
      attribute();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(231);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Meta_spec_constantContext ------------------------------------------------------------------

TParser::Meta_spec_constantContext::Meta_spec_constantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Meta_spec_constantContext::TOKEN_NUMERAL() {
  return getToken(TParser::TOKEN_NUMERAL, 0);
}

tree::TerminalNode* TParser::Meta_spec_constantContext::TOKEN_DECIMAL() {
  return getToken(TParser::TOKEN_DECIMAL, 0);
}

tree::TerminalNode* TParser::Meta_spec_constantContext::TOKEN_STRING() {
  return getToken(TParser::TOKEN_STRING, 0);
}


size_t TParser::Meta_spec_constantContext::getRuleIndex() const {
  return TParser::RuleMeta_spec_constant;
}

void TParser::Meta_spec_constantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeta_spec_constant(this);
}

void TParser::Meta_spec_constantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeta_spec_constant(this);
}


antlrcpp::Any TParser::Meta_spec_constantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitMeta_spec_constant(this);
  else
    return visitor->visitChildren(this);
}

TParser::Meta_spec_constantContext* TParser::meta_spec_constant() {
  Meta_spec_constantContext *_localctx = _tracker.createInstance<Meta_spec_constantContext>(_ctx, getState());
  enterRule(_localctx, 26, TParser::RuleMeta_spec_constant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::TOKEN_DECIMAL)
      | (1ULL << TParser::TOKEN_NUMERAL)
      | (1ULL << TParser::TOKEN_STRING))) != 0))) {
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

//----------------- Fun_symbol_declContext ------------------------------------------------------------------

TParser::Fun_symbol_declContext::Fun_symbol_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Fun_symbol_declContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

TParser::Spec_constantContext* TParser::Fun_symbol_declContext::spec_constant() {
  return getRuleContext<TParser::Spec_constantContext>(0);
}

std::vector<TParser::SortContext *> TParser::Fun_symbol_declContext::sort() {
  return getRuleContexts<TParser::SortContext>();
}

TParser::SortContext* TParser::Fun_symbol_declContext::sort(size_t i) {
  return getRuleContext<TParser::SortContext>(i);
}

tree::TerminalNode* TParser::Fun_symbol_declContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::AttributeContext *> TParser::Fun_symbol_declContext::attribute() {
  return getRuleContexts<TParser::AttributeContext>();
}

TParser::AttributeContext* TParser::Fun_symbol_declContext::attribute(size_t i) {
  return getRuleContext<TParser::AttributeContext>(i);
}

TParser::Meta_spec_constantContext* TParser::Fun_symbol_declContext::meta_spec_constant() {
  return getRuleContext<TParser::Meta_spec_constantContext>(0);
}

TParser::IdentifierContext* TParser::Fun_symbol_declContext::identifier() {
  return getRuleContext<TParser::IdentifierContext>(0);
}


size_t TParser::Fun_symbol_declContext::getRuleIndex() const {
  return TParser::RuleFun_symbol_decl;
}

void TParser::Fun_symbol_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFun_symbol_decl(this);
}

void TParser::Fun_symbol_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFun_symbol_decl(this);
}


antlrcpp::Any TParser::Fun_symbol_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFun_symbol_decl(this);
  else
    return visitor->visitChildren(this);
}

TParser::Fun_symbol_declContext* TParser::fun_symbol_decl() {
  Fun_symbol_declContext *_localctx = _tracker.createInstance<Fun_symbol_declContext>(_ctx, getState());
  enterRule(_localctx, 28, TParser::RuleFun_symbol_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(272);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(235);
      match(TParser::OpenPar);
      setState(236);
      spec_constant();
      setState(237);
      sort();
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
        | (1ULL << TParser::KEYWORD_AUTHORS)
        | (1ULL << TParser::KEYWORD_AXIOMS)
        | (1ULL << TParser::KEYWORD_CHAINABLE)
        | (1ULL << TParser::KEYWORD_DEFINITION)
        | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
        | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
        | (1ULL << TParser::KEYWORD_EXTENSIONS)
        | (1ULL << TParser::KEYWORD_FUNS)
        | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
        | (1ULL << TParser::KEYWORD_LANGUAGE)
        | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
        | (1ULL << TParser::KEYWORD_NAME)
        | (1ULL << TParser::KEYWORD_NAMED)
        | (1ULL << TParser::KEYWORD_NOTES)
        | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
        | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
        | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
        | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
        | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
        | (1ULL << TParser::KEYWORD_RANDOM_SEED)
        | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
        | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
        | (1ULL << TParser::KEYWORD_SORTS)
        | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_STATUS)
        | (1ULL << TParser::KEYWORD_THEORIES)
        | (1ULL << TParser::KEYWORD_VALUES)
        | (1ULL << TParser::KEYWORD_VERBOSITY)
        | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN) {
        setState(238);
        attribute();
        setState(243);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(244);
      match(TParser::ClosePar);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(246);
      match(TParser::OpenPar);
      setState(247);
      meta_spec_constant();
      setState(248);
      sort();
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
        | (1ULL << TParser::KEYWORD_AUTHORS)
        | (1ULL << TParser::KEYWORD_AXIOMS)
        | (1ULL << TParser::KEYWORD_CHAINABLE)
        | (1ULL << TParser::KEYWORD_DEFINITION)
        | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
        | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
        | (1ULL << TParser::KEYWORD_EXTENSIONS)
        | (1ULL << TParser::KEYWORD_FUNS)
        | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
        | (1ULL << TParser::KEYWORD_LANGUAGE)
        | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
        | (1ULL << TParser::KEYWORD_NAME)
        | (1ULL << TParser::KEYWORD_NAMED)
        | (1ULL << TParser::KEYWORD_NOTES)
        | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
        | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
        | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
        | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
        | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
        | (1ULL << TParser::KEYWORD_RANDOM_SEED)
        | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
        | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
        | (1ULL << TParser::KEYWORD_SORTS)
        | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_STATUS)
        | (1ULL << TParser::KEYWORD_THEORIES)
        | (1ULL << TParser::KEYWORD_VALUES)
        | (1ULL << TParser::KEYWORD_VERBOSITY)
        | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN) {
        setState(249);
        attribute();
        setState(254);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(255);
      match(TParser::ClosePar);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(257);
      match(TParser::OpenPar);
      setState(258);
      identifier();
      setState(260); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(259);
        sort();
        setState(262); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || ((((_la - 88) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 88)) & ((1ULL << (TParser::SIMPLE_SYM - 88))
        | (1ULL << (TParser::QUOTED_SYM - 88))
        | (1ULL << (TParser::OpenPar - 88)))) != 0));
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
        | (1ULL << TParser::KEYWORD_AUTHORS)
        | (1ULL << TParser::KEYWORD_AXIOMS)
        | (1ULL << TParser::KEYWORD_CHAINABLE)
        | (1ULL << TParser::KEYWORD_DEFINITION)
        | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
        | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
        | (1ULL << TParser::KEYWORD_EXTENSIONS)
        | (1ULL << TParser::KEYWORD_FUNS)
        | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
        | (1ULL << TParser::KEYWORD_LANGUAGE)
        | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
        | (1ULL << TParser::KEYWORD_NAME)
        | (1ULL << TParser::KEYWORD_NAMED)
        | (1ULL << TParser::KEYWORD_NOTES)
        | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
        | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
        | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
        | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
        | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
        | (1ULL << TParser::KEYWORD_RANDOM_SEED)
        | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
        | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
        | (1ULL << TParser::KEYWORD_SORTS)
        | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_STATUS)
        | (1ULL << TParser::KEYWORD_THEORIES)
        | (1ULL << TParser::KEYWORD_VALUES)
        | (1ULL << TParser::KEYWORD_VERBOSITY)
        | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN) {
        setState(264);
        attribute();
        setState(269);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(270);
      match(TParser::ClosePar);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Par_fun_symbol_declContext ------------------------------------------------------------------

TParser::Par_fun_symbol_declContext::Par_fun_symbol_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::Fun_symbol_declContext* TParser::Par_fun_symbol_declContext::fun_symbol_decl() {
  return getRuleContext<TParser::Fun_symbol_declContext>(0);
}

std::vector<tree::TerminalNode *> TParser::Par_fun_symbol_declContext::OpenPar() {
  return getTokens(TParser::OpenPar);
}

tree::TerminalNode* TParser::Par_fun_symbol_declContext::OpenPar(size_t i) {
  return getToken(TParser::OpenPar, i);
}

tree::TerminalNode* TParser::Par_fun_symbol_declContext::TOKEN_PAR() {
  return getToken(TParser::TOKEN_PAR, 0);
}

std::vector<tree::TerminalNode *> TParser::Par_fun_symbol_declContext::ClosePar() {
  return getTokens(TParser::ClosePar);
}

tree::TerminalNode* TParser::Par_fun_symbol_declContext::ClosePar(size_t i) {
  return getToken(TParser::ClosePar, i);
}

TParser::IdentifierContext* TParser::Par_fun_symbol_declContext::identifier() {
  return getRuleContext<TParser::IdentifierContext>(0);
}

std::vector<TParser::SymbolContext *> TParser::Par_fun_symbol_declContext::symbol() {
  return getRuleContexts<TParser::SymbolContext>();
}

TParser::SymbolContext* TParser::Par_fun_symbol_declContext::symbol(size_t i) {
  return getRuleContext<TParser::SymbolContext>(i);
}

std::vector<TParser::SortContext *> TParser::Par_fun_symbol_declContext::sort() {
  return getRuleContexts<TParser::SortContext>();
}

TParser::SortContext* TParser::Par_fun_symbol_declContext::sort(size_t i) {
  return getRuleContext<TParser::SortContext>(i);
}

std::vector<TParser::AttributeContext *> TParser::Par_fun_symbol_declContext::attribute() {
  return getRuleContexts<TParser::AttributeContext>();
}

TParser::AttributeContext* TParser::Par_fun_symbol_declContext::attribute(size_t i) {
  return getRuleContext<TParser::AttributeContext>(i);
}


size_t TParser::Par_fun_symbol_declContext::getRuleIndex() const {
  return TParser::RulePar_fun_symbol_decl;
}

void TParser::Par_fun_symbol_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPar_fun_symbol_decl(this);
}

void TParser::Par_fun_symbol_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPar_fun_symbol_decl(this);
}


antlrcpp::Any TParser::Par_fun_symbol_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitPar_fun_symbol_decl(this);
  else
    return visitor->visitChildren(this);
}

TParser::Par_fun_symbol_declContext* TParser::par_fun_symbol_decl() {
  Par_fun_symbol_declContext *_localctx = _tracker.createInstance<Par_fun_symbol_declContext>(_ctx, getState());
  enterRule(_localctx, 30, TParser::RulePar_fun_symbol_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(274);
      fun_symbol_decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(275);
      match(TParser::OpenPar);
      setState(276);
      match(TParser::TOKEN_PAR);
      setState(277);
      match(TParser::OpenPar);
      setState(279); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(278);
        symbol();
        setState(281); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || _la == TParser::SIMPLE_SYM

      || _la == TParser::QUOTED_SYM);
      setState(283);
      match(TParser::ClosePar);
      setState(284);
      match(TParser::OpenPar);
      setState(285);
      identifier();
      setState(287); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(286);
        sort();
        setState(289); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || ((((_la - 88) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 88)) & ((1ULL << (TParser::SIMPLE_SYM - 88))
        | (1ULL << (TParser::QUOTED_SYM - 88))
        | (1ULL << (TParser::OpenPar - 88)))) != 0));
      setState(294);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
        | (1ULL << TParser::KEYWORD_AUTHORS)
        | (1ULL << TParser::KEYWORD_AXIOMS)
        | (1ULL << TParser::KEYWORD_CHAINABLE)
        | (1ULL << TParser::KEYWORD_DEFINITION)
        | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
        | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
        | (1ULL << TParser::KEYWORD_EXTENSIONS)
        | (1ULL << TParser::KEYWORD_FUNS)
        | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
        | (1ULL << TParser::KEYWORD_LANGUAGE)
        | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
        | (1ULL << TParser::KEYWORD_NAME)
        | (1ULL << TParser::KEYWORD_NAMED)
        | (1ULL << TParser::KEYWORD_NOTES)
        | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
        | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
        | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
        | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
        | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
        | (1ULL << TParser::KEYWORD_RANDOM_SEED)
        | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
        | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
        | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
        | (1ULL << TParser::KEYWORD_SORTS)
        | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
        | (1ULL << TParser::KEYWORD_STATUS)
        | (1ULL << TParser::KEYWORD_THEORIES)
        | (1ULL << TParser::KEYWORD_VALUES)
        | (1ULL << TParser::KEYWORD_VERBOSITY)
        | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN) {
        setState(291);
        attribute();
        setState(296);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(297);
      match(TParser::ClosePar);
      setState(298);
      match(TParser::ClosePar);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Theory_declContext ------------------------------------------------------------------

TParser::Theory_declContext::Theory_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Theory_declContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Theory_declContext::SYM_THEORY() {
  return getToken(TParser::SYM_THEORY, 0);
}

tree::TerminalNode* TParser::Theory_declContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

TParser::SymbolContext* TParser::Theory_declContext::symbol() {
  return getRuleContext<TParser::SymbolContext>(0);
}

std::vector<TParser::Theory_attributeContext *> TParser::Theory_declContext::theory_attribute() {
  return getRuleContexts<TParser::Theory_attributeContext>();
}

TParser::Theory_attributeContext* TParser::Theory_declContext::theory_attribute(size_t i) {
  return getRuleContext<TParser::Theory_attributeContext>(i);
}


size_t TParser::Theory_declContext::getRuleIndex() const {
  return TParser::RuleTheory_decl;
}

void TParser::Theory_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheory_decl(this);
}

void TParser::Theory_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheory_decl(this);
}


antlrcpp::Any TParser::Theory_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitTheory_decl(this);
  else
    return visitor->visitChildren(this);
}

TParser::Theory_declContext* TParser::theory_decl() {
  Theory_declContext *_localctx = _tracker.createInstance<Theory_declContext>(_ctx, getState());
  enterRule(_localctx, 32, TParser::RuleTheory_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(TParser::OpenPar);
    setState(303);
    match(TParser::SYM_THEORY);
    setState(305);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
      | (1ULL << TParser::SYM_OR)
      | (1ULL << TParser::SYM_NOT)
      | (1ULL << TParser::SYM_BOOL)
      | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
      | (1ULL << TParser::SYM_ERROR)
      | (1ULL << TParser::SYM_FALSE)
      | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
      | (1ULL << TParser::SYM_INCOMPLETE)
      | (1ULL << TParser::SYM_LOGIC)
      | (1ULL << TParser::SYM_MEMOUT)
      | (1ULL << TParser::SYM_SAT)
      | (1ULL << TParser::SYM_SUCCESS)
      | (1ULL << TParser::SYM_THEORY)
      | (1ULL << TParser::SYM_TRUE)
      | (1ULL << TParser::SYM_UNKNOWN)
      | (1ULL << TParser::SYM_UNSAT)
      | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || _la == TParser::SIMPLE_SYM

    || _la == TParser::QUOTED_SYM) {
      setState(304);
      symbol();
    }
    setState(308); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(307);
      theory_attribute();
      setState(310); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
      | (1ULL << TParser::KEYWORD_AUTHORS)
      | (1ULL << TParser::KEYWORD_AXIOMS)
      | (1ULL << TParser::KEYWORD_CHAINABLE)
      | (1ULL << TParser::KEYWORD_DEFINITION)
      | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
      | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
      | (1ULL << TParser::KEYWORD_EXTENSIONS)
      | (1ULL << TParser::KEYWORD_FUNS)
      | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
      | (1ULL << TParser::KEYWORD_LANGUAGE)
      | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
      | (1ULL << TParser::KEYWORD_NAME)
      | (1ULL << TParser::KEYWORD_NAMED)
      | (1ULL << TParser::KEYWORD_NOTES)
      | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
      | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
      | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
      | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
      | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
      | (1ULL << TParser::KEYWORD_RANDOM_SEED)
      | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
      | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
      | (1ULL << TParser::KEYWORD_SORTS)
      | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_STATUS)
      | (1ULL << TParser::KEYWORD_THEORIES)
      | (1ULL << TParser::KEYWORD_VALUES)
      | (1ULL << TParser::KEYWORD_VERBOSITY)
      | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN);
    setState(312);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Theory_attributeContext ------------------------------------------------------------------

TParser::Theory_attributeContext::Theory_attributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Theory_attributeContext::KEYWORD_SORTS() {
  return getToken(TParser::KEYWORD_SORTS, 0);
}

tree::TerminalNode* TParser::Theory_attributeContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Theory_attributeContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::Sort_symbol_declContext *> TParser::Theory_attributeContext::sort_symbol_decl() {
  return getRuleContexts<TParser::Sort_symbol_declContext>();
}

TParser::Sort_symbol_declContext* TParser::Theory_attributeContext::sort_symbol_decl(size_t i) {
  return getRuleContext<TParser::Sort_symbol_declContext>(i);
}

tree::TerminalNode* TParser::Theory_attributeContext::KEYWORD_FUNS() {
  return getToken(TParser::KEYWORD_FUNS, 0);
}

std::vector<TParser::Par_fun_symbol_declContext *> TParser::Theory_attributeContext::par_fun_symbol_decl() {
  return getRuleContexts<TParser::Par_fun_symbol_declContext>();
}

TParser::Par_fun_symbol_declContext* TParser::Theory_attributeContext::par_fun_symbol_decl(size_t i) {
  return getRuleContext<TParser::Par_fun_symbol_declContext>(i);
}

tree::TerminalNode* TParser::Theory_attributeContext::KEYWORD_SORTS_DESCRIPTION() {
  return getToken(TParser::KEYWORD_SORTS_DESCRIPTION, 0);
}

tree::TerminalNode* TParser::Theory_attributeContext::STRING() {
  return getToken(TParser::STRING, 0);
}

tree::TerminalNode* TParser::Theory_attributeContext::KEYWORD_FUNS_DESCRIPTION() {
  return getToken(TParser::KEYWORD_FUNS_DESCRIPTION, 0);
}

tree::TerminalNode* TParser::Theory_attributeContext::KEYWORD_DEFINITION() {
  return getToken(TParser::KEYWORD_DEFINITION, 0);
}

tree::TerminalNode* TParser::Theory_attributeContext::KEYWORD_VALUES() {
  return getToken(TParser::KEYWORD_VALUES, 0);
}

tree::TerminalNode* TParser::Theory_attributeContext::KEYWORD_NOTES() {
  return getToken(TParser::KEYWORD_NOTES, 0);
}

TParser::AttributeContext* TParser::Theory_attributeContext::attribute() {
  return getRuleContext<TParser::AttributeContext>(0);
}


size_t TParser::Theory_attributeContext::getRuleIndex() const {
  return TParser::RuleTheory_attribute;
}

void TParser::Theory_attributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheory_attribute(this);
}

void TParser::Theory_attributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheory_attribute(this);
}


antlrcpp::Any TParser::Theory_attributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitTheory_attribute(this);
  else
    return visitor->visitChildren(this);
}

TParser::Theory_attributeContext* TParser::theory_attribute() {
  Theory_attributeContext *_localctx = _tracker.createInstance<Theory_attributeContext>(_ctx, getState());
  enterRule(_localctx, 34, TParser::RuleTheory_attribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(343);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      match(TParser::KEYWORD_SORTS);
      setState(315);
      match(TParser::OpenPar);
      setState(317); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(316);
        sort_symbol_decl();
        setState(319); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TParser::OpenPar);
      setState(321);
      match(TParser::ClosePar);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(323);
      match(TParser::KEYWORD_FUNS);
      setState(324);
      match(TParser::OpenPar);
      setState(326); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(325);
        par_fun_symbol_decl();
        setState(328); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TParser::OpenPar);
      setState(330);
      match(TParser::ClosePar);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(332);
      match(TParser::KEYWORD_SORTS_DESCRIPTION);
      setState(333);
      match(TParser::STRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(334);
      match(TParser::KEYWORD_FUNS_DESCRIPTION);
      setState(335);
      match(TParser::STRING);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(336);
      match(TParser::KEYWORD_DEFINITION);
      setState(337);
      match(TParser::STRING);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(338);
      match(TParser::KEYWORD_VALUES);
      setState(339);
      match(TParser::STRING);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(340);
      match(TParser::KEYWORD_NOTES);
      setState(341);
      match(TParser::STRING);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(342);
      attribute();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logic_attributeContext ------------------------------------------------------------------

TParser::Logic_attributeContext::Logic_attributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Logic_attributeContext::KEYWORD_THEORIES() {
  return getToken(TParser::KEYWORD_THEORIES, 0);
}

tree::TerminalNode* TParser::Logic_attributeContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Logic_attributeContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::SymbolContext *> TParser::Logic_attributeContext::symbol() {
  return getRuleContexts<TParser::SymbolContext>();
}

TParser::SymbolContext* TParser::Logic_attributeContext::symbol(size_t i) {
  return getRuleContext<TParser::SymbolContext>(i);
}

tree::TerminalNode* TParser::Logic_attributeContext::KEYWORD_LANGUAGE() {
  return getToken(TParser::KEYWORD_LANGUAGE, 0);
}

tree::TerminalNode* TParser::Logic_attributeContext::STRING() {
  return getToken(TParser::STRING, 0);
}

tree::TerminalNode* TParser::Logic_attributeContext::KEYWORD_EXTENSIONS() {
  return getToken(TParser::KEYWORD_EXTENSIONS, 0);
}

tree::TerminalNode* TParser::Logic_attributeContext::KEYWORD_VALUES() {
  return getToken(TParser::KEYWORD_VALUES, 0);
}

tree::TerminalNode* TParser::Logic_attributeContext::KEYWORD_NOTES() {
  return getToken(TParser::KEYWORD_NOTES, 0);
}

TParser::AttributeContext* TParser::Logic_attributeContext::attribute() {
  return getRuleContext<TParser::AttributeContext>(0);
}


size_t TParser::Logic_attributeContext::getRuleIndex() const {
  return TParser::RuleLogic_attribute;
}

void TParser::Logic_attributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic_attribute(this);
}

void TParser::Logic_attributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic_attribute(this);
}


antlrcpp::Any TParser::Logic_attributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLogic_attribute(this);
  else
    return visitor->visitChildren(this);
}

TParser::Logic_attributeContext* TParser::logic_attribute() {
  Logic_attributeContext *_localctx = _tracker.createInstance<Logic_attributeContext>(_ctx, getState());
  enterRule(_localctx, 36, TParser::RuleLogic_attribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(363);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(345);
      match(TParser::KEYWORD_THEORIES);
      setState(346);
      match(TParser::OpenPar);
      setState(348); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(347);
        symbol();
        setState(350); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || _la == TParser::SIMPLE_SYM

      || _la == TParser::QUOTED_SYM);
      setState(352);
      match(TParser::ClosePar);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(354);
      match(TParser::KEYWORD_LANGUAGE);
      setState(355);
      match(TParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(356);
      match(TParser::KEYWORD_EXTENSIONS);
      setState(357);
      match(TParser::STRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(358);
      match(TParser::KEYWORD_VALUES);
      setState(359);
      match(TParser::STRING);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(360);
      match(TParser::KEYWORD_NOTES);
      setState(361);
      match(TParser::STRING);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(362);
      attribute();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicContext ------------------------------------------------------------------

TParser::LogicContext::LogicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::LogicContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::LogicContext::SYM_LOGIC() {
  return getToken(TParser::SYM_LOGIC, 0);
}

TParser::SymbolContext* TParser::LogicContext::symbol() {
  return getRuleContext<TParser::SymbolContext>(0);
}

tree::TerminalNode* TParser::LogicContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::Logic_attributeContext *> TParser::LogicContext::logic_attribute() {
  return getRuleContexts<TParser::Logic_attributeContext>();
}

TParser::Logic_attributeContext* TParser::LogicContext::logic_attribute(size_t i) {
  return getRuleContext<TParser::Logic_attributeContext>(i);
}


size_t TParser::LogicContext::getRuleIndex() const {
  return TParser::RuleLogic;
}

void TParser::LogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic(this);
}

void TParser::LogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic(this);
}


antlrcpp::Any TParser::LogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitLogic(this);
  else
    return visitor->visitChildren(this);
}

TParser::LogicContext* TParser::logic() {
  LogicContext *_localctx = _tracker.createInstance<LogicContext>(_ctx, getState());
  enterRule(_localctx, 38, TParser::RuleLogic);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    match(TParser::OpenPar);
    setState(366);
    match(TParser::SYM_LOGIC);
    setState(367);
    symbol();
    setState(369); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(368);
      logic_attribute();
      setState(371); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
      | (1ULL << TParser::KEYWORD_AUTHORS)
      | (1ULL << TParser::KEYWORD_AXIOMS)
      | (1ULL << TParser::KEYWORD_CHAINABLE)
      | (1ULL << TParser::KEYWORD_DEFINITION)
      | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
      | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
      | (1ULL << TParser::KEYWORD_EXTENSIONS)
      | (1ULL << TParser::KEYWORD_FUNS)
      | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
      | (1ULL << TParser::KEYWORD_LANGUAGE)
      | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
      | (1ULL << TParser::KEYWORD_NAME)
      | (1ULL << TParser::KEYWORD_NAMED)
      | (1ULL << TParser::KEYWORD_NOTES)
      | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
      | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
      | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
      | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
      | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
      | (1ULL << TParser::KEYWORD_RANDOM_SEED)
      | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
      | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
      | (1ULL << TParser::KEYWORD_SORTS)
      | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_STATUS)
      | (1ULL << TParser::KEYWORD_THEORIES)
      | (1ULL << TParser::KEYWORD_VALUES)
      | (1ULL << TParser::KEYWORD_VERBOSITY)
      | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN);
    setState(373);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- B_valueContext ------------------------------------------------------------------

TParser::B_valueContext::B_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::B_valueContext::SYM_TRUE() {
  return getToken(TParser::SYM_TRUE, 0);
}

tree::TerminalNode* TParser::B_valueContext::SYM_FALSE() {
  return getToken(TParser::SYM_FALSE, 0);
}


size_t TParser::B_valueContext::getRuleIndex() const {
  return TParser::RuleB_value;
}

void TParser::B_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterB_value(this);
}

void TParser::B_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitB_value(this);
}


antlrcpp::Any TParser::B_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitB_value(this);
  else
    return visitor->visitChildren(this);
}

TParser::B_valueContext* TParser::b_value() {
  B_valueContext *_localctx = _tracker.createInstance<B_valueContext>(_ctx, getState());
  enterRule(_localctx, 40, TParser::RuleB_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    _la = _input->LA(1);
    if (!(_la == TParser::SYM_FALSE

    || _la == TParser::SYM_TRUE)) {
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

//----------------- OptionContext ------------------------------------------------------------------

TParser::OptionContext::OptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_PRINT_SUCCESS() {
  return getToken(TParser::KEYWORD_PRINT_SUCCESS, 0);
}

TParser::B_valueContext* TParser::OptionContext::b_value() {
  return getRuleContext<TParser::B_valueContext>(0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_EXPAND_DEFINITIONS() {
  return getToken(TParser::KEYWORD_EXPAND_DEFINITIONS, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_INTERACTIVE_MODE() {
  return getToken(TParser::KEYWORD_INTERACTIVE_MODE, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_PRODUCE_PROOFS() {
  return getToken(TParser::KEYWORD_PRODUCE_PROOFS, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_PRODUCE_UNSAT_CORES() {
  return getToken(TParser::KEYWORD_PRODUCE_UNSAT_CORES, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_PRODUCE_MODELS() {
  return getToken(TParser::KEYWORD_PRODUCE_MODELS, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_PRODUCE_ASSIGNMENTS() {
  return getToken(TParser::KEYWORD_PRODUCE_ASSIGNMENTS, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_REGULAR_OUTPUT_CHANNEL() {
  return getToken(TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL, 0);
}

tree::TerminalNode* TParser::OptionContext::STRING() {
  return getToken(TParser::STRING, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL() {
  return getToken(TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_RANDOM_SEED() {
  return getToken(TParser::KEYWORD_RANDOM_SEED, 0);
}

tree::TerminalNode* TParser::OptionContext::NUMERAL() {
  return getToken(TParser::NUMERAL, 0);
}

tree::TerminalNode* TParser::OptionContext::KEYWORD_VERBOSITY() {
  return getToken(TParser::KEYWORD_VERBOSITY, 0);
}

TParser::AttributeContext* TParser::OptionContext::attribute() {
  return getRuleContext<TParser::AttributeContext>(0);
}


size_t TParser::OptionContext::getRuleIndex() const {
  return TParser::RuleOption;
}

void TParser::OptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOption(this);
}

void TParser::OptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOption(this);
}


antlrcpp::Any TParser::OptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitOption(this);
  else
    return visitor->visitChildren(this);
}

TParser::OptionContext* TParser::option() {
  OptionContext *_localctx = _tracker.createInstance<OptionContext>(_ctx, getState());
  enterRule(_localctx, 42, TParser::RuleOption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(400);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(377);
      match(TParser::KEYWORD_PRINT_SUCCESS);
      setState(378);
      b_value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(379);
      match(TParser::KEYWORD_EXPAND_DEFINITIONS);
      setState(380);
      b_value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(381);
      match(TParser::KEYWORD_INTERACTIVE_MODE);
      setState(382);
      b_value();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(383);
      match(TParser::KEYWORD_PRODUCE_PROOFS);
      setState(384);
      b_value();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(385);
      match(TParser::KEYWORD_PRODUCE_UNSAT_CORES);
      setState(386);
      b_value();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(387);
      match(TParser::KEYWORD_PRODUCE_MODELS);
      setState(388);
      b_value();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(389);
      match(TParser::KEYWORD_PRODUCE_ASSIGNMENTS);
      setState(390);
      b_value();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(391);
      match(TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL);
      setState(392);
      match(TParser::STRING);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(393);
      match(TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL);
      setState(394);
      match(TParser::STRING);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(395);
      match(TParser::KEYWORD_RANDOM_SEED);
      setState(396);
      match(TParser::NUMERAL);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(397);
      match(TParser::KEYWORD_VERBOSITY);
      setState(398);
      match(TParser::NUMERAL);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(399);
      attribute();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Info_flagContext ------------------------------------------------------------------

TParser::Info_flagContext::Info_flagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Info_flagContext::KEYWORD_ERROR_BEHAVIOR() {
  return getToken(TParser::KEYWORD_ERROR_BEHAVIOR, 0);
}

tree::TerminalNode* TParser::Info_flagContext::KEYWORD_NAME() {
  return getToken(TParser::KEYWORD_NAME, 0);
}

tree::TerminalNode* TParser::Info_flagContext::KEYWORD_AUTHORS() {
  return getToken(TParser::KEYWORD_AUTHORS, 0);
}

tree::TerminalNode* TParser::Info_flagContext::KEYWORD_VERSION() {
  return getToken(TParser::KEYWORD_VERSION, 0);
}

tree::TerminalNode* TParser::Info_flagContext::KEYWORD_STATUS() {
  return getToken(TParser::KEYWORD_STATUS, 0);
}

tree::TerminalNode* TParser::Info_flagContext::KEYWORD_REASON_UNKNOWN() {
  return getToken(TParser::KEYWORD_REASON_UNKNOWN, 0);
}

TParser::KeywordContext* TParser::Info_flagContext::keyword() {
  return getRuleContext<TParser::KeywordContext>(0);
}

tree::TerminalNode* TParser::Info_flagContext::KEYWORD_ALL_STATISTICS() {
  return getToken(TParser::KEYWORD_ALL_STATISTICS, 0);
}


size_t TParser::Info_flagContext::getRuleIndex() const {
  return TParser::RuleInfo_flag;
}

void TParser::Info_flagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfo_flag(this);
}

void TParser::Info_flagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfo_flag(this);
}


antlrcpp::Any TParser::Info_flagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitInfo_flag(this);
  else
    return visitor->visitChildren(this);
}

TParser::Info_flagContext* TParser::info_flag() {
  Info_flagContext *_localctx = _tracker.createInstance<Info_flagContext>(_ctx, getState());
  enterRule(_localctx, 44, TParser::RuleInfo_flag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(410);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(402);
      match(TParser::KEYWORD_ERROR_BEHAVIOR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(403);
      match(TParser::KEYWORD_NAME);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(404);
      match(TParser::KEYWORD_AUTHORS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(405);
      match(TParser::KEYWORD_VERSION);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(406);
      match(TParser::KEYWORD_STATUS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(407);
      match(TParser::KEYWORD_REASON_UNKNOWN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(408);
      keyword();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(409);
      match(TParser::KEYWORD_ALL_STATISTICS);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

TParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TParser::CommandContext::OpenPar() {
  return getTokens(TParser::OpenPar);
}

tree::TerminalNode* TParser::CommandContext::OpenPar(size_t i) {
  return getToken(TParser::OpenPar, i);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_SET_LOGIC() {
  return getToken(TParser::TOKEN_CMD_SET_LOGIC, 0);
}

std::vector<TParser::SymbolContext *> TParser::CommandContext::symbol() {
  return getRuleContexts<TParser::SymbolContext>();
}

TParser::SymbolContext* TParser::CommandContext::symbol(size_t i) {
  return getRuleContext<TParser::SymbolContext>(i);
}

std::vector<tree::TerminalNode *> TParser::CommandContext::ClosePar() {
  return getTokens(TParser::ClosePar);
}

tree::TerminalNode* TParser::CommandContext::ClosePar(size_t i) {
  return getToken(TParser::ClosePar, i);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_SET_OPTION() {
  return getToken(TParser::TOKEN_CMD_SET_OPTION, 0);
}

TParser::OptionContext* TParser::CommandContext::option() {
  return getRuleContext<TParser::OptionContext>(0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_SET_INFO() {
  return getToken(TParser::TOKEN_CMD_SET_INFO, 0);
}

TParser::AttributeContext* TParser::CommandContext::attribute() {
  return getRuleContext<TParser::AttributeContext>(0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_DECLARE_SORT() {
  return getToken(TParser::TOKEN_CMD_DECLARE_SORT, 0);
}

tree::TerminalNode* TParser::CommandContext::NUMERAL() {
  return getToken(TParser::NUMERAL, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_DEFINE_SORT() {
  return getToken(TParser::TOKEN_CMD_DEFINE_SORT, 0);
}

std::vector<TParser::SortContext *> TParser::CommandContext::sort() {
  return getRuleContexts<TParser::SortContext>();
}

TParser::SortContext* TParser::CommandContext::sort(size_t i) {
  return getRuleContext<TParser::SortContext>(i);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_DECLARE_FUN() {
  return getToken(TParser::TOKEN_CMD_DECLARE_FUN, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_DEFINE_FUN() {
  return getToken(TParser::TOKEN_CMD_DEFINE_FUN, 0);
}

std::vector<TParser::TermContext *> TParser::CommandContext::term() {
  return getRuleContexts<TParser::TermContext>();
}

TParser::TermContext* TParser::CommandContext::term(size_t i) {
  return getRuleContext<TParser::TermContext>(i);
}

std::vector<TParser::Sorted_varContext *> TParser::CommandContext::sorted_var() {
  return getRuleContexts<TParser::Sorted_varContext>();
}

TParser::Sorted_varContext* TParser::CommandContext::sorted_var(size_t i) {
  return getRuleContext<TParser::Sorted_varContext>(i);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_PUSH() {
  return getToken(TParser::TOKEN_CMD_PUSH, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_POP() {
  return getToken(TParser::TOKEN_CMD_POP, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_ASSERT() {
  return getToken(TParser::TOKEN_CMD_ASSERT, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_CHECK_SAT() {
  return getToken(TParser::TOKEN_CMD_CHECK_SAT, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_GET_ASSERTIONS() {
  return getToken(TParser::TOKEN_CMD_GET_ASSERTIONS, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_GET_PROOF() {
  return getToken(TParser::TOKEN_CMD_GET_PROOF, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_GET_UNSAT_CORE() {
  return getToken(TParser::TOKEN_CMD_GET_UNSAT_CORE, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_GET_VALUE() {
  return getToken(TParser::TOKEN_CMD_GET_VALUE, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_GET_ASSIGNMENT() {
  return getToken(TParser::TOKEN_CMD_GET_ASSIGNMENT, 0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_GET_OPTION() {
  return getToken(TParser::TOKEN_CMD_GET_OPTION, 0);
}

TParser::KeywordContext* TParser::CommandContext::keyword() {
  return getRuleContext<TParser::KeywordContext>(0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_GET_INFO() {
  return getToken(TParser::TOKEN_CMD_GET_INFO, 0);
}

TParser::Info_flagContext* TParser::CommandContext::info_flag() {
  return getRuleContext<TParser::Info_flagContext>(0);
}

tree::TerminalNode* TParser::CommandContext::TOKEN_CMD_EXIT() {
  return getToken(TParser::TOKEN_CMD_EXIT, 0);
}


size_t TParser::CommandContext::getRuleIndex() const {
  return TParser::RuleCommand;
}

void TParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void TParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}


antlrcpp::Any TParser::CommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitCommand(this);
  else
    return visitor->visitChildren(this);
}

TParser::CommandContext* TParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 46, TParser::RuleCommand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(528);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(412);
      match(TParser::OpenPar);
      setState(413);
      match(TParser::TOKEN_CMD_SET_LOGIC);
      setState(414);
      symbol();
      setState(415);
      match(TParser::ClosePar);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(417);
      match(TParser::OpenPar);
      setState(418);
      match(TParser::TOKEN_CMD_SET_OPTION);
      setState(419);
      option();
      setState(420);
      match(TParser::ClosePar);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(422);
      match(TParser::OpenPar);
      setState(423);
      match(TParser::TOKEN_CMD_SET_INFO);
      setState(424);
      attribute();
      setState(425);
      match(TParser::ClosePar);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(427);
      match(TParser::OpenPar);
      setState(428);
      match(TParser::TOKEN_CMD_DECLARE_SORT);
      setState(429);
      symbol();
      setState(430);
      match(TParser::NUMERAL);
      setState(431);
      match(TParser::ClosePar);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(433);
      match(TParser::OpenPar);
      setState(434);
      match(TParser::TOKEN_CMD_DEFINE_SORT);
      setState(435);
      symbol();
      setState(436);
      match(TParser::OpenPar);
      setState(440);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || _la == TParser::SIMPLE_SYM

      || _la == TParser::QUOTED_SYM) {
        setState(437);
        symbol();
        setState(442);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(443);
      match(TParser::ClosePar);
      setState(444);
      sort();
      setState(445);
      match(TParser::ClosePar);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(447);
      match(TParser::OpenPar);
      setState(448);
      match(TParser::TOKEN_CMD_DECLARE_FUN);
      setState(449);
      symbol();
      setState(450);
      match(TParser::OpenPar);
      setState(454);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || ((((_la - 88) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 88)) & ((1ULL << (TParser::SIMPLE_SYM - 88))
        | (1ULL << (TParser::QUOTED_SYM - 88))
        | (1ULL << (TParser::OpenPar - 88)))) != 0)) {
        setState(451);
        sort();
        setState(456);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(457);
      match(TParser::ClosePar);
      setState(458);
      sort();
      setState(459);
      match(TParser::ClosePar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(461);
      match(TParser::OpenPar);
      setState(462);
      match(TParser::TOKEN_CMD_DEFINE_FUN);
      setState(463);
      symbol();
      setState(464);
      match(TParser::OpenPar);
      setState(468);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TParser::OpenPar) {
        setState(465);
        sorted_var();
        setState(470);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(471);
      match(TParser::ClosePar);
      setState(472);
      sort();
      setState(473);
      term();
      setState(474);
      match(TParser::ClosePar);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(476);
      match(TParser::OpenPar);
      setState(477);
      match(TParser::TOKEN_CMD_PUSH);
      setState(478);
      match(TParser::NUMERAL);
      setState(479);
      match(TParser::ClosePar);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(480);
      match(TParser::OpenPar);
      setState(481);
      match(TParser::TOKEN_CMD_POP);
      setState(482);
      match(TParser::NUMERAL);
      setState(483);
      match(TParser::ClosePar);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(484);
      match(TParser::OpenPar);
      setState(485);
      match(TParser::TOKEN_CMD_ASSERT);
      setState(486);
      term();
      setState(487);
      match(TParser::ClosePar);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(489);
      match(TParser::OpenPar);
      setState(490);
      match(TParser::TOKEN_CMD_CHECK_SAT);
      setState(491);
      match(TParser::ClosePar);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(492);
      match(TParser::OpenPar);
      setState(493);
      match(TParser::TOKEN_CMD_GET_ASSERTIONS);
      setState(494);
      match(TParser::ClosePar);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(495);
      match(TParser::OpenPar);
      setState(496);
      match(TParser::TOKEN_CMD_GET_PROOF);
      setState(497);
      match(TParser::ClosePar);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(498);
      match(TParser::OpenPar);
      setState(499);
      match(TParser::TOKEN_CMD_GET_UNSAT_CORE);
      setState(500);
      match(TParser::ClosePar);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(501);
      match(TParser::OpenPar);
      setState(502);
      match(TParser::TOKEN_CMD_GET_VALUE);
      setState(503);
      match(TParser::OpenPar);
      setState(505); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(504);
        term();
        setState(507); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
        | (1ULL << TParser::SYM_OR)
        | (1ULL << TParser::SYM_NOT)
        | (1ULL << TParser::SYM_BOOL)
        | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
        | (1ULL << TParser::SYM_ERROR)
        | (1ULL << TParser::SYM_FALSE)
        | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
        | (1ULL << TParser::SYM_INCOMPLETE)
        | (1ULL << TParser::SYM_LOGIC)
        | (1ULL << TParser::SYM_MEMOUT)
        | (1ULL << TParser::SYM_SAT)
        | (1ULL << TParser::SYM_SUCCESS)
        | (1ULL << TParser::SYM_THEORY)
        | (1ULL << TParser::SYM_TRUE)
        | (1ULL << TParser::SYM_UNKNOWN)
        | (1ULL << TParser::SYM_UNSAT)
        | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || ((((_la - 82) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 82)) & ((1ULL << (TParser::NUMERAL - 82))
        | (1ULL << (TParser::DECIMAL - 82))
        | (1ULL << (TParser::HEXADECIMAL - 82))
        | (1ULL << (TParser::BINARY - 82))
        | (1ULL << (TParser::STRING - 82))
        | (1ULL << (TParser::SIMPLE_SYM - 82))
        | (1ULL << (TParser::QUOTED_SYM - 82))
        | (1ULL << (TParser::OpenPar - 82)))) != 0));
      setState(509);
      match(TParser::ClosePar);
      setState(510);
      match(TParser::ClosePar);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(512);
      match(TParser::OpenPar);
      setState(513);
      match(TParser::TOKEN_CMD_GET_ASSIGNMENT);
      setState(514);
      match(TParser::ClosePar);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(515);
      match(TParser::OpenPar);
      setState(516);
      match(TParser::TOKEN_CMD_GET_OPTION);
      setState(517);
      keyword();
      setState(518);
      match(TParser::ClosePar);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(520);
      match(TParser::OpenPar);
      setState(521);
      match(TParser::TOKEN_CMD_GET_INFO);
      setState(522);
      info_flag();
      setState(523);
      match(TParser::ClosePar);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(525);
      match(TParser::OpenPar);
      setState(526);
      match(TParser::TOKEN_CMD_EXIT);
      setState(527);
      match(TParser::ClosePar);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScriptContext ------------------------------------------------------------------

TParser::ScriptContext::ScriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TParser::CommandContext *> TParser::ScriptContext::command() {
  return getRuleContexts<TParser::CommandContext>();
}

TParser::CommandContext* TParser::ScriptContext::command(size_t i) {
  return getRuleContext<TParser::CommandContext>(i);
}


size_t TParser::ScriptContext::getRuleIndex() const {
  return TParser::RuleScript;
}

void TParser::ScriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScript(this);
}

void TParser::ScriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScript(this);
}


antlrcpp::Any TParser::ScriptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitScript(this);
  else
    return visitor->visitChildren(this);
}

TParser::ScriptContext* TParser::script() {
  ScriptContext *_localctx = _tracker.createInstance<ScriptContext>(_ctx, getState());
  enterRule(_localctx, 48, TParser::RuleScript);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(530);
      command();
      setState(533); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TParser::OpenPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Gen_responseContext ------------------------------------------------------------------

TParser::Gen_responseContext::Gen_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Gen_responseContext::SYM_UNSUPPORTED() {
  return getToken(TParser::SYM_UNSUPPORTED, 0);
}

tree::TerminalNode* TParser::Gen_responseContext::SYM_SUCCESS() {
  return getToken(TParser::SYM_SUCCESS, 0);
}

tree::TerminalNode* TParser::Gen_responseContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Gen_responseContext::SYM_ERROR() {
  return getToken(TParser::SYM_ERROR, 0);
}

tree::TerminalNode* TParser::Gen_responseContext::STRING() {
  return getToken(TParser::STRING, 0);
}

tree::TerminalNode* TParser::Gen_responseContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}


size_t TParser::Gen_responseContext::getRuleIndex() const {
  return TParser::RuleGen_response;
}

void TParser::Gen_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGen_response(this);
}

void TParser::Gen_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGen_response(this);
}


antlrcpp::Any TParser::Gen_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGen_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Gen_responseContext* TParser::gen_response() {
  Gen_responseContext *_localctx = _tracker.createInstance<Gen_responseContext>(_ctx, getState());
  enterRule(_localctx, 50, TParser::RuleGen_response);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(541);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::SYM_UNSUPPORTED: {
        enterOuterAlt(_localctx, 1);
        setState(535);
        match(TParser::SYM_UNSUPPORTED);
        break;
      }

      case TParser::SYM_SUCCESS: {
        enterOuterAlt(_localctx, 2);
        setState(536);
        match(TParser::SYM_SUCCESS);
        break;
      }

      case TParser::OpenPar: {
        enterOuterAlt(_localctx, 3);
        setState(537);
        match(TParser::OpenPar);
        setState(538);
        match(TParser::SYM_ERROR);
        setState(539);
        match(TParser::STRING);
        setState(540);
        match(TParser::ClosePar);
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

//----------------- Error_behaviorContext ------------------------------------------------------------------

TParser::Error_behaviorContext::Error_behaviorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Error_behaviorContext::SYM_IMMEDIATE_EXIT() {
  return getToken(TParser::SYM_IMMEDIATE_EXIT, 0);
}

tree::TerminalNode* TParser::Error_behaviorContext::SYM_CONTINUED_EXECUTION() {
  return getToken(TParser::SYM_CONTINUED_EXECUTION, 0);
}


size_t TParser::Error_behaviorContext::getRuleIndex() const {
  return TParser::RuleError_behavior;
}

void TParser::Error_behaviorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterError_behavior(this);
}

void TParser::Error_behaviorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitError_behavior(this);
}


antlrcpp::Any TParser::Error_behaviorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitError_behavior(this);
  else
    return visitor->visitChildren(this);
}

TParser::Error_behaviorContext* TParser::error_behavior() {
  Error_behaviorContext *_localctx = _tracker.createInstance<Error_behaviorContext>(_ctx, getState());
  enterRule(_localctx, 52, TParser::RuleError_behavior);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(543);
    _la = _input->LA(1);
    if (!(_la == TParser::SYM_CONTINUED_EXECUTION

    || _la == TParser::SYM_IMMEDIATE_EXIT)) {
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

//----------------- Reason_unknownContext ------------------------------------------------------------------

TParser::Reason_unknownContext::Reason_unknownContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Reason_unknownContext::SYM_MEMOUT() {
  return getToken(TParser::SYM_MEMOUT, 0);
}

tree::TerminalNode* TParser::Reason_unknownContext::SYM_INCOMPLETE() {
  return getToken(TParser::SYM_INCOMPLETE, 0);
}


size_t TParser::Reason_unknownContext::getRuleIndex() const {
  return TParser::RuleReason_unknown;
}

void TParser::Reason_unknownContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReason_unknown(this);
}

void TParser::Reason_unknownContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReason_unknown(this);
}


antlrcpp::Any TParser::Reason_unknownContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitReason_unknown(this);
  else
    return visitor->visitChildren(this);
}

TParser::Reason_unknownContext* TParser::reason_unknown() {
  Reason_unknownContext *_localctx = _tracker.createInstance<Reason_unknownContext>(_ctx, getState());
  enterRule(_localctx, 54, TParser::RuleReason_unknown);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    _la = _input->LA(1);
    if (!(_la == TParser::SYM_INCOMPLETE

    || _la == TParser::SYM_MEMOUT)) {
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

//----------------- StatusContext ------------------------------------------------------------------

TParser::StatusContext::StatusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::StatusContext::SYM_SAT() {
  return getToken(TParser::SYM_SAT, 0);
}

tree::TerminalNode* TParser::StatusContext::SYM_UNSAT() {
  return getToken(TParser::SYM_UNSAT, 0);
}

tree::TerminalNode* TParser::StatusContext::SYM_UNKNOWN() {
  return getToken(TParser::SYM_UNKNOWN, 0);
}


size_t TParser::StatusContext::getRuleIndex() const {
  return TParser::RuleStatus;
}

void TParser::StatusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatus(this);
}

void TParser::StatusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatus(this);
}


antlrcpp::Any TParser::StatusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitStatus(this);
  else
    return visitor->visitChildren(this);
}

TParser::StatusContext* TParser::status() {
  StatusContext *_localctx = _tracker.createInstance<StatusContext>(_ctx, getState());
  enterRule(_localctx, 56, TParser::RuleStatus);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::SYM_SAT)
      | (1ULL << TParser::SYM_UNKNOWN)
      | (1ULL << TParser::SYM_UNSAT))) != 0))) {
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

//----------------- Info_responseContext ------------------------------------------------------------------

TParser::Info_responseContext::Info_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Info_responseContext::KEYWORD_ERROR_BEHAVIOR() {
  return getToken(TParser::KEYWORD_ERROR_BEHAVIOR, 0);
}

TParser::Error_behaviorContext* TParser::Info_responseContext::error_behavior() {
  return getRuleContext<TParser::Error_behaviorContext>(0);
}

tree::TerminalNode* TParser::Info_responseContext::KEYWORD_NAME() {
  return getToken(TParser::KEYWORD_NAME, 0);
}

tree::TerminalNode* TParser::Info_responseContext::STRING() {
  return getToken(TParser::STRING, 0);
}

tree::TerminalNode* TParser::Info_responseContext::KEYWORD_AUTHORS() {
  return getToken(TParser::KEYWORD_AUTHORS, 0);
}

tree::TerminalNode* TParser::Info_responseContext::KEYWORD_VERSION() {
  return getToken(TParser::KEYWORD_VERSION, 0);
}

tree::TerminalNode* TParser::Info_responseContext::KEYWORD_REASON_UNKNOWN() {
  return getToken(TParser::KEYWORD_REASON_UNKNOWN, 0);
}

TParser::Reason_unknownContext* TParser::Info_responseContext::reason_unknown() {
  return getRuleContext<TParser::Reason_unknownContext>(0);
}

TParser::AttributeContext* TParser::Info_responseContext::attribute() {
  return getRuleContext<TParser::AttributeContext>(0);
}


size_t TParser::Info_responseContext::getRuleIndex() const {
  return TParser::RuleInfo_response;
}

void TParser::Info_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfo_response(this);
}

void TParser::Info_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfo_response(this);
}


antlrcpp::Any TParser::Info_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitInfo_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Info_responseContext* TParser::info_response() {
  Info_responseContext *_localctx = _tracker.createInstance<Info_responseContext>(_ctx, getState());
  enterRule(_localctx, 58, TParser::RuleInfo_response);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(560);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(549);
      match(TParser::KEYWORD_ERROR_BEHAVIOR);
      setState(550);
      error_behavior();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(551);
      match(TParser::KEYWORD_NAME);
      setState(552);
      match(TParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(553);
      match(TParser::KEYWORD_AUTHORS);
      setState(554);
      match(TParser::STRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(555);
      match(TParser::KEYWORD_VERSION);
      setState(556);
      match(TParser::STRING);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(557);
      match(TParser::KEYWORD_REASON_UNKNOWN);
      setState(558);
      reason_unknown();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(559);
      attribute();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_info_responseContext ------------------------------------------------------------------

TParser::Get_info_responseContext::Get_info_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Get_info_responseContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Get_info_responseContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::Info_responseContext *> TParser::Get_info_responseContext::info_response() {
  return getRuleContexts<TParser::Info_responseContext>();
}

TParser::Info_responseContext* TParser::Get_info_responseContext::info_response(size_t i) {
  return getRuleContext<TParser::Info_responseContext>(i);
}


size_t TParser::Get_info_responseContext::getRuleIndex() const {
  return TParser::RuleGet_info_response;
}

void TParser::Get_info_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_info_response(this);
}

void TParser::Get_info_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_info_response(this);
}


antlrcpp::Any TParser::Get_info_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGet_info_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Get_info_responseContext* TParser::get_info_response() {
  Get_info_responseContext *_localctx = _tracker.createInstance<Get_info_responseContext>(_ctx, getState());
  enterRule(_localctx, 60, TParser::RuleGet_info_response);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
    match(TParser::OpenPar);
    setState(564); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(563);
      info_response();
      setState(566); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::KEYWORD_ALL_STATISTICS)
      | (1ULL << TParser::KEYWORD_AUTHORS)
      | (1ULL << TParser::KEYWORD_AXIOMS)
      | (1ULL << TParser::KEYWORD_CHAINABLE)
      | (1ULL << TParser::KEYWORD_DEFINITION)
      | (1ULL << TParser::KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_ERROR_BEHAVIOR)
      | (1ULL << TParser::KEYWORD_EXPAND_DEFINITIONS)
      | (1ULL << TParser::KEYWORD_EXTENSIONS)
      | (1ULL << TParser::KEYWORD_FUNS)
      | (1ULL << TParser::KEYWORD_FUNS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_INTERACTIVE_MODE)
      | (1ULL << TParser::KEYWORD_LANGUAGE)
      | (1ULL << TParser::KEYWORD_LEFT_ASSOC)
      | (1ULL << TParser::KEYWORD_NAME)
      | (1ULL << TParser::KEYWORD_NAMED)
      | (1ULL << TParser::KEYWORD_NOTES)
      | (1ULL << TParser::KEYWORD_PRINT_SUCCESS)
      | (1ULL << TParser::KEYWORD_PRODUCE_ASSIGNMENTS)
      | (1ULL << TParser::KEYWORD_PRODUCE_MODELS)
      | (1ULL << TParser::KEYWORD_PRODUCE_PROOFS)
      | (1ULL << TParser::KEYWORD_PRODUCE_UNSAT_CORES)
      | (1ULL << TParser::KEYWORD_RANDOM_SEED)
      | (1ULL << TParser::KEYWORD_REASON_UNKNOWN)
      | (1ULL << TParser::KEYWORD_REGULAR_OUTPUT_CHANNEL)
      | (1ULL << TParser::KEYWORD_RIGHT_ASSOC)
      | (1ULL << TParser::KEYWORD_SORTS)
      | (1ULL << TParser::KEYWORD_SORTS_DESCRIPTION)
      | (1ULL << TParser::KEYWORD_STATUS)
      | (1ULL << TParser::KEYWORD_THEORIES)
      | (1ULL << TParser::KEYWORD_VALUES)
      | (1ULL << TParser::KEYWORD_VERBOSITY)
      | (1ULL << TParser::KEYWORD_VERSION))) != 0) || _la == TParser::KEYWORD_TOKEN);
    setState(568);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Check_sat_responseContext ------------------------------------------------------------------

TParser::Check_sat_responseContext::Check_sat_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::StatusContext* TParser::Check_sat_responseContext::status() {
  return getRuleContext<TParser::StatusContext>(0);
}


size_t TParser::Check_sat_responseContext::getRuleIndex() const {
  return TParser::RuleCheck_sat_response;
}

void TParser::Check_sat_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheck_sat_response(this);
}

void TParser::Check_sat_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheck_sat_response(this);
}


antlrcpp::Any TParser::Check_sat_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitCheck_sat_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Check_sat_responseContext* TParser::check_sat_response() {
  Check_sat_responseContext *_localctx = _tracker.createInstance<Check_sat_responseContext>(_ctx, getState());
  enterRule(_localctx, 62, TParser::RuleCheck_sat_response);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    status();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_assertions_responseContext ------------------------------------------------------------------

TParser::Get_assertions_responseContext::Get_assertions_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Get_assertions_responseContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Get_assertions_responseContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::TermContext *> TParser::Get_assertions_responseContext::term() {
  return getRuleContexts<TParser::TermContext>();
}

TParser::TermContext* TParser::Get_assertions_responseContext::term(size_t i) {
  return getRuleContext<TParser::TermContext>(i);
}


size_t TParser::Get_assertions_responseContext::getRuleIndex() const {
  return TParser::RuleGet_assertions_response;
}

void TParser::Get_assertions_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_assertions_response(this);
}

void TParser::Get_assertions_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_assertions_response(this);
}


antlrcpp::Any TParser::Get_assertions_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGet_assertions_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Get_assertions_responseContext* TParser::get_assertions_response() {
  Get_assertions_responseContext *_localctx = _tracker.createInstance<Get_assertions_responseContext>(_ctx, getState());
  enterRule(_localctx, 64, TParser::RuleGet_assertions_response);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(TParser::OpenPar);
    setState(574); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(573);
      term();
      setState(576); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
      | (1ULL << TParser::SYM_OR)
      | (1ULL << TParser::SYM_NOT)
      | (1ULL << TParser::SYM_BOOL)
      | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
      | (1ULL << TParser::SYM_ERROR)
      | (1ULL << TParser::SYM_FALSE)
      | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
      | (1ULL << TParser::SYM_INCOMPLETE)
      | (1ULL << TParser::SYM_LOGIC)
      | (1ULL << TParser::SYM_MEMOUT)
      | (1ULL << TParser::SYM_SAT)
      | (1ULL << TParser::SYM_SUCCESS)
      | (1ULL << TParser::SYM_THEORY)
      | (1ULL << TParser::SYM_TRUE)
      | (1ULL << TParser::SYM_UNKNOWN)
      | (1ULL << TParser::SYM_UNSAT)
      | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || ((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & ((1ULL << (TParser::NUMERAL - 82))
      | (1ULL << (TParser::DECIMAL - 82))
      | (1ULL << (TParser::HEXADECIMAL - 82))
      | (1ULL << (TParser::BINARY - 82))
      | (1ULL << (TParser::STRING - 82))
      | (1ULL << (TParser::SIMPLE_SYM - 82))
      | (1ULL << (TParser::QUOTED_SYM - 82))
      | (1ULL << (TParser::OpenPar - 82)))) != 0));
    setState(578);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProofContext ------------------------------------------------------------------

TParser::ProofContext::ProofContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::S_exprContext* TParser::ProofContext::s_expr() {
  return getRuleContext<TParser::S_exprContext>(0);
}


size_t TParser::ProofContext::getRuleIndex() const {
  return TParser::RuleProof;
}

void TParser::ProofContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProof(this);
}

void TParser::ProofContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProof(this);
}


antlrcpp::Any TParser::ProofContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitProof(this);
  else
    return visitor->visitChildren(this);
}

TParser::ProofContext* TParser::proof() {
  ProofContext *_localctx = _tracker.createInstance<ProofContext>(_ctx, getState());
  enterRule(_localctx, 66, TParser::RuleProof);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    s_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_proof_responseContext ------------------------------------------------------------------

TParser::Get_proof_responseContext::Get_proof_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::ProofContext* TParser::Get_proof_responseContext::proof() {
  return getRuleContext<TParser::ProofContext>(0);
}


size_t TParser::Get_proof_responseContext::getRuleIndex() const {
  return TParser::RuleGet_proof_response;
}

void TParser::Get_proof_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_proof_response(this);
}

void TParser::Get_proof_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_proof_response(this);
}


antlrcpp::Any TParser::Get_proof_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGet_proof_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Get_proof_responseContext* TParser::get_proof_response() {
  Get_proof_responseContext *_localctx = _tracker.createInstance<Get_proof_responseContext>(_ctx, getState());
  enterRule(_localctx, 68, TParser::RuleGet_proof_response);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(582);
    proof();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_unsat_core_responseContext ------------------------------------------------------------------

TParser::Get_unsat_core_responseContext::Get_unsat_core_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Get_unsat_core_responseContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Get_unsat_core_responseContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::SymbolContext *> TParser::Get_unsat_core_responseContext::symbol() {
  return getRuleContexts<TParser::SymbolContext>();
}

TParser::SymbolContext* TParser::Get_unsat_core_responseContext::symbol(size_t i) {
  return getRuleContext<TParser::SymbolContext>(i);
}


size_t TParser::Get_unsat_core_responseContext::getRuleIndex() const {
  return TParser::RuleGet_unsat_core_response;
}

void TParser::Get_unsat_core_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_unsat_core_response(this);
}

void TParser::Get_unsat_core_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_unsat_core_response(this);
}


antlrcpp::Any TParser::Get_unsat_core_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGet_unsat_core_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Get_unsat_core_responseContext* TParser::get_unsat_core_response() {
  Get_unsat_core_responseContext *_localctx = _tracker.createInstance<Get_unsat_core_responseContext>(_ctx, getState());
  enterRule(_localctx, 70, TParser::RuleGet_unsat_core_response);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    match(TParser::OpenPar);
    setState(586); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(585);
      symbol();
      setState(588); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TParser::SYM_AND)
      | (1ULL << TParser::SYM_OR)
      | (1ULL << TParser::SYM_NOT)
      | (1ULL << TParser::SYM_BOOL)
      | (1ULL << TParser::SYM_CONTINUED_EXECUTION)
      | (1ULL << TParser::SYM_ERROR)
      | (1ULL << TParser::SYM_FALSE)
      | (1ULL << TParser::SYM_IMMEDIATE_EXIT)
      | (1ULL << TParser::SYM_INCOMPLETE)
      | (1ULL << TParser::SYM_LOGIC)
      | (1ULL << TParser::SYM_MEMOUT)
      | (1ULL << TParser::SYM_SAT)
      | (1ULL << TParser::SYM_SUCCESS)
      | (1ULL << TParser::SYM_THEORY)
      | (1ULL << TParser::SYM_TRUE)
      | (1ULL << TParser::SYM_UNKNOWN)
      | (1ULL << TParser::SYM_UNSAT)
      | (1ULL << TParser::SYM_UNSUPPORTED))) != 0) || _la == TParser::SIMPLE_SYM

    || _la == TParser::QUOTED_SYM);
    setState(590);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Valuation_pairContext ------------------------------------------------------------------

TParser::Valuation_pairContext::Valuation_pairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Valuation_pairContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

std::vector<TParser::TermContext *> TParser::Valuation_pairContext::term() {
  return getRuleContexts<TParser::TermContext>();
}

TParser::TermContext* TParser::Valuation_pairContext::term(size_t i) {
  return getRuleContext<TParser::TermContext>(i);
}

tree::TerminalNode* TParser::Valuation_pairContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}


size_t TParser::Valuation_pairContext::getRuleIndex() const {
  return TParser::RuleValuation_pair;
}

void TParser::Valuation_pairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuation_pair(this);
}

void TParser::Valuation_pairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuation_pair(this);
}


antlrcpp::Any TParser::Valuation_pairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitValuation_pair(this);
  else
    return visitor->visitChildren(this);
}

TParser::Valuation_pairContext* TParser::valuation_pair() {
  Valuation_pairContext *_localctx = _tracker.createInstance<Valuation_pairContext>(_ctx, getState());
  enterRule(_localctx, 72, TParser::RuleValuation_pair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    match(TParser::OpenPar);
    setState(593);
    term();
    setState(594);
    term();
    setState(595);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_value_responseContext ------------------------------------------------------------------

TParser::Get_value_responseContext::Get_value_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Get_value_responseContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Get_value_responseContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::Valuation_pairContext *> TParser::Get_value_responseContext::valuation_pair() {
  return getRuleContexts<TParser::Valuation_pairContext>();
}

TParser::Valuation_pairContext* TParser::Get_value_responseContext::valuation_pair(size_t i) {
  return getRuleContext<TParser::Valuation_pairContext>(i);
}


size_t TParser::Get_value_responseContext::getRuleIndex() const {
  return TParser::RuleGet_value_response;
}

void TParser::Get_value_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_value_response(this);
}

void TParser::Get_value_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_value_response(this);
}


antlrcpp::Any TParser::Get_value_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGet_value_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Get_value_responseContext* TParser::get_value_response() {
  Get_value_responseContext *_localctx = _tracker.createInstance<Get_value_responseContext>(_ctx, getState());
  enterRule(_localctx, 74, TParser::RuleGet_value_response);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    match(TParser::OpenPar);
    setState(599); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(598);
      valuation_pair();
      setState(601); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TParser::OpenPar);
    setState(603);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- T_valuation_pairContext ------------------------------------------------------------------

TParser::T_valuation_pairContext::T_valuation_pairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::T_valuation_pairContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

TParser::SymbolContext* TParser::T_valuation_pairContext::symbol() {
  return getRuleContext<TParser::SymbolContext>(0);
}

TParser::B_valueContext* TParser::T_valuation_pairContext::b_value() {
  return getRuleContext<TParser::B_valueContext>(0);
}

tree::TerminalNode* TParser::T_valuation_pairContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}


size_t TParser::T_valuation_pairContext::getRuleIndex() const {
  return TParser::RuleT_valuation_pair;
}

void TParser::T_valuation_pairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterT_valuation_pair(this);
}

void TParser::T_valuation_pairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitT_valuation_pair(this);
}


antlrcpp::Any TParser::T_valuation_pairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitT_valuation_pair(this);
  else
    return visitor->visitChildren(this);
}

TParser::T_valuation_pairContext* TParser::t_valuation_pair() {
  T_valuation_pairContext *_localctx = _tracker.createInstance<T_valuation_pairContext>(_ctx, getState());
  enterRule(_localctx, 76, TParser::RuleT_valuation_pair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(605);
    match(TParser::OpenPar);
    setState(606);
    symbol();
    setState(607);
    b_value();
    setState(608);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_assignment_responseContext ------------------------------------------------------------------

TParser::Get_assignment_responseContext::Get_assignment_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::Get_assignment_responseContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

tree::TerminalNode* TParser::Get_assignment_responseContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

std::vector<TParser::T_valuation_pairContext *> TParser::Get_assignment_responseContext::t_valuation_pair() {
  return getRuleContexts<TParser::T_valuation_pairContext>();
}

TParser::T_valuation_pairContext* TParser::Get_assignment_responseContext::t_valuation_pair(size_t i) {
  return getRuleContext<TParser::T_valuation_pairContext>(i);
}


size_t TParser::Get_assignment_responseContext::getRuleIndex() const {
  return TParser::RuleGet_assignment_response;
}

void TParser::Get_assignment_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_assignment_response(this);
}

void TParser::Get_assignment_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_assignment_response(this);
}


antlrcpp::Any TParser::Get_assignment_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGet_assignment_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Get_assignment_responseContext* TParser::get_assignment_response() {
  Get_assignment_responseContext *_localctx = _tracker.createInstance<Get_assignment_responseContext>(_ctx, getState());
  enterRule(_localctx, 78, TParser::RuleGet_assignment_response);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(610);
    match(TParser::OpenPar);
    setState(614);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TParser::OpenPar) {
      setState(611);
      t_valuation_pair();
      setState(616);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(617);
    match(TParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_option_responseContext ------------------------------------------------------------------

TParser::Get_option_responseContext::Get_option_responseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::Attribute_valueContext* TParser::Get_option_responseContext::attribute_value() {
  return getRuleContext<TParser::Attribute_valueContext>(0);
}


size_t TParser::Get_option_responseContext::getRuleIndex() const {
  return TParser::RuleGet_option_response;
}

void TParser::Get_option_responseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGet_option_response(this);
}

void TParser::Get_option_responseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGet_option_response(this);
}


antlrcpp::Any TParser::Get_option_responseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitGet_option_response(this);
  else
    return visitor->visitChildren(this);
}

TParser::Get_option_responseContext* TParser::get_option_response() {
  Get_option_responseContext *_localctx = _tracker.createInstance<Get_option_responseContext>(_ctx, getState());
  enterRule(_localctx, 80, TParser::RuleGet_option_response);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    attribute_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> TParser::_decisionToDFA;
atn::PredictionContextCache TParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TParser::_atn;
std::vector<uint16_t> TParser::_serializedATN;

std::vector<std::string> TParser::_ruleNames = {
  "symbol", "keyword", "spec_constant", "s_expr", "identifier", "sort", 
  "attribute_value", "attribute", "qual_identifier", "var_binding", "sorted_var", 
  "term", "sort_symbol_decl", "meta_spec_constant", "fun_symbol_decl", "par_fun_symbol_decl", 
  "theory_decl", "theory_attribute", "logic_attribute", "logic", "b_value", 
  "option", "info_flag", "command", "script", "gen_response", "error_behavior", 
  "reason_unknown", "status", "info_response", "get_info_response", "check_sat_response", 
  "get_assertions_response", "proof", "get_proof_response", "get_unsat_core_response", 
  "valuation_pair", "get_value_response", "t_valuation_pair", "get_assignment_response", 
  "get_option_response"
};

std::vector<std::string> TParser::_literalNames = {
  "", "", "'and'", "'or'", "'not'", "'Bool'", "'continued-execution'", "'error'", 
  "'false'", "'immediate-exit'", "'incomplete'", "'logic'", "'memout'", 
  "'sat'", "'success'", "'theory'", "'true'", "'unknown'", "'unsat'", "'unsupported'", 
  "':all-statistics'", "':authors'", "':axioms'", "':chainable'", "':definition'", 
  "':diagnostic-output-channel'", "':error-behavior'", "':expand-definitions'", 
  "':extensions'", "':funs'", "':funs-description'", "':interactive-mode'", 
  "':language'", "':left-assoc'", "':name'", "':named'", "':notes'", "':print-success'", 
  "':produce-assignments'", "':produce-models'", "':produce-proofs'", "':produce-unsat-cores'", 
  "':random-seed'", "':reason-unknown'", "':regular-output-channel'", "':right-assoc'", 
  "':sorts'", "':sorts-description'", "':status'", "':theories'", "':values'", 
  "':verbosity'", "':version'", "'!'", "'_'", "'as'", "'DECIMAL'", "'exists'", 
  "'forall'", "'let'", "'NUMERAL'", "'par'", "'STRING'", "'assert'", "'check-sat'", 
  "'declare-sort'", "'declare-fun'", "'define-sort'", "'define-fun'", "'exit'", 
  "'get-assertions'", "'get-assignment'", "'get-info'", "'get-option'", 
  "'get-proof'", "'get-unsat-core'", "'get-value'", "'pop'", "'push'", "'set-logic'", 
  "'set-info'", "'set-option'", "", "", "", "", "", "", "", "", "", "", 
  "'('", "')'"
};

std::vector<std::string> TParser::_symbolicNames = {
  "", "DUMMY", "SYM_AND", "SYM_OR", "SYM_NOT", "SYM_BOOL", "SYM_CONTINUED_EXECUTION", 
  "SYM_ERROR", "SYM_FALSE", "SYM_IMMEDIATE_EXIT", "SYM_INCOMPLETE", "SYM_LOGIC", 
  "SYM_MEMOUT", "SYM_SAT", "SYM_SUCCESS", "SYM_THEORY", "SYM_TRUE", "SYM_UNKNOWN", 
  "SYM_UNSAT", "SYM_UNSUPPORTED", "KEYWORD_ALL_STATISTICS", "KEYWORD_AUTHORS", 
  "KEYWORD_AXIOMS", "KEYWORD_CHAINABLE", "KEYWORD_DEFINITION", "KEYWORD_DIAGNOSTIC_OUTPUT_CHANNEL", 
  "KEYWORD_ERROR_BEHAVIOR", "KEYWORD_EXPAND_DEFINITIONS", "KEYWORD_EXTENSIONS", 
  "KEYWORD_FUNS", "KEYWORD_FUNS_DESCRIPTION", "KEYWORD_INTERACTIVE_MODE", 
  "KEYWORD_LANGUAGE", "KEYWORD_LEFT_ASSOC", "KEYWORD_NAME", "KEYWORD_NAMED", 
  "KEYWORD_NOTES", "KEYWORD_PRINT_SUCCESS", "KEYWORD_PRODUCE_ASSIGNMENTS", 
  "KEYWORD_PRODUCE_MODELS", "KEYWORD_PRODUCE_PROOFS", "KEYWORD_PRODUCE_UNSAT_CORES", 
  "KEYWORD_RANDOM_SEED", "KEYWORD_REASON_UNKNOWN", "KEYWORD_REGULAR_OUTPUT_CHANNEL", 
  "KEYWORD_RIGHT_ASSOC", "KEYWORD_SORTS", "KEYWORD_SORTS_DESCRIPTION", "KEYWORD_STATUS", 
  "KEYWORD_THEORIES", "KEYWORD_VALUES", "KEYWORD_VERBOSITY", "KEYWORD_VERSION", 
  "TOKEN_BANG", "TOKEN_UNDERSCORE", "TOKEN_AS", "TOKEN_DECIMAL", "TOKEN_EXISTS", 
  "TOKEN_FORALL", "TOKEN_LET", "TOKEN_NUMERAL", "TOKEN_PAR", "TOKEN_STRING", 
  "TOKEN_CMD_ASSERT", "TOKEN_CMD_CHECK_SAT", "TOKEN_CMD_DECLARE_SORT", "TOKEN_CMD_DECLARE_FUN", 
  "TOKEN_CMD_DEFINE_SORT", "TOKEN_CMD_DEFINE_FUN", "TOKEN_CMD_EXIT", "TOKEN_CMD_GET_ASSERTIONS", 
  "TOKEN_CMD_GET_ASSIGNMENT", "TOKEN_CMD_GET_INFO", "TOKEN_CMD_GET_OPTION", 
  "TOKEN_CMD_GET_PROOF", "TOKEN_CMD_GET_UNSAT_CORE", "TOKEN_CMD_GET_VALUE", 
  "TOKEN_CMD_POP", "TOKEN_CMD_PUSH", "TOKEN_CMD_SET_LOGIC", "TOKEN_CMD_SET_INFO", 
  "TOKEN_CMD_SET_OPTION", "NUMERAL", "DECIMAL", "HEXADECIMAL", "BINARY", 
  "STRING", "WS", "SIMPLE_SYM", "QUOTED_SYM", "COMMENT", "KEYWORD_TOKEN", 
  "OpenPar", "ClosePar"
};

dfa::Vocabulary TParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TParser::_tokenNames;

TParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x5f, 0x270, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0x60, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x63, 0xb, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x66, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x6d, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x6e, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x73, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x6, 0x7, 0x79, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x7a, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x7f, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x85, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x88, 0xb, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x8b, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0x91, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x9a, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 
    0xd, 0xab, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xac, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0xb5, 0xa, 0xd, 0xd, 0xd, 
    0xe, 0xd, 0xb6, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0xc1, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 
    0xc2, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x6, 0xd, 0xcd, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xce, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x6, 0xd, 0xd9, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xda, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0xdf, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x7, 0xe, 0xe5, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xe8, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0xf2, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xf5, 0xb, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 
    0x10, 0xfd, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x100, 0xb, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0x107, 
    0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0x108, 0x3, 0x10, 0x7, 0x10, 0x10c, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x10f, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x113, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x6, 0x11, 0x11a, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0x11b, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x122, 0xa, 0x11, 
    0xd, 0x11, 0xe, 0x11, 0x123, 0x3, 0x11, 0x7, 0x11, 0x127, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0x12a, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x12f, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x134, 0xa, 0x12, 0x3, 0x12, 0x6, 0x12, 0x137, 0xa, 0x12, 0xd, 0x12, 
    0xe, 0x12, 0x138, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x6, 0x13, 0x140, 0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0x141, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0x149, 0xa, 0x13, 
    0xd, 0x13, 0xe, 0x13, 0x14a, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x15a, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 0x15f, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 
    0x160, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x16e, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x6, 0x15, 0x174, 
    0xa, 0x15, 0xd, 0x15, 0xe, 0x15, 0x175, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x193, 
    0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x19d, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 
    0x1b9, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x1bc, 0xb, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x7, 0x19, 0x1c7, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x1ca, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x1d5, 0xa, 0x19, 
    0xc, 0x19, 0xe, 0x19, 0x1d8, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x6, 0x19, 0x1fc, 
    0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0x1fd, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x213, 0xa, 0x19, 0x3, 0x1a, 
    0x6, 0x1a, 0x216, 0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 0x217, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x220, 
    0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x233, 
    0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x6, 0x20, 0x237, 0xa, 0x20, 0xd, 0x20, 
    0xe, 0x20, 0x238, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
    0x3, 0x22, 0x6, 0x22, 0x241, 0xa, 0x22, 0xd, 0x22, 0xe, 0x22, 0x242, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x25, 0x3, 0x25, 0x6, 0x25, 0x24d, 0xa, 0x25, 0xd, 0x25, 0xe, 0x25, 
    0x24e, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x6, 0x27, 0x25a, 0xa, 0x27, 0xd, 0x27, 
    0xe, 0x27, 0x25b, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x267, 0xa, 0x29, 
    0xc, 0x29, 0xe, 0x29, 0x26a, 0xb, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x2, 0x2, 0x2b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x2, 
    0xa, 0x4, 0x2, 0x4, 0x15, 0x5a, 0x5b, 0x4, 0x2, 0x16, 0x36, 0x5d, 0x5d, 
    0x3, 0x2, 0x54, 0x58, 0x5, 0x2, 0x3a, 0x3a, 0x3e, 0x3e, 0x40, 0x40, 
    0x4, 0x2, 0xa, 0xa, 0x12, 0x12, 0x4, 0x2, 0x8, 0x8, 0xb, 0xb, 0x4, 0x2, 
    0xc, 0xc, 0xe, 0xe, 0x4, 0x2, 0xf, 0xf, 0x13, 0x14, 0x2, 0x2b0, 0x2, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x4, 0x56, 0x3, 0x2, 0x2, 0x2, 0x6, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x65, 0x3, 0x2, 0x2, 0x2, 0xa, 0x72, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x7e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x90, 0x3, 0x2, 0x2, 0x2, 0x12, 0x99, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x16, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x112, 0x3, 0x2, 0x2, 0x2, 0x20, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x130, 0x3, 0x2, 0x2, 0x2, 0x24, 0x159, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x28, 0x16f, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x179, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x192, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x19c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x212, 0x3, 0x2, 0x2, 0x2, 0x32, 0x215, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x36, 0x221, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x223, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x225, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x232, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x234, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x42, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x246, 0x3, 0x2, 0x2, 0x2, 0x46, 0x248, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x24a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x252, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x257, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x50, 0x264, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x9, 0x2, 
    0x2, 0x2, 0x55, 0x3, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x9, 0x3, 0x2, 
    0x2, 0x57, 0x5, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x9, 0x4, 0x2, 0x2, 
    0x59, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x66, 0x5, 0x6, 0x4, 0x2, 0x5b, 
    0x66, 0x5, 0x2, 0x2, 0x2, 0x5c, 0x66, 0x5, 0x4, 0x3, 0x2, 0x5d, 0x61, 
    0x7, 0x5e, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x8, 0x5, 0x2, 0x5f, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x66, 0x7, 0x5f, 0x2, 0x2, 
    0x65, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x65, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x65, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x66, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x73, 0x5, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 
    0x5e, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x38, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x2, 
    0x2, 0x2, 0x6b, 0x6d, 0x7, 0x54, 0x2, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x71, 0x7, 0x5f, 0x2, 0x2, 0x71, 0x73, 0x3, 0x2, 0x2, 0x2, 0x72, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x68, 0x3, 0x2, 0x2, 0x2, 0x73, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x7f, 0x5, 0xa, 0x6, 0x2, 0x75, 0x76, 0x7, 0x5e, 
    0x2, 0x2, 0x76, 0x78, 0x5, 0xa, 0x6, 0x2, 0x77, 0x79, 0x5, 0xc, 0x7, 
    0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x5f, 0x2, 0x2, 0x7d, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x74, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x80, 0x8b, 0x5, 0x2, 
    0x2, 0x2, 0x81, 0x8b, 0x5, 0x6, 0x4, 0x2, 0x82, 0x86, 0x7, 0x5e, 0x2, 
    0x2, 0x83, 0x85, 0x5, 0x8, 0x5, 0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8b, 0x7, 0x5f, 0x2, 0x2, 0x8a, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x81, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x91, 0x5, 0x4, 0x3, 
    0x2, 0x8d, 0x8e, 0x5, 0x4, 0x3, 0x2, 0x8e, 0x8f, 0x5, 0xe, 0x8, 0x2, 
    0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x91, 0x11, 0x3, 0x2, 0x2, 0x2, 0x92, 0x9a, 
    0x5, 0xa, 0x6, 0x2, 0x93, 0x94, 0x7, 0x5e, 0x2, 0x2, 0x94, 0x95, 0x7, 
    0x39, 0x2, 0x2, 0x95, 0x96, 0x5, 0xa, 0x6, 0x2, 0x96, 0x97, 0x5, 0xc, 
    0x7, 0x2, 0x97, 0x98, 0x7, 0x5f, 0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x92, 0x3, 0x2, 0x2, 0x2, 0x99, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x5e, 0x2, 0x2, 0x9c, 
    0x9d, 0x5, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x18, 0xd, 0x2, 0x9e, 0x9f, 
    0x7, 0x5f, 0x2, 0x2, 0x9f, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 
    0x5e, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0xc, 
    0x7, 0x2, 0xa3, 0xa4, 0x7, 0x5f, 0x2, 0x2, 0xa4, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0xdf, 0x5, 0x6, 0x4, 0x2, 0xa6, 0xdf, 0x5, 0x12, 0xa, 0x2, 
    0xa7, 0xa8, 0x7, 0x5e, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x12, 0xa, 0x2, 0xa9, 
    0xab, 0x5, 0x18, 0xd, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x5f, 
    0x2, 0x2, 0xaf, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x5e, 0x2, 
    0x2, 0xb1, 0xb2, 0x7, 0x3d, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x5e, 0x2, 0x2, 
    0xb3, 0xb5, 0x5, 0x14, 0xb, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 
    0x5f, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x18, 0xd, 0x2, 0xba, 0xbb, 0x7, 0x5f, 
    0x2, 0x2, 0xbb, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x5e, 0x2, 
    0x2, 0xbd, 0xbe, 0x7, 0x3c, 0x2, 0x2, 0xbe, 0xc0, 0x7, 0x5e, 0x2, 0x2, 
    0xbf, 0xc1, 0x5, 0x16, 0xc, 0x2, 0xc0, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 
    0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 
    0x5f, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x18, 0xd, 0x2, 0xc6, 0xc7, 0x7, 0x5f, 
    0x2, 0x2, 0xc7, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x5e, 0x2, 
    0x2, 0xc9, 0xca, 0x7, 0x3b, 0x2, 0x2, 0xca, 0xcc, 0x7, 0x5e, 0x2, 0x2, 
    0xcb, 0xcd, 0x5, 0x16, 0xc, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 
    0x5f, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x18, 0xd, 0x2, 0xd2, 0xd3, 0x7, 0x5f, 
    0x2, 0x2, 0xd3, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x5e, 0x2, 
    0x2, 0xd5, 0xd6, 0x7, 0x37, 0x2, 0x2, 0xd6, 0xd8, 0x5, 0x18, 0xd, 0x2, 
    0xd7, 0xd9, 0x5, 0x10, 0x9, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 
    0x5f, 0x2, 0x2, 0xdd, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xde, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xde, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xde, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x5e, 0x2, 0x2, 0xe1, 0xe2, 
    0x5, 0xa, 0x6, 0x2, 0xe2, 0xe6, 0x7, 0x54, 0x2, 0x2, 0xe3, 0xe5, 0x5, 
    0x10, 0x9, 0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0xea, 0x7, 0x5f, 0x2, 0x2, 0xea, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xec, 0x9, 0x5, 0x2, 0x2, 0xec, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 
    0x7, 0x5e, 0x2, 0x2, 0xee, 0xef, 0x5, 0x6, 0x4, 0x2, 0xef, 0xf3, 0x5, 
    0xc, 0x7, 0x2, 0xf0, 0xf2, 0x5, 0x10, 0x9, 0x2, 0xf1, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x5f, 0x2, 0x2, 0xf7, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x5e, 0x2, 0x2, 0xf9, 0xfa, 
    0x5, 0x1c, 0xf, 0x2, 0xfa, 0xfe, 0x5, 0xc, 0x7, 0x2, 0xfb, 0xfd, 0x5, 
    0x10, 0x9, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0xff, 0x101, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0x102, 0x7, 0x5f, 0x2, 0x2, 0x102, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x104, 0x7, 0x5e, 0x2, 0x2, 0x104, 0x106, 0x5, 0xa, 0x6, 0x2, 
    0x105, 0x107, 0x5, 0xc, 0x7, 0x2, 0x106, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10d, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x10c, 0x5, 0x10, 0x9, 0x2, 0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 0x5f, 0x2, 0x2, 
    0x111, 0x113, 0x3, 0x2, 0x2, 0x2, 0x112, 0xed, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0x112, 0x103, 0x3, 0x2, 0x2, 0x2, 0x113, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x12f, 0x5, 0x1e, 0x10, 0x2, 0x115, 0x116, 
    0x7, 0x5e, 0x2, 0x2, 0x116, 0x117, 0x7, 0x3f, 0x2, 0x2, 0x117, 0x119, 
    0x7, 0x5e, 0x2, 0x2, 0x118, 0x11a, 0x5, 0x2, 0x2, 0x2, 0x119, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x5f, 0x2, 0x2, 0x11e, 0x11f, 
    0x7, 0x5e, 0x2, 0x2, 0x11f, 0x121, 0x5, 0xa, 0x6, 0x2, 0x120, 0x122, 
    0x5, 0xc, 0x7, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x128, 0x3, 0x2, 0x2, 0x2, 0x125, 0x127, 
    0x5, 0x10, 0x9, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x5f, 0x2, 0x2, 0x12c, 0x12d, 
    0x7, 0x5f, 0x2, 0x2, 0x12d, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x115, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 0x5e, 0x2, 0x2, 0x131, 0x133, 0x7, 
    0x11, 0x2, 0x2, 0x132, 0x134, 0x5, 0x2, 0x2, 0x2, 0x133, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 0x136, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x137, 0x5, 0x24, 0x13, 0x2, 0x136, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 
    0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x5f, 0x2, 0x2, 0x13b, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x30, 0x2, 0x2, 0x13d, 0x13f, 0x7, 
    0x5e, 0x2, 0x2, 0x13e, 0x140, 0x5, 0x1a, 0xe, 0x2, 0x13f, 0x13e, 0x3, 
    0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 
    0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0x5f, 0x2, 0x2, 0x144, 0x15a, 0x3, 
    0x2, 0x2, 0x2, 0x145, 0x146, 0x7, 0x1f, 0x2, 0x2, 0x146, 0x148, 0x7, 
    0x5e, 0x2, 0x2, 0x147, 0x149, 0x5, 0x20, 0x11, 0x2, 0x148, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x5f, 0x2, 0x2, 0x14d, 0x15a, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x31, 0x2, 0x2, 0x14f, 0x15a, 0x7, 
    0x58, 0x2, 0x2, 0x150, 0x151, 0x7, 0x20, 0x2, 0x2, 0x151, 0x15a, 0x7, 
    0x58, 0x2, 0x2, 0x152, 0x153, 0x7, 0x1a, 0x2, 0x2, 0x153, 0x15a, 0x7, 
    0x58, 0x2, 0x2, 0x154, 0x155, 0x7, 0x34, 0x2, 0x2, 0x155, 0x15a, 0x7, 
    0x58, 0x2, 0x2, 0x156, 0x157, 0x7, 0x26, 0x2, 0x2, 0x157, 0x15a, 0x7, 
    0x58, 0x2, 0x2, 0x158, 0x15a, 0x5, 0x10, 0x9, 0x2, 0x159, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x159, 0x145, 0x3, 0x2, 0x2, 0x2, 0x159, 0x14e, 0x3, 
    0x2, 0x2, 0x2, 0x159, 0x150, 0x3, 0x2, 0x2, 0x2, 0x159, 0x152, 0x3, 
    0x2, 0x2, 0x2, 0x159, 0x154, 0x3, 0x2, 0x2, 0x2, 0x159, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x15b, 0x15c, 0x7, 0x33, 0x2, 0x2, 0x15c, 0x15e, 0x7, 0x5e, 
    0x2, 0x2, 0x15d, 0x15f, 0x5, 0x2, 0x2, 0x2, 0x15e, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x163, 0x7, 0x5f, 0x2, 0x2, 0x163, 0x16e, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x165, 0x7, 0x22, 0x2, 0x2, 0x165, 0x16e, 0x7, 0x58, 
    0x2, 0x2, 0x166, 0x167, 0x7, 0x1e, 0x2, 0x2, 0x167, 0x16e, 0x7, 0x58, 
    0x2, 0x2, 0x168, 0x169, 0x7, 0x34, 0x2, 0x2, 0x169, 0x16e, 0x7, 0x58, 
    0x2, 0x2, 0x16a, 0x16b, 0x7, 0x26, 0x2, 0x2, 0x16b, 0x16e, 0x7, 0x58, 
    0x2, 0x2, 0x16c, 0x16e, 0x5, 0x10, 0x9, 0x2, 0x16d, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x164, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x166, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x16f, 0x170, 0x7, 0x5e, 0x2, 0x2, 0x170, 0x171, 0x7, 0xd, 0x2, 
    0x2, 0x171, 0x173, 0x5, 0x2, 0x2, 0x2, 0x172, 0x174, 0x5, 0x26, 0x14, 
    0x2, 0x173, 0x172, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 
    0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 0x5f, 0x2, 
    0x2, 0x178, 0x29, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x9, 0x6, 0x2, 0x2, 
    0x17a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x27, 0x2, 0x2, 
    0x17c, 0x193, 0x5, 0x2a, 0x16, 0x2, 0x17d, 0x17e, 0x7, 0x1d, 0x2, 0x2, 
    0x17e, 0x193, 0x5, 0x2a, 0x16, 0x2, 0x17f, 0x180, 0x7, 0x21, 0x2, 0x2, 
    0x180, 0x193, 0x5, 0x2a, 0x16, 0x2, 0x181, 0x182, 0x7, 0x2a, 0x2, 0x2, 
    0x182, 0x193, 0x5, 0x2a, 0x16, 0x2, 0x183, 0x184, 0x7, 0x2b, 0x2, 0x2, 
    0x184, 0x193, 0x5, 0x2a, 0x16, 0x2, 0x185, 0x186, 0x7, 0x29, 0x2, 0x2, 
    0x186, 0x193, 0x5, 0x2a, 0x16, 0x2, 0x187, 0x188, 0x7, 0x28, 0x2, 0x2, 
    0x188, 0x193, 0x5, 0x2a, 0x16, 0x2, 0x189, 0x18a, 0x7, 0x2e, 0x2, 0x2, 
    0x18a, 0x193, 0x7, 0x58, 0x2, 0x2, 0x18b, 0x18c, 0x7, 0x1b, 0x2, 0x2, 
    0x18c, 0x193, 0x7, 0x58, 0x2, 0x2, 0x18d, 0x18e, 0x7, 0x2c, 0x2, 0x2, 
    0x18e, 0x193, 0x7, 0x54, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x35, 0x2, 0x2, 
    0x190, 0x193, 0x7, 0x54, 0x2, 0x2, 0x191, 0x193, 0x5, 0x10, 0x9, 0x2, 
    0x192, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x192, 0x17d, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x192, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x183, 0x3, 0x2, 0x2, 0x2, 0x192, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x187, 0x3, 0x2, 0x2, 0x2, 0x192, 0x189, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x192, 0x18d, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x192, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x194, 0x19d, 0x7, 0x1c, 0x2, 0x2, 
    0x195, 0x19d, 0x7, 0x24, 0x2, 0x2, 0x196, 0x19d, 0x7, 0x17, 0x2, 0x2, 
    0x197, 0x19d, 0x7, 0x36, 0x2, 0x2, 0x198, 0x19d, 0x7, 0x32, 0x2, 0x2, 
    0x199, 0x19d, 0x7, 0x2d, 0x2, 0x2, 0x19a, 0x19d, 0x5, 0x4, 0x3, 0x2, 
    0x19b, 0x19d, 0x7, 0x16, 0x2, 0x2, 0x19c, 0x194, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x195, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x19e, 
    0x19f, 0x7, 0x5e, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x51, 0x2, 0x2, 0x1a0, 
    0x1a1, 0x5, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x7, 0x5f, 0x2, 0x2, 0x1a2, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x5e, 0x2, 0x2, 0x1a4, 
    0x1a5, 0x7, 0x53, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x2c, 0x17, 0x2, 0x1a6, 
    0x1a7, 0x7, 0x5f, 0x2, 0x2, 0x1a7, 0x213, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x1a9, 0x7, 0x5e, 0x2, 0x2, 0x1a9, 0x1aa, 0x7, 0x52, 0x2, 0x2, 0x1aa, 
    0x1ab, 0x5, 0x10, 0x9, 0x2, 0x1ab, 0x1ac, 0x7, 0x5f, 0x2, 0x2, 0x1ac, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x5e, 0x2, 0x2, 0x1ae, 
    0x1af, 0x7, 0x43, 0x2, 0x2, 0x1af, 0x1b0, 0x5, 0x2, 0x2, 0x2, 0x1b0, 
    0x1b1, 0x7, 0x54, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x5f, 0x2, 0x2, 0x1b2, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x5e, 0x2, 0x2, 0x1b4, 
    0x1b5, 0x7, 0x45, 0x2, 0x2, 0x1b5, 0x1b6, 0x5, 0x2, 0x2, 0x2, 0x1b6, 
    0x1ba, 0x7, 0x5e, 0x2, 0x2, 0x1b7, 0x1b9, 0x5, 0x2, 0x2, 0x2, 0x1b8, 
    0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1ba, 
    0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
    0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bd, 
    0x1be, 0x7, 0x5f, 0x2, 0x2, 0x1be, 0x1bf, 0x5, 0xc, 0x7, 0x2, 0x1bf, 
    0x1c0, 0x7, 0x5f, 0x2, 0x2, 0x1c0, 0x213, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
    0x1c2, 0x7, 0x5e, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x44, 0x2, 0x2, 0x1c3, 
    0x1c4, 0x5, 0x2, 0x2, 0x2, 0x1c4, 0x1c8, 0x7, 0x5e, 0x2, 0x2, 0x1c5, 
    0x1c7, 0x5, 0xc, 0x7, 0x2, 0x1c6, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
    0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 
    0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1ca, 
    0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 0x5f, 0x2, 0x2, 0x1cc, 
    0x1cd, 0x5, 0xc, 0x7, 0x2, 0x1cd, 0x1ce, 0x7, 0x5f, 0x2, 0x2, 0x1ce, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x7, 0x5e, 0x2, 0x2, 0x1d0, 
    0x1d1, 0x7, 0x46, 0x2, 0x2, 0x1d1, 0x1d2, 0x5, 0x2, 0x2, 0x2, 0x1d2, 
    0x1d6, 0x7, 0x5e, 0x2, 0x2, 0x1d3, 0x1d5, 0x5, 0x16, 0xc, 0x2, 0x1d4, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d6, 
    0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
    0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
    0x1da, 0x7, 0x5f, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0xc, 0x7, 0x2, 0x1db, 
    0x1dc, 0x5, 0x18, 0xd, 0x2, 0x1dc, 0x1dd, 0x7, 0x5f, 0x2, 0x2, 0x1dd, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x5e, 0x2, 0x2, 0x1df, 
    0x1e0, 0x7, 0x50, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x54, 0x2, 0x2, 0x1e1, 
    0x213, 0x7, 0x5f, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x5e, 0x2, 0x2, 0x1e3, 
    0x1e4, 0x7, 0x4f, 0x2, 0x2, 0x1e4, 0x1e5, 0x7, 0x54, 0x2, 0x2, 0x1e5, 
    0x213, 0x7, 0x5f, 0x2, 0x2, 0x1e6, 0x1e7, 0x7, 0x5e, 0x2, 0x2, 0x1e7, 
    0x1e8, 0x7, 0x41, 0x2, 0x2, 0x1e8, 0x1e9, 0x5, 0x18, 0xd, 0x2, 0x1e9, 
    0x1ea, 0x7, 0x5f, 0x2, 0x2, 0x1ea, 0x213, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
    0x1ec, 0x7, 0x5e, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x42, 0x2, 0x2, 0x1ed, 
    0x213, 0x7, 0x5f, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x5e, 0x2, 0x2, 0x1ef, 
    0x1f0, 0x7, 0x48, 0x2, 0x2, 0x1f0, 0x213, 0x7, 0x5f, 0x2, 0x2, 0x1f1, 
    0x1f2, 0x7, 0x5e, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x4c, 0x2, 0x2, 0x1f3, 
    0x213, 0x7, 0x5f, 0x2, 0x2, 0x1f4, 0x1f5, 0x7, 0x5e, 0x2, 0x2, 0x1f5, 
    0x1f6, 0x7, 0x4d, 0x2, 0x2, 0x1f6, 0x213, 0x7, 0x5f, 0x2, 0x2, 0x1f7, 
    0x1f8, 0x7, 0x5e, 0x2, 0x2, 0x1f8, 0x1f9, 0x7, 0x4e, 0x2, 0x2, 0x1f9, 
    0x1fb, 0x7, 0x5e, 0x2, 0x2, 0x1fa, 0x1fc, 0x5, 0x18, 0xd, 0x2, 0x1fb, 
    0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 
    0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1fe, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x7, 0x5f, 0x2, 0x2, 0x200, 
    0x201, 0x7, 0x5f, 0x2, 0x2, 0x201, 0x213, 0x3, 0x2, 0x2, 0x2, 0x202, 
    0x203, 0x7, 0x5e, 0x2, 0x2, 0x203, 0x204, 0x7, 0x49, 0x2, 0x2, 0x204, 
    0x213, 0x7, 0x5f, 0x2, 0x2, 0x205, 0x206, 0x7, 0x5e, 0x2, 0x2, 0x206, 
    0x207, 0x7, 0x4b, 0x2, 0x2, 0x207, 0x208, 0x5, 0x4, 0x3, 0x2, 0x208, 
    0x209, 0x7, 0x5f, 0x2, 0x2, 0x209, 0x213, 0x3, 0x2, 0x2, 0x2, 0x20a, 
    0x20b, 0x7, 0x5e, 0x2, 0x2, 0x20b, 0x20c, 0x7, 0x4a, 0x2, 0x2, 0x20c, 
    0x20d, 0x5, 0x2e, 0x18, 0x2, 0x20d, 0x20e, 0x7, 0x5f, 0x2, 0x2, 0x20e, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x5e, 0x2, 0x2, 0x210, 
    0x211, 0x7, 0x47, 0x2, 0x2, 0x211, 0x213, 0x7, 0x5f, 0x2, 0x2, 0x212, 
    0x19e, 0x3, 0x2, 0x2, 0x2, 0x212, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x212, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x1b3, 0x3, 0x2, 0x2, 0x2, 0x212, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x1cf, 0x3, 0x2, 0x2, 0x2, 0x212, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x1e2, 0x3, 0x2, 0x2, 0x2, 0x212, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x1eb, 0x3, 0x2, 0x2, 0x2, 0x212, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x1f1, 0x3, 0x2, 0x2, 0x2, 0x212, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x1f7, 0x3, 0x2, 0x2, 0x2, 0x212, 0x202, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x205, 0x3, 0x2, 0x2, 0x2, 0x212, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x20f, 0x3, 0x2, 0x2, 0x2, 0x213, 0x31, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 
    0x5, 0x30, 0x19, 0x2, 0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 
    0x3, 0x2, 0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 
    0x3, 0x2, 0x2, 0x2, 0x218, 0x33, 0x3, 0x2, 0x2, 0x2, 0x219, 0x220, 0x7, 
    0x15, 0x2, 0x2, 0x21a, 0x220, 0x7, 0x10, 0x2, 0x2, 0x21b, 0x21c, 0x7, 
    0x5e, 0x2, 0x2, 0x21c, 0x21d, 0x7, 0x9, 0x2, 0x2, 0x21d, 0x21e, 0x7, 
    0x58, 0x2, 0x2, 0x21e, 0x220, 0x7, 0x5f, 0x2, 0x2, 0x21f, 0x219, 0x3, 
    0x2, 0x2, 0x2, 0x21f, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x21b, 0x3, 
    0x2, 0x2, 0x2, 0x220, 0x35, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x9, 0x7, 
    0x2, 0x2, 0x222, 0x37, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x9, 0x8, 0x2, 
    0x2, 0x224, 0x39, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x9, 0x9, 0x2, 0x2, 
    0x226, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x7, 0x1c, 0x2, 0x2, 
    0x228, 0x233, 0x5, 0x36, 0x1c, 0x2, 0x229, 0x22a, 0x7, 0x24, 0x2, 0x2, 
    0x22a, 0x233, 0x7, 0x58, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x17, 0x2, 0x2, 
    0x22c, 0x233, 0x7, 0x58, 0x2, 0x2, 0x22d, 0x22e, 0x7, 0x36, 0x2, 0x2, 
    0x22e, 0x233, 0x7, 0x58, 0x2, 0x2, 0x22f, 0x230, 0x7, 0x2d, 0x2, 0x2, 
    0x230, 0x233, 0x5, 0x38, 0x1d, 0x2, 0x231, 0x233, 0x5, 0x10, 0x9, 0x2, 
    0x232, 0x227, 0x3, 0x2, 0x2, 0x2, 0x232, 0x229, 0x3, 0x2, 0x2, 0x2, 
    0x232, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x232, 0x22d, 0x3, 0x2, 0x2, 0x2, 
    0x232, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x232, 0x231, 0x3, 0x2, 0x2, 0x2, 
    0x233, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x234, 0x236, 0x7, 0x5e, 0x2, 0x2, 
    0x235, 0x237, 0x5, 0x3c, 0x1f, 0x2, 0x236, 0x235, 0x3, 0x2, 0x2, 0x2, 
    0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 0x236, 0x3, 0x2, 0x2, 0x2, 
    0x238, 0x239, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x3, 0x2, 0x2, 0x2, 
    0x23a, 0x23b, 0x7, 0x5f, 0x2, 0x2, 0x23b, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x23c, 0x23d, 0x5, 0x3a, 0x1e, 0x2, 0x23d, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x23e, 0x240, 0x7, 0x5e, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x18, 0xd, 0x2, 
    0x240, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 
    0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 
    0x243, 0x244, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x7, 0x5f, 0x2, 0x2, 
    0x245, 0x43, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x5, 0x8, 0x5, 0x2, 0x247, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x5, 0x44, 0x23, 0x2, 0x249, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24c, 0x7, 0x5e, 0x2, 0x2, 0x24b, 
    0x24d, 0x5, 0x2, 0x2, 0x2, 0x24c, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24d, 
    0x24e, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 
    0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 0x250, 
    0x251, 0x7, 0x5f, 0x2, 0x2, 0x251, 0x49, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x253, 0x7, 0x5e, 0x2, 0x2, 0x253, 0x254, 0x5, 0x18, 0xd, 0x2, 0x254, 
    0x255, 0x5, 0x18, 0xd, 0x2, 0x255, 0x256, 0x7, 0x5f, 0x2, 0x2, 0x256, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x257, 0x259, 0x7, 0x5e, 0x2, 0x2, 0x258, 
    0x25a, 0x5, 0x4a, 0x26, 0x2, 0x259, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 
    0x25b, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 
    0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25d, 
    0x25e, 0x7, 0x5f, 0x2, 0x2, 0x25e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x25f, 
    0x260, 0x7, 0x5e, 0x2, 0x2, 0x260, 0x261, 0x5, 0x2, 0x2, 0x2, 0x261, 
    0x262, 0x5, 0x2a, 0x16, 0x2, 0x262, 0x263, 0x7, 0x5f, 0x2, 0x2, 0x263, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x264, 0x268, 0x7, 0x5e, 0x2, 0x2, 0x265, 
    0x267, 0x5, 0x4e, 0x28, 0x2, 0x266, 0x265, 0x3, 0x2, 0x2, 0x2, 0x267, 
    0x26a, 0x3, 0x2, 0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 
    0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26a, 
    0x268, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x5f, 0x2, 0x2, 0x26c, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x5, 0xe, 0x8, 0x2, 0x26e, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x33, 0x61, 0x65, 0x6e, 0x72, 0x7a, 0x7e, 0x86, 
    0x8a, 0x90, 0x99, 0xac, 0xb6, 0xc2, 0xce, 0xda, 0xde, 0xe6, 0xf3, 0xfe, 
    0x108, 0x10d, 0x112, 0x11b, 0x123, 0x128, 0x12e, 0x133, 0x138, 0x141, 
    0x14a, 0x159, 0x160, 0x16d, 0x175, 0x192, 0x19c, 0x1ba, 0x1c8, 0x1d6, 
    0x1fd, 0x212, 0x217, 0x21f, 0x232, 0x238, 0x242, 0x24e, 0x25b, 0x268, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TParser::Initializer TParser::_init;
