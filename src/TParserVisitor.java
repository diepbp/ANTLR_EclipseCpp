// Generated from TParser.g4 by ANTLR 4.7
package antlrcpptest;
/* parser/listener/visitor header section */
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link TParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface TParserVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link TParser#symbol}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSymbol(TParser.SymbolContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#keyword}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitKeyword(TParser.KeywordContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#spec_constant}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSpec_constant(TParser.Spec_constantContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#s_expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitS_expr(TParser.S_exprContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#identifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIdentifier(TParser.IdentifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#sort}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSort(TParser.SortContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#attribute_value}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAttribute_value(TParser.Attribute_valueContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#attribute}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAttribute(TParser.AttributeContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#qual_identifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitQual_identifier(TParser.Qual_identifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#var_binding}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVar_binding(TParser.Var_bindingContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#sorted_var}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSorted_var(TParser.Sorted_varContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#term}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTerm(TParser.TermContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#sort_symbol_decl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSort_symbol_decl(TParser.Sort_symbol_declContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#meta_spec_constant}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMeta_spec_constant(TParser.Meta_spec_constantContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#fun_symbol_decl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFun_symbol_decl(TParser.Fun_symbol_declContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#par_fun_symbol_decl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPar_fun_symbol_decl(TParser.Par_fun_symbol_declContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#theory_decl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTheory_decl(TParser.Theory_declContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#theory_attribute}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTheory_attribute(TParser.Theory_attributeContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#logic_attribute}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogic_attribute(TParser.Logic_attributeContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#logic}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogic(TParser.LogicContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#b_value}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitB_value(TParser.B_valueContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#option}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOption(TParser.OptionContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#info_flag}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInfo_flag(TParser.Info_flagContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#command}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCommand(TParser.CommandContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#script}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitScript(TParser.ScriptContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#gen_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGen_response(TParser.Gen_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#error_behavior}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitError_behavior(TParser.Error_behaviorContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#reason_unknown}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitReason_unknown(TParser.Reason_unknownContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#status}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatus(TParser.StatusContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#info_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInfo_response(TParser.Info_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#get_info_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGet_info_response(TParser.Get_info_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#check_sat_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCheck_sat_response(TParser.Check_sat_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#get_assertions_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGet_assertions_response(TParser.Get_assertions_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#proof}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProof(TParser.ProofContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#get_proof_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGet_proof_response(TParser.Get_proof_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#get_unsat_core_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGet_unsat_core_response(TParser.Get_unsat_core_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#valuation_pair}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitValuation_pair(TParser.Valuation_pairContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#get_value_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGet_value_response(TParser.Get_value_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#t_valuation_pair}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitT_valuation_pair(TParser.T_valuation_pairContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#get_assignment_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGet_assignment_response(TParser.Get_assignment_responseContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#get_option_response}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGet_option_response(TParser.Get_option_responseContext ctx);
}