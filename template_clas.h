
//

//  Lab4
//
//  Created by Jie.
//
#include <string>



#ifndef __Lab5__template_class__
#define __Lab5__template_class__


#include <string>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <string.h>
#include <stdexcept>

using namespace std;
template <class T>
class template_clas {
private:
       T  lit_Value;
public:
    template_clas();

    T get_INTEGER_REAL_LIT();
	string get_STRING_LIT();
	T get_charptr_LIT();
	 char * free_string_ptr() {}


	void set_INTEGER_REAL_LIT(T a);
	void set_STRING_LIT(string s);
	void print_LIT();
};
template <class T>
    template_clas<T>::template_clas()
    {};

template <class T>
    T template_clas<T>::get_INTEGER_REAL_LIT()
    {  return lit_Value;   };

template <class T>
	string template_clas<T>::get_STRING_LIT()
	{  return string(lit_Value);};

template <class T>
	T template_clas<T>::get_charptr_LIT()
	{  return lit_Value;};

template <class T>
	void template_clas<T>::set_INTEGER_REAL_LIT(T a)
	{ lit_Value = a;	};

template <class T>
	void template_clas<T>::set_STRING_LIT(string s)
	{  lit_Value = (char*)malloc(sizeof(char) * s.length() + 1);
   		strcpy(lit_Value, s.c_str());	};

template <class T>
	void template_clas<T>::print_LIT()
	{ cout << lit_Value << "\t";};


#endif
