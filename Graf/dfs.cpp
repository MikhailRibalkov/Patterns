#include "dfs.h"
#include <iostream>

DFS::DFS(std::vector<std::vector<int>> g) : BaseGraf(g)
{

}

void DFS::search(int index)
{
    used[index] = 1;
    std::cout << "vertex " << index + 1 << " is checked" << std::endl;
    for(int i = index; i < int(graf.size()); ++i)
    {
        for(int j = 0; j < n; ++j)
            if(graf[i][j] && !used[j])
                search(j);
    }
}
