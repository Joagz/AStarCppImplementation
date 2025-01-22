#ifndef ASTAR_NODE_H
#define ASTAR_NODE_H

#include "map/map.hh"
#include <math.h>

#define HEURISTIC_MANHATTAN 0
#define HEURISTIC_EUCLIDEAN 1

class AStarNode
{
private:
    uint heuristic_type = HEURISTIC_EUCLIDEAN;
    uint cost_to_node = 1; // if we suppose a fixed cost, this could be just 1
    uint32_t x;
    uint32_t y;
    int f_cost;
public:
    AStarNode(uint32_t x, uint32_t y);
    AStarNode(uint32_t x, uint32_t y, uint cost_to_node);
    ~AStarNode();
    void setHeuristic(int end_x, int end_y);
    int getHeuristic();
    int getX();
    int getY();
};


#endif