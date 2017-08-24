/* parser/listener/visitor header section */

// Generated from /home/osboxes/Documents/antlr4-4.7/runtime/Cpp/demo/TParser.g4 by ANTLR 4.7

#pragma once

/* base visitor preinclude section */

#include "antlr4-runtime.h"
#include "TParserVisitor.h"

/* base visitor postinclude section */

namespace antlrcpptest {

/**
 * This class provides an empty implementation of TParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TParserBaseVisitor : public TParserVisitor {
public:
/* base visitor public declarations/members section */

  virtual antlrcpp::Any visitSymbol(TParser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyword(TParser::KeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpec_constant(TParser::Spec_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_expr(TParser::S_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(TParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSort(TParser::SortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_value(TParser::Attribute_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(TParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQual_identifier(TParser::Qual_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_binding(TParser::Var_bindingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSorted_var(TParser::Sorted_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm(TParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSort_symbol_decl(TParser::Sort_symbol_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMeta_spec_constant(TParser::Meta_spec_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFun_symbol_decl(TParser::Fun_symbol_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar_fun_symbol_decl(TParser::Par_fun_symbol_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTheory_decl(TParser::Theory_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTheory_attribute(TParser::Theory_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogic_attribute(TParser::Logic_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogic(TParser::LogicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitB_value(TParser::B_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOption(TParser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInfo_flag(TParser::Info_flagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand(TParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScript(TParser::ScriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGen_response(TParser::Gen_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitError_behavior(TParser::Error_behaviorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReason_unknown(TParser::Reason_unknownContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatus(TParser::StatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInfo_response(TParser::Info_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_info_response(TParser::Get_info_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheck_sat_response(TParser::Check_sat_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_assertions_response(TParser::Get_assertions_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProof(TParser::ProofContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_proof_response(TParser::Get_proof_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_unsat_core_response(TParser::Get_unsat_core_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuation_pair(TParser::Valuation_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_value_response(TParser::Get_value_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitT_valuation_pair(TParser::T_valuation_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_assignment_response(TParser::Get_assignment_responseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_option_response(TParser::Get_option_responseContext *ctx) override {
    return visitChildren(ctx);
  }


private:  
/* base visitor private declarations/members section */
};

}  // namespace antlrcpptest
