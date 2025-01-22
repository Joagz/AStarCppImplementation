#include "astarnode.hh"

AStarNode::AStarNode(uint32_t x, uint32_t y)
{
    this->x = x;
    this->y = y;
}

AStarNode::AStarNode()
{
    this->x = 0;
    this->y = 0;
    this->f_cost = INT32_MAX;
    this->g_cost = INT32_MAX;
    this->h_cost = INT32_MAX;
}
AStarNode::~AStarNode()
{
}

void AStarNode::setHeuristic(int end_x, int end_y)
{
    switch (this->heuristic_type)
    {
    case HEURISTIC_MANHATTAN:
        this->h_cost = abs(end_x - (int)this->x) + abs(end_y - (int)this->y);
        break;
    case HEURISTIC_EUCLIDEAN:
        this->h_cost = sqrt(pow(end_x - (int)this->x, 2) + pow(end_y - (int)this->y, 2));
        break;
    default:
        this->h_cost = abs(end_x - (int)this->x) + abs(end_y - (int)this->y);
    }
}


void AStarNode::setParent(AStarNode *p)
{
    this->parent = p;
}

AStarNode *AStarNode::getParent()
{
    return this->parent;
}
