/* parser/listener/visitor header section */

// Generated from /home/osboxes/Documents/antlr4-4.7/runtime/Cpp/demo/TParser.g4 by ANTLR 4.7

#pragma once

/* base listener preinclude section */

#include "antlr4-runtime.h"
#include "TParserListener.h"

/* base listener postinclude section */

namespace antlrcpptest {

/**
 * This class provides an empty implementation of TParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TParserBaseListener : public TParserListener {
public:
/* base listener public declarations/members section */

  virtual void enterSymbol(TParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(TParser::SymbolContext * /*ctx*/) override { }

  virtual void enterKeyword(TParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(TParser::KeywordContext * /*ctx*/) override { }

  virtual void enterSpec_constant(TParser::Spec_constantContext * /*ctx*/) override { }
  virtual void exitSpec_constant(TParser::Spec_constantContext * /*ctx*/) override { }

  virtual void enterS_expr(TParser::S_exprContext * /*ctx*/) override { }
  virtual void exitS_expr(TParser::S_exprContext * /*ctx*/) override { }

  virtual void enterIdentifier(TParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterSort(TParser::SortContext * /*ctx*/) override { }
  virtual void exitSort(TParser::SortContext * /*ctx*/) override { }

  virtual void enterAttribute_value(TParser::Attribute_valueContext * /*ctx*/) override { }
  virtual void exitAttribute_value(TParser::Attribute_valueContext * /*ctx*/) override { }

  virtual void enterAttribute(TParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(TParser::AttributeContext * /*ctx*/) override { }

  virtual void enterQual_identifier(TParser::Qual_identifierContext * /*ctx*/) override { }
  virtual void exitQual_identifier(TParser::Qual_identifierContext * /*ctx*/) override { }

  virtual void enterVar_binding(TParser::Var_bindingContext * /*ctx*/) override { }
  virtual void exitVar_binding(TParser::Var_bindingContext * /*ctx*/) override { }

  virtual void enterSorted_var(TParser::Sorted_varContext * /*ctx*/) override { }
  virtual void exitSorted_var(TParser::Sorted_varContext * /*ctx*/) override { }

  virtual void enterTerm(TParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(TParser::TermContext * /*ctx*/) override { }

  virtual void enterSort_symbol_decl(TParser::Sort_symbol_declContext * /*ctx*/) override { }
  virtual void exitSort_symbol_decl(TParser::Sort_symbol_declContext * /*ctx*/) override { }

  virtual void enterMeta_spec_constant(TParser::Meta_spec_constantContext * /*ctx*/) override { }
  virtual void exitMeta_spec_constant(TParser::Meta_spec_constantContext * /*ctx*/) override { }

  virtual void enterFun_symbol_decl(TParser::Fun_symbol_declContext * /*ctx*/) override { }
  virtual void exitFun_symbol_decl(TParser::Fun_symbol_declContext * /*ctx*/) override { }

  virtual void enterPar_fun_symbol_decl(TParser::Par_fun_symbol_declContext * /*ctx*/) override { }
  virtual void exitPar_fun_symbol_decl(TParser::Par_fun_symbol_declContext * /*ctx*/) override { }

  virtual void enterTheory_decl(TParser::Theory_declContext * /*ctx*/) override { }
  virtual void exitTheory_decl(TParser::Theory_declContext * /*ctx*/) override { }

  virtual void enterTheory_attribute(TParser::Theory_attributeContext * /*ctx*/) override { }
  virtual void exitTheory_attribute(TParser::Theory_attributeContext * /*ctx*/) override { }

  virtual void enterLogic_attribute(TParser::Logic_attributeContext * /*ctx*/) override { }
  virtual void exitLogic_attribute(TParser::Logic_attributeContext * /*ctx*/) override { }

  virtual void enterLogic(TParser::LogicContext * /*ctx*/) override { }
  virtual void exitLogic(TParser::LogicContext * /*ctx*/) override { }

  virtual void enterB_value(TParser::B_valueContext * /*ctx*/) override { }
  virtual void exitB_value(TParser::B_valueContext * /*ctx*/) override { }

  virtual void enterOption(TParser::OptionContext * /*ctx*/) override { }
  virtual void exitOption(TParser::OptionContext * /*ctx*/) override { }

  virtual void enterInfo_flag(TParser::Info_flagContext * /*ctx*/) override { }
  virtual void exitInfo_flag(TParser::Info_flagContext * /*ctx*/) override { }

  virtual void enterCommand(TParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(TParser::CommandContext * /*ctx*/) override { }

  virtual void enterScript(TParser::ScriptContext * /*ctx*/) override { }
  virtual void exitScript(TParser::ScriptContext * /*ctx*/) override { }

  virtual void enterGen_response(TParser::Gen_responseContext * /*ctx*/) override { }
  virtual void exitGen_response(TParser::Gen_responseContext * /*ctx*/) override { }

  virtual void enterError_behavior(TParser::Error_behaviorContext * /*ctx*/) override { }
  virtual void exitError_behavior(TParser::Error_behaviorContext * /*ctx*/) override { }

  virtual void enterReason_unknown(TParser::Reason_unknownContext * /*ctx*/) override { }
  virtual void exitReason_unknown(TParser::Reason_unknownContext * /*ctx*/) override { }

  virtual void enterStatus(TParser::StatusContext * /*ctx*/) override { }
  virtual void exitStatus(TParser::StatusContext * /*ctx*/) override { }

  virtual void enterInfo_response(TParser::Info_responseContext * /*ctx*/) override { }
  virtual void exitInfo_response(TParser::Info_responseContext * /*ctx*/) override { }

  virtual void enterGet_info_response(TParser::Get_info_responseContext * /*ctx*/) override { }
  virtual void exitGet_info_response(TParser::Get_info_responseContext * /*ctx*/) override { }

  virtual void enterCheck_sat_response(TParser::Check_sat_responseContext * /*ctx*/) override { }
  virtual void exitCheck_sat_response(TParser::Check_sat_responseContext * /*ctx*/) override { }

  virtual void enterGet_assertions_response(TParser::Get_assertions_responseContext * /*ctx*/) override { }
  virtual void exitGet_assertions_response(TParser::Get_assertions_responseContext * /*ctx*/) override { }

  virtual void enterProof(TParser::ProofContext * /*ctx*/) override { }
  virtual void exitProof(TParser::ProofContext * /*ctx*/) override { }

  virtual void enterGet_proof_response(TParser::Get_proof_responseContext * /*ctx*/) override { }
  virtual void exitGet_proof_response(TParser::Get_proof_responseContext * /*ctx*/) override { }

  virtual void enterGet_unsat_core_response(TParser::Get_unsat_core_responseContext * /*ctx*/) override { }
  virtual void exitGet_unsat_core_response(TParser::Get_unsat_core_responseContext * /*ctx*/) override { }

  virtual void enterValuation_pair(TParser::Valuation_pairContext * /*ctx*/) override { }
  virtual void exitValuation_pair(TParser::Valuation_pairContext * /*ctx*/) override { }

  virtual void enterGet_value_response(TParser::Get_value_responseContext * /*ctx*/) override { }
  virtual void exitGet_value_response(TParser::Get_value_responseContext * /*ctx*/) override { }

  virtual void enterT_valuation_pair(TParser::T_valuation_pairContext * /*ctx*/) override { }
  virtual void exitT_valuation_pair(TParser::T_valuation_pairContext * /*ctx*/) override { }

  virtual void enterGet_assignment_response(TParser::Get_assignment_responseContext * /*ctx*/) override { }
  virtual void exitGet_assignment_response(TParser::Get_assignment_responseContext * /*ctx*/) override { }

  virtual void enterGet_option_response(TParser::Get_option_responseContext * /*ctx*/) override { }
  virtual void exitGet_option_response(TParser::Get_option_responseContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

private:  
/* base listener private declarations/members section */
};

}  // namespace antlrcpptest
