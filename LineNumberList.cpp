//
//  LineNumberList.cpp
//  Lab5
//
//  Created by jie/Zelpha
//

#include "LineNumberList.h"

LineNumberList::LineNumberList()
{
    setLineNumber(0);
    setNextLineNumber(NULL);
}
LineNumberList::~LineNumberList()
{

}
void LineNumberList::setLineNumber(int num)
{
    this->lineNumber = num;
}
int LineNumberList::getLineNumber()
{
    return this->lineNumber;
}
void LineNumberList::setNextLineNumber(LineNumberList *next)
{
    this->nextLineNumber = next;
}
LineNumberList *LineNumberList::getNextLineNumber()
{
    return this->nextLineNumber;
}
