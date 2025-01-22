#ifndef ASTAR_BINHEAP_H
#define ASTAR_BINHEAP_H

#include "astarnode.hh"
#include "binheap.hh"

class AStarBinHeap : public binheap
{
private:
    binheap bheap;

public:
    AStarBinHeap();
    ~AStarBinHeap();
    void add(AStarNode& node);
};

void AStarBinHeap::add(AStarNode& node) {
    bheap.add(&node);
}

AStarBinHeap::~AStarBinHeap()
{
}

#endif