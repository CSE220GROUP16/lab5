//
//  Print.cpp
//  Lab4
//
//  Created by Bryce Holton.
//


#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include "String.h"

using namespace std;

 string String::get_STRING_LIT()
	{
	return string(is);
	}
 void String::set_STRING_LIT(string  s)
	{
     		is = (char*)malloc(sizeof(char) * s.length() + 1);
   		strcpy(is, s.c_str());
	}

 void String::print_LIT()
	{cout << is << "\t";}


