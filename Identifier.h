//
//  Identifier.h
//  Lab5
//
//  Created by jie/Zelpha
//

#ifndef __Lab5__Identifier__
#define __Lab5__Identifier__

#include<string.h>
#include<stdlib.h>
#include <iostream>
#include "Token.h"
#include "common.h"
#include "LineNumberList.h"

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Identifier:public Token
{
private:
    Identifier *leftChild;
    Identifier *rightChild;
    LineNumberList *list;
    string IdentifierString;

public:
    Identifier();
    ~Identifier();

    void setLeftChild(Identifier *tok);
    Identifier *getLeftChild();
    void setRightChild(Identifier *tok);
    Identifier *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();
    void setIdentifierString(string s);
    string getIdentifierString();
};

#endif
