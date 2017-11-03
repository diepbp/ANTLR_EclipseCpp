/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include <vector>
#include "antlr4-runtime.h"
#include "SMTLIB2Lexer.h"
#include "SMTLIB2Parser.h"
#include "SMTLIB2ParserBaseVisitor.h"
#include "SMTLIB2ParserBaseListener.h"
#include "SMTLIB2ScriptListener.h"
#include "SMTLIB2TermListener.h"
using namespace antlrcpptest;
using namespace antlr4;


void parseTerm(){
	ANTLRInputStream input("(assert (ite (not (= index (- 0 1))) (and (and (= len_$$_str4 index) (= str1 (+ (* (- 1) index) (Length a)))) (= index1 len_$$_str7) (ite (= index1 (- 0 1)) (and (= index2 len_$$_str9) (and (= len_$$_str14 (+ 1 index2)) (= sli (+ (* (- 1) (+ 1 index2)) (Length str1))))) (and (= index2 len_$$_str9) (= sli (Substring str1 (+ index2 1) (- index1 (+ index2 1))))))) (= sli 0)))");
	SMTLIB2Lexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	SMTLIB2Parser parser(&tokens);
	tree::ParseTree *tree = parser.term();
	SMTLIB2TermListener listener;
	tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

	for (const auto &lineToken : listener.smtTokens[0]) {
		printf("%s - %d \t", lineToken.first.c_str(), lineToken.second);
	}
}

void parseFile(){
	ANTLRFileStream input("input.smt2");
	SMTLIB2Lexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	SMTLIB2Parser parser(&tokens);
	tree::ParseTree *tree = parser.script();
	SMTLIB2ScriptListener listener;
	tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

	for (const auto& tokens : listener.smtTokens) {
		for (const auto &lineToken : tokens) {
			printf("%s - %d \t", lineToken.first.c_str(), lineToken.second);
		}
		printf("\n");
	}
}

int main(int , const char **) {
	parseFile();
//	parseTerm();
    return 0;
}
