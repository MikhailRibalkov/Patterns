#ifndef PRINT_H
#define PRINT_H

class PrintStrategy;

class Print
{
private:
    PrintStrategy *strategy;
public:
    Print();
    void print(PrintStrategy * strategy);
};

#endif // PRINT_H
