/* parser/listener/visitor header section */

// Generated from /home/osboxes/Documents/antlr4-4.7/runtime/Cpp/demo/TParser.g4 by ANTLR 4.7

#pragma once

/* listener preinclude section */

#include "antlr4-runtime.h"
#include "TParser.h"

/* listener postinclude section */

namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
class  TParserListener : public antlr4::tree::ParseTreeListener {
public:
/* listener public declarations/members section */

  virtual void enterSymbol(TParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(TParser::SymbolContext *ctx) = 0;

  virtual void enterKeyword(TParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(TParser::KeywordContext *ctx) = 0;

  virtual void enterSpec_constant(TParser::Spec_constantContext *ctx) = 0;
  virtual void exitSpec_constant(TParser::Spec_constantContext *ctx) = 0;

  virtual void enterS_expr(TParser::S_exprContext *ctx) = 0;
  virtual void exitS_expr(TParser::S_exprContext *ctx) = 0;

  virtual void enterIdentifier(TParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TParser::IdentifierContext *ctx) = 0;

  virtual void enterSort(TParser::SortContext *ctx) = 0;
  virtual void exitSort(TParser::SortContext *ctx) = 0;

  virtual void enterAttribute_value(TParser::Attribute_valueContext *ctx) = 0;
  virtual void exitAttribute_value(TParser::Attribute_valueContext *ctx) = 0;

  virtual void enterAttribute(TParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(TParser::AttributeContext *ctx) = 0;

  virtual void enterQual_identifier(TParser::Qual_identifierContext *ctx) = 0;
  virtual void exitQual_identifier(TParser::Qual_identifierContext *ctx) = 0;

  virtual void enterVar_binding(TParser::Var_bindingContext *ctx) = 0;
  virtual void exitVar_binding(TParser::Var_bindingContext *ctx) = 0;

  virtual void enterSorted_var(TParser::Sorted_varContext *ctx) = 0;
  virtual void exitSorted_var(TParser::Sorted_varContext *ctx) = 0;

  virtual void enterTerm(TParser::TermContext *ctx) = 0;
  virtual void exitTerm(TParser::TermContext *ctx) = 0;

  virtual void enterSort_symbol_decl(TParser::Sort_symbol_declContext *ctx) = 0;
  virtual void exitSort_symbol_decl(TParser::Sort_symbol_declContext *ctx) = 0;

  virtual void enterMeta_spec_constant(TParser::Meta_spec_constantContext *ctx) = 0;
  virtual void exitMeta_spec_constant(TParser::Meta_spec_constantContext *ctx) = 0;

  virtual void enterFun_symbol_decl(TParser::Fun_symbol_declContext *ctx) = 0;
  virtual void exitFun_symbol_decl(TParser::Fun_symbol_declContext *ctx) = 0;

  virtual void enterPar_fun_symbol_decl(TParser::Par_fun_symbol_declContext *ctx) = 0;
  virtual void exitPar_fun_symbol_decl(TParser::Par_fun_symbol_declContext *ctx) = 0;

  virtual void enterTheory_decl(TParser::Theory_declContext *ctx) = 0;
  virtual void exitTheory_decl(TParser::Theory_declContext *ctx) = 0;

  virtual void enterTheory_attribute(TParser::Theory_attributeContext *ctx) = 0;
  virtual void exitTheory_attribute(TParser::Theory_attributeContext *ctx) = 0;

  virtual void enterLogic_attribute(TParser::Logic_attributeContext *ctx) = 0;
  virtual void exitLogic_attribute(TParser::Logic_attributeContext *ctx) = 0;

  virtual void enterLogic(TParser::LogicContext *ctx) = 0;
  virtual void exitLogic(TParser::LogicContext *ctx) = 0;

  virtual void enterB_value(TParser::B_valueContext *ctx) = 0;
  virtual void exitB_value(TParser::B_valueContext *ctx) = 0;

  virtual void enterOption(TParser::OptionContext *ctx) = 0;
  virtual void exitOption(TParser::OptionContext *ctx) = 0;

  virtual void enterInfo_flag(TParser::Info_flagContext *ctx) = 0;
  virtual void exitInfo_flag(TParser::Info_flagContext *ctx) = 0;

  virtual void enterCommand(TParser::CommandContext *ctx) = 0;
  virtual void exitCommand(TParser::CommandContext *ctx) = 0;

  virtual void enterScript(TParser::ScriptContext *ctx) = 0;
  virtual void exitScript(TParser::ScriptContext *ctx) = 0;

  virtual void enterGen_response(TParser::Gen_responseContext *ctx) = 0;
  virtual void exitGen_response(TParser::Gen_responseContext *ctx) = 0;

  virtual void enterError_behavior(TParser::Error_behaviorContext *ctx) = 0;
  virtual void exitError_behavior(TParser::Error_behaviorContext *ctx) = 0;

  virtual void enterReason_unknown(TParser::Reason_unknownContext *ctx) = 0;
  virtual void exitReason_unknown(TParser::Reason_unknownContext *ctx) = 0;

  virtual void enterStatus(TParser::StatusContext *ctx) = 0;
  virtual void exitStatus(TParser::StatusContext *ctx) = 0;

  virtual void enterInfo_response(TParser::Info_responseContext *ctx) = 0;
  virtual void exitInfo_response(TParser::Info_responseContext *ctx) = 0;

  virtual void enterGet_info_response(TParser::Get_info_responseContext *ctx) = 0;
  virtual void exitGet_info_response(TParser::Get_info_responseContext *ctx) = 0;

  virtual void enterCheck_sat_response(TParser::Check_sat_responseContext *ctx) = 0;
  virtual void exitCheck_sat_response(TParser::Check_sat_responseContext *ctx) = 0;

  virtual void enterGet_assertions_response(TParser::Get_assertions_responseContext *ctx) = 0;
  virtual void exitGet_assertions_response(TParser::Get_assertions_responseContext *ctx) = 0;

  virtual void enterProof(TParser::ProofContext *ctx) = 0;
  virtual void exitProof(TParser::ProofContext *ctx) = 0;

  virtual void enterGet_proof_response(TParser::Get_proof_responseContext *ctx) = 0;
  virtual void exitGet_proof_response(TParser::Get_proof_responseContext *ctx) = 0;

  virtual void enterGet_unsat_core_response(TParser::Get_unsat_core_responseContext *ctx) = 0;
  virtual void exitGet_unsat_core_response(TParser::Get_unsat_core_responseContext *ctx) = 0;

  virtual void enterValuation_pair(TParser::Valuation_pairContext *ctx) = 0;
  virtual void exitValuation_pair(TParser::Valuation_pairContext *ctx) = 0;

  virtual void enterGet_value_response(TParser::Get_value_responseContext *ctx) = 0;
  virtual void exitGet_value_response(TParser::Get_value_responseContext *ctx) = 0;

  virtual void enterT_valuation_pair(TParser::T_valuation_pairContext *ctx) = 0;
  virtual void exitT_valuation_pair(TParser::T_valuation_pairContext *ctx) = 0;

  virtual void enterGet_assignment_response(TParser::Get_assignment_responseContext *ctx) = 0;
  virtual void exitGet_assignment_response(TParser::Get_assignment_responseContext *ctx) = 0;

  virtual void enterGet_option_response(TParser::Get_option_responseContext *ctx) = 0;
  virtual void exitGet_option_response(TParser::Get_option_responseContext *ctx) = 0;


private:  
/* listener private declarations/members section */
};

}  // namespace antlrcpptest
