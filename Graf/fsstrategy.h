#ifndef FSSTRATEGY_H
#define FSSTRATEGY_H

#include <vector>
#include <queue>


class FSStrategy
{
public:
    FSStrategy();
    virtual void search(std::vector<std::vector<int>> *graf) = 0;
    bool prepare(std::vector<std::vector<int>> *graf);
protected:
    std::vector<int> visited;
    std::vector<std::vector<int>> *graf;
};

class DFS : public FSStrategy
{
public:
    void search(std::vector<std::vector<int> > *graf) override;
    void depthSearch(int vertex);
};

class BFS : public FSStrategy
{
public:
    void search(std::vector<std::vector<int> > *graf) override;
};

#endif // FSSTRATEGY_H
