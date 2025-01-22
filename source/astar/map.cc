#include "map.hh"
#include <iostream>

int Map::transformPos(int pos)
{
    switch (pos)
    {
    case LEFT_POS:
        return LEFT;
    case RIGHT_POS:
        return RIGHT;
    case UPPER_POS:
        return UPPER;
    case LOWER_POS:
        return LOWER;
    case LEFTUPPER_POS:
        return LEFTUPPER;
    case RIGHTUPPER_POS:
        return RIGHTUPPER;
    case RIGHTLOWER_POS:
        return RIGHTLOWER;
    case LEFTLOWER_POS:
        return LEFTLOWER;
    default:
        break;
    }
    return LEFT;
}

bool Map::checkNeighbor(int neighbor_pos, uint32_t x, uint32_t y)
{
    switch (neighbor_pos)
    {
    case LEFT:
        if (x <= 0)
            return false;
        break;
    case RIGHT:
        if (x >= this->size_x)
            return false;
        break;
    case UPPER:
        if (y >= this->size_y)
            return false;
        break;
    case LOWER:
        if (y <= 0)
            return false;
        break;
    case LEFTUPPER:
        if (x <= 0 || y >= this->size_y)
            return false;
        break;
    case RIGHTUPPER:
        if (x >= this->size_x || y >= this->size_y)
            return false;
        break;
    case RIGHTLOWER:
        if (x >= this->size_x || y <= 0)
            return false;
        break;
    case LEFTLOWER:
        if (x <= 0 || y <= 0)
            return false;
        break;
    default:
        break;
    }

    return true;
}

// Returns if the neighbor exists
bool Map::getNeighbor(int neighbor_pos, uint32_t x, uint32_t y)
{
    return checkNeighbor(neighbor_pos, x, y) && this->tiles[x][y];
}

void Map::getNeighbors(bool neighbors[8], uint32_t x, uint32_t y)
{
    for (int i = 0; i < 8; i++)
    {
        neighbors[i] = getNeighbor(i, x, y);
    }
}

int Map::getNeighborX(int neighbor_pos, uint32_t x, uint32_t y)
{
    if (!checkNeighbor(neighbor_pos, x, y))
        return -1;

    switch (neighbor_pos & 0b0011)
    {
    case LEFT:
        return x - 1;
        break;

    case RIGHT:
        return x + 1;
        break;

    default:
        break;
    }

    return x;
}

int Map::getNeighborY(int neighbor_pos, uint32_t x, uint32_t y)
{
    if (!checkNeighbor(neighbor_pos, x, y))
        return -1;

    switch (neighbor_pos & 0b1100)
    {
    case UPPER:
        return y + 1;
        break;
    case LOWER:
        return y - 1;
    default:
        break;
    }

    return y;
}

bool Map::getTile(uint32_t x, uint32_t y)
{
    if (this->tiles == nullptr)
        exit(-1);

    return this->tiles[x][y];
}

int Map::getSizeX()
{
    return this->size_x;
}

int Map::getSizeY()
{
    return this->size_y;
}

Map::Map()
{
    this->size_x = MAP_X;
    this->size_y = MAP_Y;

    for (int j = 0; j < size_x; j++)
    {
        for (int i = 0; i < size_y; i++)
        {
            this->tiles[j][i] = true;
        }
    }
}

Map::~Map()
{
}

void Map::lockTile(uint32_t x, uint32_t y)
{
    if (this->tiles == nullptr)
    {
        return;
    }

    this->tiles[x][y] = false;
}

void Map::unlockTile(uint32_t x, uint32_t y)
{
    if (this->tiles == nullptr)
    {
        return;
    }

    this->tiles[x][y] = true;
}