//
//  LineNumberList.h
//  Lab5
//
//  Created by jie/Zelpha
//

#ifndef __Lab4__LineNumberList__
#define __Lab4__LineNumberList__

#include <iostream>

class LineNumberList
{
    int lineNumber;
    LineNumberList *nextLineNumber;

public:
    LineNumberList();
    ~LineNumberList();
    void setLineNumber(int num);
    int getLineNumber();
    void setNextLineNumber(LineNumberList *next);
    LineNumberList *getNextLineNumber();
};

#endif
