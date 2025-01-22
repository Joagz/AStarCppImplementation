#ifndef ASTAR_PATHFINDER_H
#define ASTAR_PATHFINDER_H

#include "map.hh"
#include "binheap.hh"

using namespace std;

class AStarPathfinder
{
private:
    Map map;
    binheap open_list;
    binheap closed_list;

public:
    AStarPathfinder();
    AStarPathfinder(Map map);
    ~AStarPathfinder();
    void reconstructPath(AStarNode *goal);
    void calculate(AStarNode *start, AStarNode *end);
};

#endif
