/**
 * @author Joaquin Gomez
 * @brief static size binary heap
 */
#ifndef BINHEAP_H
#define BINHEAP_H

#include "astarnode.hh"

#define BIN_HEAP_MAX_SIZE 1000

using namespace std;

class binheap
{
private:
    AStarNode* el[BIN_HEAP_MAX_SIZE];
    AStarNode* root;
    AStarNode* tail;
    int size;
    void exch(int i, int j);
    bool compare_astar_node(AStarNode *, AStarNode *);
public:
    binheap();
    ~binheap();
    void add(AStarNode *ptr);
    int swim(int index);
    int sink(int index);
    AStarNode *get(int index);
    AStarNode *getRoot();
    AStarNode *getTail();
    AStarNode *remove(int index);
    int getSize();
    bool isEmpty();

};

#endif