#ifndef BASEGRAF_H
#define BASEGRAF_H

#include <vector>

class BaseGraf
{
protected:
    int n;
    std::vector<int> used;
    std::vector<std::vector<int>> graf;

public:
    BaseGraf(std::vector<std::vector<int>> g);
    ~BaseGraf();
    virtual void search(int index = 0) {};

};

#endif // BASEGRAF_H
