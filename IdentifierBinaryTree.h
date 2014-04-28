//
//  IdentifierBinaryTree.h
//  Lab5
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

#ifndef __Lab5__IdentifierBinaryTree__
#define __Lab5__IdentifierBinaryTree__
#include<string.h>
#include<stdlib.h>
#include <iostream>
#include "Token.h"
#include "Identifier.h"
#include "Print.h"

class IdentifierBinaryTree
{
    Identifier *treeRoot;
    //Token * treeRoot;
    void depthFirstDeleteTree(Identifier *tok);

public:
    IdentifierBinaryTree();
    ~IdentifierBinaryTree();
    void setTreeRoot(Identifier *root);
    Identifier *getTreeRoot();
    //Token *getTreeRoot();
    bool addIdentifier(Identifier *tok, int lineNum);
};

#endif
