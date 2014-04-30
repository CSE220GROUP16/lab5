//
//  IdentifierBinaryTree.h
//  Lab5
//
//  Created by jie/Zelpha
//
#ifndef __Lab4__IdentifierBinaryTree__
#define __Lab4__IdentifierBinaryTree__

#include <iostream>
#include "Token.h"
#include "Identifier.h"
#include "Print.h"

class IdentifierBinaryTree
{
    Identifier *treeRoot;
    void depthFirstDeleteTree(Identifier *tok);

public:
    IdentifierBinaryTree();
    ~IdentifierBinaryTree();
    void setTreeRoot(Identifier *root);
    Identifier *getTreeRoot();
    bool addIdentifier(Identifier *tok, int lineNum);
};

#endif
