#include "astarnode.hh"

AStarNode::AStarNode(uint32_t x, uint32_t y)
{
    this->x = x;
    this->y = y;
}

AStarNode::AStarNode(uint32_t x, uint32_t y, uint cost_to_node)
{
    this->x = x;
    this->y = y;
    this->cost_to_node = cost_to_node;
}

AStarNode::AStarNode()
{
    this->x = 0;
    this->y = 0;
    this->f_cost = 0;
}
AStarNode::~AStarNode()
{
}


int AStarNode::getX()
{
    return this->x;
}
int AStarNode::getY()
{
    return this->y;
}

int AStarNode::getHeuristic()
{
    return this->f_cost;
}

void AStarNode::setHeuristic(int end_x, int end_y)
{
    switch (this->heuristic_type)
    {
    case HEURISTIC_MANHATTAN:
        this->f_cost = abs(end_x - (int)this->x) + abs(end_y - (int)this->y);

        // Euclidean distance by default
    default:
        this->f_cost = sqrt(pow(end_x - (int)this->x, 2) + pow(end_y - (int)this->x, 2));
    }
}