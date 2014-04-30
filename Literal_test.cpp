
//
//  literal.h
//  Lab4
//
//  Created by Jie.
//
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;
template <class T>
class template_clas {
private:
       T  lit_Value;
public:
    template_clas();
    T get_INTEGER_REAL_LIT();
	T get_STRING_LIT();

	void set_INTEGER_REAL_LIT(T a);
	void set_STRING_LIT(T s);
	void print_LIT();
};
template <class T>
    template_clas<T>::template_clas()
    {};

template <class T>
    T template_clas<T>::get_INTEGER_REAL_LIT()
    {  return lit_Value;   };

template <class T>
	T template_clas<T>::get_STRING_LIT()
	{  return lit_Value;};

template <class T>
	void template_clas<T>::set_INTEGER_REAL_LIT(T a)
	{ lit_Value = a;	};

template <class T>
	void template_clas<T>::set_STRING_LIT(T s)
	{  lit_Value = (char*)malloc(sizeof(char) * s.length() + 1);
   		strcpy(lit_Value, s.c_str());	};

template <class T>
	void template_clas<T>::print_LIT()
	{ cout << lit_Value << "\t";};

int main(int argc, const char * argv[])
{
    template_clas<int> * jj = new  template_clas<int>();
    jj->set_INTEGER_REAL_LIT(10);
    jj->print_LIT();
      template_clas<float> * jj1 = new  template_clas<float>();
    jj1->set_INTEGER_REAL_LIT(10.567);
    jj1->print_LIT();
      template_clas<string> * jj2 = new  template_clas<string>();
    jj2->set_INTEGER_REAL_LIT("helloWorld");
    jj2->print_LIT();

}

