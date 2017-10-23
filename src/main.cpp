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
#include "SMTLIB2TrauListener.h"
using namespace antlrcpptest;
using namespace antlr4;


int main(int , const char **) {
    ANTLRFileStream input("input.smt2");
    SMTLIB2Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    
    SMTLIB2Parser parser(&tokens);
    tree::ParseTree *tree = parser.script();
    SMTLIB2TrauListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    
    for (const auto& tokens : listener.smtTokens) {
    	for (const auto &lineToken : tokens) {
    		printf("%s - %d \t", lineToken.first.c_str(), lineToken.second);
    	}
    	printf("\n");
    }
    return 0;
}
