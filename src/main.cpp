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

#include "antlr4-runtime.h"
#include "SMTLIB2Lexer.h"
#include "SMTLIB2Parser.h"
#include "SMTLIB2ParserVisitor.h"
#include "SMTLIB2ParserListener.h"
#include "SMTLIB2ParserBaseVisitor.h"
#include "SMTLIB2ParserBaseListener.h"
using namespace antlrcpptest;
using namespace antlr4;



class TreeShapeListener : public SMTLIB2ParserBaseListener {
    public:
        
    void enterCommand(SMTLIB2Parser::CommandContext *ctx) override {
        std::cout << "\nvisit CommandContext\n";
        std::vector<tree::ParseTree*> children = ctx->children;
        for (const auto& child : children) {
            visit(child);
        }
    }

    private:
    void visit(tree::ParseTree* node) {
        if (node->children.size() == 0) {
            auto tmp = dynamic_cast<tree::TerminalNodeImpl*>(node);
            std::cout << tmp->toStringTree() << "_" << tmp->getSymbol()->getType() << "\t";
        }
        else {
            std::vector<tree::ParseTree*> children = node->children;
            for (const auto& child : children) {
                visit(child);
            }
        }
    }
};



int main(int , const char **) {
    ANTLRFileStream input("input.smt2");
    SMTLIB2Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    
    SMTLIB2Parser parser(&tokens);
    tree::ParseTree *tree = parser.script();
    TreeShapeListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    
    return 0;
}
