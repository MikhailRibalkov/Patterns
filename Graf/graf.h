#ifndef GRAF_H
#define GRAF_H

#include <vector>
#include <list>
#include "fsstrategy.h"
#include "subscriber.h"


class Graf
{
private:
    std::vector<std::vector<int>> graf;
    std::list<Subscriber*> subList;

    void subNotify();
public:
    Graf();
    Graf(std::vector<std::vector<int>> graf);
    void initGraf(std::vector<std::vector<int>> graf);
    virtual void search(FSStrategy *strategy);

    std::vector<std::vector<int>> getGraf();
    void addSubscriber(Subscriber *sub);
};

#endif // GRAF_H
