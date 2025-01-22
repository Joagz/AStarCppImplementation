#ifndef ASTAR_NODE_H
#define ASTAR_NODE_H

#include <stdint.h>
#include <math.h>

#define HEURISTIC_MANHATTAN 0
#define HEURISTIC_EUCLIDEAN 1

class AStarNode
{
private:
    uint heuristic_type = HEURISTIC_EUCLIDEAN;
    AStarNode *parent = NULL;

public:
    uint32_t x;
    uint32_t y;
    int f_cost = std::numeric_limits<int>::max();
    int g_cost = std::numeric_limits<int>::max();
    int h_cost = std::numeric_limits<int>::max();

    AStarNode();
    AStarNode(uint32_t x, uint32_t y);
    ~AStarNode();
    void setHeuristic(int end_x, int end_y);
    void setParent(AStarNode *p);
    AStarNode *getParent();

   
};

#endif