#include "print.h"
#include <printstrategy.h>
Print::Print()
{

}

void Print::print(PrintStrategy *strategy)
{
    this->strategy = strategy;
    strategy->print();
}
