//
//  IdentifierBinaryTree.cpp
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

#include "IdentifierBinaryTree.h"
#include "LineNumberList.h"

using namespace std;

IdentifierBinaryTree::IdentifierBinaryTree()
{
    setTreeRoot(NULL);
}
IdentifierBinaryTree::~IdentifierBinaryTree()
{
    Identifier *root = getTreeRoot();

    if (root != NULL)
    {
        depthFirstDeleteTree(root);
    }
}
void IdentifierBinaryTree::depthFirstDeleteTree(Identifier *tok)
{
    if (tok->getLeftChild() != NULL)
    {
        depthFirstDeleteTree(tok->getLeftChild());
    }

    if (tok->getRightChild() != NULL)
    {
        depthFirstDeleteTree(tok->getRightChild());
    }
    delete tok;
}
void IdentifierBinaryTree::setTreeRoot(Identifier *root)
{
    this->treeRoot = root;
}
Identifier *IdentifierBinaryTree::getTreeRoot()
{
    return this->treeRoot;
}
//*********************************************
//function adds identifier to the tree
//also create number list
//*********************************************
bool IdentifierBinaryTree::addIdentifier(Identifier *tok, int lineNum)
{
    bool success = false;
    LineNumberList *listItem = new LineNumberList();
    listItem->setLineNumber(lineNum);


    if (getTreeRoot() == NULL)
    {
        //create new identifier only when needed
        Identifier *new_Identifier = new Identifier;
        new_Identifier->setIdentifierString(tok->getTokenString());
        new_Identifier->addToLineNumberList(listItem);
        setTreeRoot(new_Identifier);
        success = true;
    }
    else
    {
        string tokenName = tok->getTokenString();
        Identifier *parentNode = getTreeRoot();
        string treeNodeName;
        int stringComparison;


        //while (parentNode != NULL)
            while (!success)
        {
            treeNodeName = parentNode->getIdentifierString();
            stringComparison = tokenName.compare(treeNodeName);
            if (stringComparison == 0)
            {
                parentNode->addToLineNumberList(listItem);
                //parentNode = NULL; //Exit the loop was giving segmentation error big time
                //delete tok;         //We won't need tok and it won't be deleted in main.
                success = true;
            }

            else if (stringComparison < 0)
            {
                //Go to the left.
                if (parentNode->getLeftChild() == NULL)
                {
                    //Add tok to the left and create new identifier only when needed
                    Identifier *new_Identifier = new Identifier;
                    new_Identifier->setIdentifierString(tok->getTokenString());
                    new_Identifier->addToLineNumberList(listItem);
                    parentNode->setLeftChild(new_Identifier);
                    parentNode = NULL;
                    success = true;
                }
                else
                {
                    parentNode = parentNode->getLeftChild();
                }
            }
            else
            {
                //Go to the right.
                if (parentNode->getRightChild() == NULL)
                {
                    //Add tok to the right and create new identifier only when needed
                    Identifier *new_Identifier = new Identifier;
                    new_Identifier->setIdentifierString(tok->getTokenString());
                    new_Identifier->addToLineNumberList(listItem);
                    parentNode->setRightChild(new_Identifier);
                    parentNode = NULL;
                    success = true;
                }
                else
                {
                    parentNode = parentNode->getRightChild();
                }
            }
        }
    }
    return success;
}
