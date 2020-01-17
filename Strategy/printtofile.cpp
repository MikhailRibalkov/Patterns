#include "printtofile.h"
#include <fstream>
#include <iostream>

PrintToFile::PrintToFile()
{

}

void PrintToFile::print()
{
    std::ofstream out;
    out.open("/home/mikhail/print.txt");
    if(out.is_open())
    {
        out << "Printing to file success!";
        out.close();
        std::cout << "text is written" << std::endl;
    }
    else
        std::cout << "text is not written!" << std::endl;
}
