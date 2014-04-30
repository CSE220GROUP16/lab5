//
//  Token.cpp
//  Lab5
//
//  Created by jie/Zelpha
//

#include "Token.h"

Token::Token()
{
}
Token::~Token()
{
}
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
TokenCode Token::getCode()
{
    return this->code;
}
void Token::setType(LiteralType newType)
{
    this->type = newType;
}
LiteralType Token::getType()
{
    return this->type;
}
void Token::setTokenString(string s)
{
    this->tokenString = s;
}
string Token::getTokenString()
{
    return this->tokenString;
}





void * Token::get_Literal_value()
{   return this->literal;
}
void Token::set_Literal_value(void * temp, int j)
{

    if (j ==1)
        {
         int w3 = ((template_clas<int> *)temp)->get_INTEGER_REAL_LIT();
         template_clas<int> *ii = new template_clas<int>();  //;String_mine *l_string = (String_mine *) malloc(sizeof(String_mine));
         ii->set_INTEGER_REAL_LIT(w3);
         this->literal = ii;

        }
    if (j==2)
        {float r3 = ((template_clas<float> *)temp)->get_INTEGER_REAL_LIT();
         template_clas<float> *rr = new template_clas<float>();  //;String_mine *l_string = (String_mine *) malloc(sizeof(String_mine));
         rr->set_INTEGER_REAL_LIT(r3);
        this->literal = rr;
        }
    if(j==3)
        {string  s3 = ((template_clas<char *> *)temp)->get_STRING_LIT();
         template_clas<char *> *ss = new template_clas<char *>();  //;String_mine *l_string = (String_mine *) malloc(sizeof(String_mine));
         ss->set_STRING_LIT(s3);
        this->literal = ss;
        }
}

 void Token::print_LIT1(int w){


    if (w==1)
        ((template_clas<int> *)this->literal)->print_LIT();
    if (w==2)
        ((template_clas<float> *)this->literal)->print_LIT();
    if (w==3)
        ((template_clas<string> *)this->literal)->print_LIT();
 }

