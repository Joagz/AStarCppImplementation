#include "astar/astarpathfinder.hh"
#include <iostream>

int main()
{
    binheap heap = binheap();
    AStarNode target = AStarNode(5, 5);

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            AStarNode node(i, j);
            node.setHeuristic(target.getX(), target.getY());
            heap.add(node);
        }
    }

    int k = heap.getSize();
    for (int i = 0; i < k; i++)
    {
        AStarNode *node = ((AStarNode *)(heap.remove(0)));
        std::cout << node->getX() << "," << node->getY() << " | " << node->getHeuristic() << std::endl;
    }

    std::cout << k << std::endl;

    return 0;
}