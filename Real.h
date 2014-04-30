

#ifndef __Lab5__Real__
#define __Lab5__Real__

#include "Literal.h"


using namespace std;

class Real: public Literal
{

private:
	float iff;

public:
	virtual float get_REAL_LIT();
	virtual void set_REAL_LIT(float d);
	virtual void print_LIT();
	~Real(){};
	Real(){};

	virtual int get_INTEGER_LIT(){return 4;};
	virtual string  get_STRING_LIT(){string s = ""; return s;};
	//virtual float get_REAL_LIT(){};
	//get_NO_TYPE();

	virtual void set_INTEGER_LIT(int a){};
	virtual void set_STRING_LIT(string s){};
	//virtual void set_REAL_Lit(float d){};
};
#endif
