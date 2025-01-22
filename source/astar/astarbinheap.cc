#include "astarbinheap.hh"
#include <iostream>

bool compare_astar_node(void *a, void *b)
{
    if (sizeof(a) != sizeof(AStarNode *) || sizeof(b) != sizeof(AStarNode *))
    {
        std::cout << "compare_astar_node: invalid pointer size" << std::endl;
        exit(-1);
    }

    AStarNode *nodeA = (AStarNode *)a;
    AStarNode *nodeB = (AStarNode *)b;

    return nodeA->getHeuristic() >
           nodeB->getHeuristic();
}

AStarBinHeap::AStarBinHeap()
{
    bheap = binheap(&compare_astar_node);
}
