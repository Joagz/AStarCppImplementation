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

#define LEFT_POS 0
#define RIGHT_POS 1
#define UPPER_POS 2
#define LOWER_POS 3
#define LEFTUPPER_POS 4
#define RIGHTUPPER_POS 5
#define LEFTLOWER_POS 6
#define RIGHTLOWER_POS 7

#define MAP_X 100
#define MAP_Y 100

class Map
{
private:
    uint32_t size_x;
    uint32_t size_y;
    bool tiles[MAP_X][MAP_Y] = {};
    bool checkNeighbor(int neighbor_pos, uint32_t x, uint32_t y);

public:
    Map(uint32_t size_x, uint32_t size_y);
    Map();
    ~Map();

    void lockTile(uint32_t x, uint32_t y);
    void unlockTile(uint32_t x, uint32_t y);

    bool getTile(uint32_t x, uint32_t y);

    void getNeighbors(bool neighbors[8], uint32_t x, uint32_t y);
    bool getNeighbor(int neighbor_pos, uint32_t x, uint32_t y);
    int getNeighborX(int neighbor_pos, uint32_t x, uint32_t y);
    int getNeighborY(int neighbor_pos, uint32_t x, uint32_t y);

    int getSizeX();
    int getSizeY();

    int transformPos(int pos);
};

#endif