#ifndef ASTAR_PATHFINDER_H
#define ASTAR_PATHFINDER_H

#include "map/map.hh"
#include "binheap.cc"
#include "astarnode.hh"
#include <vector>

using namespace std;

class AStarPathfinder
{
private:
    Map map;
    vector<AStarNode> open_list;
    vector<AStarNode> closed_list;

public:
    AStarPathfinder(Map map);
    ~AStarPathfinder();
    void calculate(uint32_t start_x, uint32_t start_y, uint32_t end_x, uint32_t end_y);
};

#endif
