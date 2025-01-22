#include "astarpathfinder.hh"

void AStarPathfinder::calculate(uint32_t start_x, uint32_t start_y, uint32_t end_x, uint32_t end_y)
{

    AStarNode startNode = AStarNode(start_x, start_y);
    open_list.push_back(startNode);

    while (!open_list.empty())
    {
        
    }
}

AStarPathfinder::AStarPathfinder(Map map)
{
    this->map = map;
}

AStarPathfinder::~AStarPathfinder()
{
}