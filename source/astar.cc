#include "map/map.hh"
#include <iostream>

int main()
{
    Map map = Map(10, 10);
    map.lockTile(1, 2);

    return 0;
}