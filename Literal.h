
//
//  literal.h
//  Lab4
//
//  Created by Jie.
//
#include <string>



#ifndef __Lab5__Literal__
#define __Lab5__Literal__


#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;



class Literal {
 private:
  public:

	virtual int get_INTEGER_LIT()=0;
	virtual float get_REAL_LIT()=0;
	virtual string  get_STRING_LIT()=0;
	//get_NO_TYPE();

	virtual void set_INTEGER_LIT(int a)=0;
	virtual void set_REAL_LIT(float d)=0;
	virtual void set_STRING_LIT(string s)=0;

	virtual void print_LIT()=0;
};








#endif
