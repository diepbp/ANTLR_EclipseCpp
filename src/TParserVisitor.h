/* parser/listener/visitor header section */

// Generated from /home/osboxes/Documents/antlr4-4.7/runtime/Cpp/demo/TParser.g4 by ANTLR 4.7

#pragma once

/* visitor preinclude section */

#include "antlr4-runtime.h"
#include "TParser.h"

/* visitor postinclude section */

namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TParser.
 */
class  TParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:
  /* visitor public declarations/members section */

  /**
   * Visit parse trees produced by TParser.
   */
    virtual antlrcpp::Any visitSymbol(TParser::SymbolContext *context) = 0;

    virtual antlrcpp::Any visitKeyword(TParser::KeywordContext *context) = 0;

    virtual antlrcpp::Any visitSpec_constant(TParser::Spec_constantContext *context) = 0;

    virtual antlrcpp::Any visitS_expr(TParser::S_exprContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(TParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitSort(TParser::SortContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_value(TParser::Attribute_valueContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(TParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitQual_identifier(TParser::Qual_identifierContext *context) = 0;

    virtual antlrcpp::Any visitVar_binding(TParser::Var_bindingContext *context) = 0;

    virtual antlrcpp::Any visitSorted_var(TParser::Sorted_varContext *context) = 0;

    virtual antlrcpp::Any visitTerm(TParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitSort_symbol_decl(TParser::Sort_symbol_declContext *context) = 0;

    virtual antlrcpp::Any visitMeta_spec_constant(TParser::Meta_spec_constantContext *context) = 0;

    virtual antlrcpp::Any visitFun_symbol_decl(TParser::Fun_symbol_declContext *context) = 0;

    virtual antlrcpp::Any visitPar_fun_symbol_decl(TParser::Par_fun_symbol_declContext *context) = 0;

    virtual antlrcpp::Any visitTheory_decl(TParser::Theory_declContext *context) = 0;

    virtual antlrcpp::Any visitTheory_attribute(TParser::Theory_attributeContext *context) = 0;

    virtual antlrcpp::Any visitLogic_attribute(TParser::Logic_attributeContext *context) = 0;

    virtual antlrcpp::Any visitLogic(TParser::LogicContext *context) = 0;

    virtual antlrcpp::Any visitB_value(TParser::B_valueContext *context) = 0;

    virtual antlrcpp::Any visitOption(TParser::OptionContext *context) = 0;

    virtual antlrcpp::Any visitInfo_flag(TParser::Info_flagContext *context) = 0;

    virtual antlrcpp::Any visitCommand(TParser::CommandContext *context) = 0;

    virtual antlrcpp::Any visitScript(TParser::ScriptContext *context) = 0;

    virtual antlrcpp::Any visitGen_response(TParser::Gen_responseContext *context) = 0;

    virtual antlrcpp::Any visitError_behavior(TParser::Error_behaviorContext *context) = 0;

    virtual antlrcpp::Any visitReason_unknown(TParser::Reason_unknownContext *context) = 0;

    virtual antlrcpp::Any visitStatus(TParser::StatusContext *context) = 0;

    virtual antlrcpp::Any visitInfo_response(TParser::Info_responseContext *context) = 0;

    virtual antlrcpp::Any visitGet_info_response(TParser::Get_info_responseContext *context) = 0;

    virtual antlrcpp::Any visitCheck_sat_response(TParser::Check_sat_responseContext *context) = 0;

    virtual antlrcpp::Any visitGet_assertions_response(TParser::Get_assertions_responseContext *context) = 0;

    virtual antlrcpp::Any visitProof(TParser::ProofContext *context) = 0;

    virtual antlrcpp::Any visitGet_proof_response(TParser::Get_proof_responseContext *context) = 0;

    virtual antlrcpp::Any visitGet_unsat_core_response(TParser::Get_unsat_core_responseContext *context) = 0;

    virtual antlrcpp::Any visitValuation_pair(TParser::Valuation_pairContext *context) = 0;

    virtual antlrcpp::Any visitGet_value_response(TParser::Get_value_responseContext *context) = 0;

    virtual antlrcpp::Any visitT_valuation_pair(TParser::T_valuation_pairContext *context) = 0;

    virtual antlrcpp::Any visitGet_assignment_response(TParser::Get_assignment_responseContext *context) = 0;

    virtual antlrcpp::Any visitGet_option_response(TParser::Get_option_responseContext *context) = 0;


private:  
/* visitor private declarations/members section */
};

}  // namespace antlrcpptest
