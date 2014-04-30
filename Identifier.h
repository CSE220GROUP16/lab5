
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
private:
    TokenCode code;
    LiteralType type;
    union
    {
        int integer;
        float real;
        char *stringLiteral;
    }
    literal;
    string tokenString;
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
    void setLiteral(int newInteger);
    int getIntLiteral();
    void setLiteral(float newReal);
    float getRealLiteral();
    void setLiteral(string newString);
    string getStringLiteral();
    void setTokenString(string s);
    string getTokenString();
    void setLeftChild(Token *tok);
    Token *getLeftChild();
    void setRightChild(Token *tok);
    Token *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();

***************/
