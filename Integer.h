

#ifndef __Lab5__Integer__
#define __Lab5__Integer__

#include "Literal.h"


using namespace std;

class Integer: public Literal
{

private:
	int i;

public:
	 virtual int get_INTEGER_LIT();
	 virtual void set_INTEGER_LIT(int a);
	 virtual void print_LIT();
	~Integer(){};
	Integer(){};

	//int get_INTEGER_LIT(){};
	virtual string  get_STRING_LIT(){string s = ""; return s;};
	virtual float get_REAL_LIT(){return 5.3;};
	//get_NO_TYPE();
    //virtual void set_INTEGER_LIT(int a){};
	virtual void set_STRING_LIT(string s){};
	virtual void set_REAL_LIT(float d){};



};
#endif
