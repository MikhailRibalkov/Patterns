#include <iostream>
#include <vector>
#include "graf.h"
#include "subscriber.h"

using namespace std;

int main()
{
    std::vector<std::vector<int>> graf = {
        {1,2},
        {0,3},
        {0,4},
        {1,5},
        {2,5},
        {3,4}
    };

    Graf G(graf);
    Subscriber1 sub1;
    Subscriber2 sub2;

    G.addSubscriber(&sub1);
    G.addSubscriber(&sub2);
    G.search(new DFS);
    G.search(new BFS);

    return 0;
}
