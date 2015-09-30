
#ifndef __Lab5__Identifier__
#define __Lab5__Identifier__

#include <iostream>
#include "Token.h"

class Identifier : public Token
{
private:
    Identifier *leftChild;
    Identifier *rightChild;
    LineNumberList *list;

public:
    Identifier();
    ~Identifier();
    void setLeftChild(Identifier *tok);
    Identifier *getLeftChild();
    void setRightChild(Identifier *tok);
    Identifier *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();


};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
/**************

***************/
