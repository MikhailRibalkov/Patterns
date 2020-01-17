#ifndef DFS_H
#define DFS_H

#include "basegraf.h"

class DFS : public BaseGraf
{
public:
    DFS(std::vector<std::vector<int>> g);
    void search(int index = 0) override;
};

#endif // DFS_H
