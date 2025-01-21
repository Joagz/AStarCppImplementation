#ifndef MAP_H
#define MAP_H

#include <stdint.h>
#include <stdlib.h>

#define LEFT 0b0001
#define RIGHT 0b0010
#define UPPER 0b0100
#define LOWER 0b1000
#define LEFTUPPER 0b0101
#define RIGHTUPPER 0b0110
#define LEFTLOWER 0b1001
#define RIGHTLOWER 0b1010

class Map
{
private:
    uint32_t size_x;
    uint32_t size_y;
    bool **tiles;
    bool checkNeighbor(int neighbor_pos, uint32_t x, uint32_t y);

public:
    Map(uint32_t size_x, uint32_t size_y);
    ~Map();

    void lockTile(uint32_t x, uint32_t y);
    void unlockTile(uint32_t x, uint32_t y);

    bool getTile(uint32_t x, uint32_t y);

    bool getNeighbor(int neighbor_pos, uint32_t x, uint32_t y);
    int getNeighborX(int neighbor_pos, uint32_t x, uint32_t y);
    int getNeighborY(int neighbor_pos, uint32_t x, uint32_t y);

    int getSizeX();
    int getSizeY();
};

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
    bool status;

    status = (this->tiles != nullptr && this->size_x > 0 && this->size_y > 0);

    if (!status)
        exit(-1);

    status = checkNeighbor(neighbor_pos, x, y);

    return status;
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

Map::Map(uint32_t size_x, uint32_t size_y)
{
    this->size_x = size_x;
    this->size_y = size_y;

    this->tiles = (bool **)calloc(size_x, sizeof(bool *));

    for (int j = 0; j < size_x; j++)
    {
        this->tiles[j] = (bool *)calloc(size_y, sizeof(bool));
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

#endif