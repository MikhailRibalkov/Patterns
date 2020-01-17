#ifndef PRINTTOFILE_H
#define PRINTTOFILE_H

#include "printstrategy.h"

class PrintToFile : public PrintStrategy
{
public:
    PrintToFile();
    void print() override;
};

#endif // PRINTTOFILE_H
