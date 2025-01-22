#include "astar/astarpathfinder.hh"
#include <iostream>
#include <random>

int main()
{
    Map map = Map();
    map.lockTile(1,1);
    map.lockTile(1,0);
    map.lockTile(0,1);
    for (size_t i = 0; i < map.getSizeY(); i++)
    {
        for (size_t j = 0; j < map.getSizeX(); j++)
        {
            printf("%d", map.getTile(j,i));
        }
        printf("\n");
    }
    
    AStarPathfinder pathfinder = AStarPathfinder(map);

    AStarNode *start = new AStarNode(0, 0);
    AStarNode *end = new AStarNode(5,5);

    pathfinder.calculate(start, end);

    return 0;
}