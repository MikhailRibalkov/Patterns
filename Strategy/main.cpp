#include <iostream>
#include "print.h"
#include "printtoscreen.h"
#include "printtofile.h"

using namespace std;

int main()
{
    Print writer;
    PrintToScreen *ps = new PrintToScreen;
    PrintToFile *pf = new PrintToFile;
    writer.print(ps);
    writer.print(pf);
    delete ps;
    delete pf;
    return 0;
}
