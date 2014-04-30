//
//  Print.h
//  Lab5
//
//  Created by jie/Zelpha
//

#ifndef __Lab4__Print__
#define __Lab4__Print__

#include <iostream>
#include "common.h"
#include "Token.h"
#include "Identifier.h"

using namespace std;

class Print
{
private:
    string sourceFileName;
    string currentDate;
    int pageNumber;
    int lineCount;

    void printPageHeader();

public:
    Print(char source_name[], char date[]);
    ~Print();

    void printLine(char line[]);
    void printToken(Token *token);
    int getLineCount();
    void printTree(Identifier *identifier);
    void printTreeRecursive(Identifier *identifier);
};

#endif
