//
//  Print.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include "Integer.h"

#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


int Integer::get_INTEGER_LIT()
	{return i;}
void Integer::set_INTEGER_LIT(int a)
	{i = a;}
void Integer::print_LIT()
	{ cout << i << "\t";}


