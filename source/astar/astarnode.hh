#ifndef ASTAR_NODE_H
#define ASTAR_NODE_H

#include "map/map.hh"

class AStarNode
{
private:
    uint heuristic;
    uint cost_to_node = 1; // if we suppose a fixed cost, this could be just 1
    uint32_t x;
    uint32_t y;

public:
    AStarNode(uint32_t x, uint32_t y);
    AStarNode(uint32_t x, uint32_t y, uint cost_to_node);
    ~AStarNode();
    void setHeuristic(uint h);
};

#endif