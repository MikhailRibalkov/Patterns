#include "basegraf.h"

BaseGraf::BaseGraf(std::vector<std::vector<int>> g):
    n(g.size())
{
    graf = g;
    used.resize(n);
}

BaseGraf::~BaseGraf()
{
}
