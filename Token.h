//
//  Token.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Token__
#define __Lab4__Token__
#include<string.h>
#include<stdlib.h>
#include <iostream>
#include "common.h"
#include "LineNumberList.h"
#include "template_clas.h"

#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Token
{
private:
    TokenCode code;
    LiteralType type;

    //Literal * literal;
    void * literal;

   //template_class *literal_tc; //Literal  * literal;

   //not needed since literal is a subclass of Token
    string tokenString;
    //What variables and methods am I missing to implement a binary tree.
    Token *leftChild;
    Token *rightChild;
    LineNumberList *list;

public:
    Token();
    ~Token();

    void setCode(TokenCode newCode);
    TokenCode getCode();

    void setType(LiteralType newType);
    LiteralType getType();

    void * get_Literal_value();
    void set_Literal_value(void * p,  int j);
    void print_LIT1(int w);

/*
    void setLiteral(int newInteger);
    int getIntLiteral();
    void setLiteral(float newReal);
    float getRealLiteral();
    void setLiteral(string newString);
    string getStringLiteral();*/


    void setTokenString(string s);
    string getTokenString();
    void setLeftChild(Token *tok);
    Token *getLeftChild();
    void setRightChild(Token *tok);
    Token *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();
};

#endif /* defined(__Lab4__Token__) */
