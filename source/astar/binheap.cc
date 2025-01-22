#include "binheap.hh"

void binheap::exch(int i, int j)
{
    AStarNode temp = this->el[i];
    this->el[i] = this->el[j];
    this->el[j] = temp;
}

binheap::binheap()
{
    this->size = 0;
}

bool binheap::compare_astar_node(AStarNode *a, AStarNode *b)
{
    return a->getHeuristic() <
           b->getHeuristic();
}

binheap::~binheap() {}

void binheap::add(AStarNode ptr)
{
    if (this->size >= BIN_HEAP_MAX_SIZE)
        return;

    this->el[this->size] = ptr;
    this->size++;
    swim(this->size - 1);
}

int binheap::getSize() { return this->size; }

int binheap::swim(int index)
{
    if (this->size <= 0)
        return -1;

    int temp = index;
    int parent = (index - 1) / 2;
    while (parent >= 0 && compare_astar_node(&this->el[temp], &this->el[parent]))
    {
        exch(parent, temp);
        temp = parent;
        parent = (parent - 1) / 2;
    }

    this->root = this->el[0];
    this->tail = this->el[this->size - 1];

    return temp;
}

int binheap::sink(int index)
{
    if (this->size <= 0)
        return -1;

    int temp = index;
    int leftchild = 2 * index + 1;
    int rightchild = 2 * (index + 1);

    while (leftchild < this->size)
    {
        int smallest = index;

        if (leftchild < this->size && compare_astar_node(&this->el[leftchild], &this->el[smallest]))
            smallest = leftchild;
        if (rightchild < this->size && compare_astar_node(&this->el[rightchild], &this->el[smallest]))
            smallest = rightchild;

        // If no swap needed, break
        if (smallest == index)
            break;

        exch(index, smallest);
        index = smallest;
        leftchild = 2 * index + 1;
        rightchild = 2 * (index + 1);
    }

    this->root = this->el[0];
    this->tail = this->el[this->size - 1];

    return temp;
}

AStarNode *binheap::get(int index)
{
    if (index < 0 || index >= this->size)
        return nullptr;
    return &this->el[index];
}

AStarNode *binheap::getRoot()
{
    return &this->el[0];
}

AStarNode *binheap::getTail()
{
    return &this->el[this->size - 1];
}

AStarNode *binheap::remove(int index)
{
    if (index < 0 || index >= this->size)
        return nullptr;

    exch(index, this->size - 1);
    AStarNode *removed = &this->el[this->size - 1];
    this->size--;

    sink(index);
    return removed;
}
