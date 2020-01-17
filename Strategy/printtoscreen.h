#ifndef PRINTTOSCREEN_H
#define PRINTTOSCREEN_H
#include "printstrategy.h"

class PrintToScreen : public PrintStrategy
{
public:
    PrintToScreen();
    void print() override;
};

#endif // PRINTTOSCREEN_H
