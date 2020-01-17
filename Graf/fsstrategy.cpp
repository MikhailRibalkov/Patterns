#include "fsstrategy.h"
#include <iostream>

FSStrategy::FSStrategy()
{

}

bool FSStrategy::prepare(std::vector<std::vector<int> > *graf)
{
    this->graf = graf;
    visited.clear();
    visited.assign(graf->size(), 0);

    if(graf->empty())
    {
        std::cout << "graf is empty" << std::endl;
        return false;
    }

    return true;
}

void DFS::search(std::vector<std::vector<int> > *graf)
{
    if(!prepare(graf))
        return;
    depthSearch(0);
}

void DFS::depthSearch(int vertex)
{
    std::cout << vertex << std::endl;

    visited[vertex] = 1;

    for(auto nextVertex : graf->at(vertex))
    {
        if(!visited[nextVertex])
            depthSearch(nextVertex);
    }
}

void BFS::search(std::vector<std::vector<int> > *graf)
{
    if(!prepare(graf))
        return;

    std::queue<int> queue;
    queue.push(0);
    visited[0] = 1;

    while(!queue.empty())
    {
        int vertex = queue.front();
        queue.pop();
        std::cout << vertex << std::endl;

        for(auto nextVertex : graf->at(vertex))
        {
            if(!visited[nextVertex])
            {
                queue.push(nextVertex);
                visited[nextVertex] = 1;
            }
        }
    }
}
