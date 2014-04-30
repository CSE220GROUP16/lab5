//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include "Token.h"

Token::Token()
{
    //What code do I need here to initialize everything.
    setLeftChild(NULL);
    setRightChild(NULL);
    list = NULL;


}
Token::~Token()
{
    //What code do I need here to free memory
    LineNumberList *root = getLineNumberList();
    LineNumberList *tmp = root;

    while (root != NULL)
    {
        if (this->literal)
         { delete this->literal;
          free(this->literal);}

        tmp = tmp->getNextLineNumber();
        delete root;
        root = tmp;
    }


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

/*
void Token::setLiteral(int newInteger)
{
    this->literal.integer = newInteger;
//this->literal.set_INTEGER_LIT(newInteger);

}
int Token::getIntLiteral()
{
   // return this->literal.integer;
   return this->literal.get_INTEGER_LIT;
}
void Token::setLiteral(float newReal)
{
    //this->literal.real = newReal;
  this->literal.set_REAL_LIT(newReal) ;
}
float Token::getRealLiteral()
{
    //return this->literal.real;
	this->literal.get_REAL_LIT(newReal) ;
}
void Token::setLiteral(string newString)
{
   // this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
   // strcpy(this->literal.stringLiteral, newString.c_str());
	//char * temp1 = (char*)malloc(sizeof(char) * newString.length() + 1);

   this->literal.set_STRING_LIT( (char*)malloc(sizeof(char) * newString.length() + 1));

   strcpy(this->literal.get_STRING_LIT, newString.c_str());

}


string Token::getStringLiteral()
{
   // return string(this->literal.stringLiteral);
	 string(this->literal.get_STRING_LIT());
}
*/

void Token::setTokenString(string s)
{
    this->tokenString = s;
}
string Token::getTokenString()
{
    return this->tokenString;
}
//What methods am I missing to implement a binary tree.
void Token::setLeftChild(Token *tok)
{
    this->leftChild = tok;
}
Token *Token::getLeftChild()
{
    return this->leftChild;
}
void Token::setRightChild(Token *tok)
{
    this->rightChild = tok;
}
Token *Token::getRightChild()
{
    return this->rightChild;
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

void Token::addToLineNumberList(LineNumberList *listItem)
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
LineNumberList *Token::getLineNumberList()
{
    return this->list;
}
