//
//  Identifier.cpp
//  Lab5
//
//  Created by jie/Zelpha
//

#include "Identifier.h"

Identifier::Identifier()
{
    //What code do I need here to initialize everything.
    setLeftChild(NULL);
    setRightChild(NULL);
    list = NULL;
}

Identifier::~Identifier()
{
    //What code do I need here to free memory
    LineNumberList *root = getLineNumberList();
    LineNumberList *tmp = root;

    while (root != NULL)
    {
        tmp = tmp->getNextLineNumber();
        delete root;
        root = tmp;
    }
}

void Identifier::setLeftChild(Identifier *tok)
{
    this->leftChild = tok;
}
Identifier *Identifier::getLeftChild()
{
    return this->leftChild;
}
void Identifier::setRightChild(Identifier *tok)
{
    this->rightChild = tok;
}
Identifier *Identifier::getRightChild()
{
    return this->rightChild;
}

void Identifier::addToLineNumberList(LineNumberList *listItem)
{
    LineNumberList *tmp = getLineNumberList();

    if (tmp == NULL)
    {
        list = listItem;
    }
    else
    {
        while (tmp->getNextLineNumber() != NULL)
        {
            tmp = tmp->getNextLineNumber();
        }
        tmp->setNextLineNumber(listItem);
    }
}
LineNumberList *Identifier::getLineNumberList()
{
    return this->list;
}
void Identifier::setIdentifierString(string s)
{
    this->IdentifierString = s;
}
string Identifier::getIdentifierString()
{
    return this->IdentifierString;
}
