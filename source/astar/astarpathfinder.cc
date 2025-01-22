#include "astarpathfinder.hh"
#include <iostream>
#include <vector>
#include <algorithm>

void reconstruct(AStarNode *goal)
{
    AStarNode *current = goal;
    std::vector<AStarNode *> path; // To store the path in reverse order

    // Traverse the path by following parent pointers
    while (current != nullptr)
    {
        path.push_back(current);        // Add the current node to the path
        current = current->getParent(); // Move to the parent
    }

    // Reverse the path to make it start from the start node
    std::reverse(path.begin(), path.end());

    std::cout << "Path found:\n";
    for (auto &node : path)
    {
        std::cout << "(" << node->x << ", " << node->y << ")\n"; // Output the path
    }
}

void clearListAndDelete(binheap &list)
{
    while (!list.isEmpty())
    {
        AStarNode *ptr = list.remove(0);
        if (ptr != nullptr)
        {
            delete ptr; // Deallocate memory for the node
        }
    }
}

void AStarPathfinder::calculate(AStarNode *start, AStarNode *end)
{
    open_list.add(start); // Add the start node to the open list
    while (!open_list.isEmpty())
    {
        AStarNode *q = open_list.remove(0); // Get the node with the lowest f_cost

        // Skip node if it is already in the closed list
        for (int i = 0; i < closed_list.getSize(); i++)
        {
            AStarNode *closedNode = closed_list.get(i);
            if (closedNode->x == q->x && closedNode->y == q->y)
            {
                continue; // Skip this node if it's already in the closed list
            }
        }

        bool neighbors[8] = {false}; // Assume 8 directions for neighbors (4 cardinal + 4 diagonal)
        map.getNeighbors(neighbors, q->x, q->y);
        bool hasNeighbor = false;
        for (int i = 0; i < 8; i++)
        {
            if (!neighbors[i])
                continue;
            hasNeighbor = true;
            int x = map.getNeighborX(map.transformPos(i), q->x, q->y);
            int y = map.getNeighborY(map.transformPos(i), q->x, q->y);

            // Skip if the neighbor is the same as the current node
            if (x == q->x && y == q->y)
            {
                continue;
            }

            AStarNode *cur = new AStarNode(x, y);
            cur->setParent(q);
            cur->g_cost = q->g_cost + 1;       // 1 unit cost for each step
            cur->setHeuristic(end->x, end->y); // Set the heuristic
            cur->f_cost = cur->g_cost + cur->h_cost;

            // If the end node is found, stop and reconstruct the path
            if (x == end->x && y == end->y)
            {
                std::cout << "Found the goal!" << std::endl;
                reconstruct(cur);
                clearListAndDelete(open_list);
                clearListAndDelete(closed_list);
                delete cur;
                return;
            }

            bool inOpenList = false;
            for (int j = 0; j < open_list.getSize(); j++)
            {
                AStarNode *found = open_list.get(j);
                if (found->x == cur->x && found->y == cur->y)
                {
                    if (found->f_cost <= cur->f_cost) // Don't add worse nodes to open list
                    {
                        inOpenList = true;
                    }
                    else
                    {
                        open_list.remove(j); // Replace the existing node with the better one
                    }
                }
            }

            if (inOpenList)
            {
                continue;
            }

            open_list.add(cur); // Add valid node to the open list
        }
        if (!hasNeighbor)
        {
            printf("No possible path to node \n");
            return;
        }
        closed_list.add(q); // Add the processed node to the closed list
    }
}

AStarPathfinder::AStarPathfinder(Map map)
{
    this->map = map;
}

AStarPathfinder::~AStarPathfinder()
{
}