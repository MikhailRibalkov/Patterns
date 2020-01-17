#include "graf.h"
#include <iostream>

void Graf::subNotify()
{
    for(auto subscriber : subList)
        subscriber->update("Search end!");
}

Graf::Graf()
{

}

Graf::Graf(std::vector<std::vector<int> > graf)
{
    this->graf = graf;
}

void Graf::initGraf(std::vector<std::vector<int> > graf)
{
    this->graf = graf;
}

void Graf::search(FSStrategy *strategy)
{
    std::cout << "start search" << std::endl;

    strategy->search(&graf);
    subNotify();

    std::cout << "end search" << std::endl;
}

std::vector<std::vector<int> > Graf::getGraf()
{
    return graf;
}

void Graf::addSubscriber(Subscriber *sub)
{
    subList.push_back(sub);
}
