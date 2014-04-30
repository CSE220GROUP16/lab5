//
//  Token.h
//  Lab5
//
//  Created by jie/Zelpha
//

#ifndef __Lab4__Token__
#define __Lab4__Token__

#include<string.h>
#include<stdlib.h>
#include <iostream>
#include "common.h"
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
    void * literal;
    string tokenString;

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
    void setTokenString(string s);
    string getTokenString();
};
#endif
