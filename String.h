


#ifndef __Lab5__String__
#define __Lab5__String__

#include "Literal.h"

#include<string>
#include<stdlib.h>
#include <iostream>


using namespace std;

class String: public Literal
{

private:
	char * is;

public:
	virtual string get_STRING_LIT();
	virtual void set_STRING_LIT(string  s);
	virtual void print_LIT();
    ~String()
	{free(is);}
	String(){};



	virtual int get_INTEGER_LIT(){return 3;};
	//virtual string  get_STRING_LIT(){};
	virtual float get_REAL_LIT(){return 3.3;};
	//get_NO_TYPE();

	virtual void set_INTEGER_LIT(int a){};
	//virtual void set_STRING_LIT(string s){};
	virtual void set_REAL_LIT(float d){};


};
#endif
