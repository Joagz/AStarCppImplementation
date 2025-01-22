#include "binheap.hh"

// Swap elements at indices i and j
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
    if (sizeof(a) != sizeof(AStarNode *) || sizeof(b) != sizeof(AStarNode *))
    {
        exit(-1);
    }

    AStarNode *nodeA = (AStarNode *)a;
    AStarNode *nodeB = (AStarNode *)b;

    return nodeA->getHeuristic() <
           nodeB->getHeuristic();
}

// Destructor
binheap::~binheap() {}

// Add a new node to the heap
void binheap::add(AStarNode ptr)
{
    if (this->size >= BIN_HEAP_MAX_SIZE)
        return; // Heap is full

    // Add the node at the end of the heap and swim it up
    this->el[this->size] = ptr;
    this->size++;
    swim(this->size - 1); // Ensure heap property is maintained
}

// Get the current size of the heap
int binheap::getSize() { return this->size; }

// Swim element at the given index to restore heap property
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

    // Update root and tail after operation
    this->root = this->el[0];
    this->tail = this->el[this->size - 1];

    return temp;
}

// Sink element at the given index to restore heap property
int binheap::sink(int index)
{
    if (this->size <= 0)
        return -1;

    int temp = index;
    int leftchild = 2 * index + 1;
    int rightchild = 2 * (index + 1);

    while (leftchild < this->size)
    {
        // Choose the smallest of the left or right child
        int smallest = index;

        if (leftchild < this->size && compare_astar_node(&this->el[leftchild], &this->el[smallest]))
            smallest = leftchild;
        if (rightchild < this->size && compare_astar_node(&this->el[rightchild], &this->el[smallest]))
            smallest = rightchild;

        // If no swap needed, break
        if (smallest == index)
            break;

        // Swap and continue sinking
        exch(index, smallest);
        index = smallest;
        leftchild = 2 * index + 1;
        rightchild = 2 * (index + 1);
    }

    // Update root and tail after operation
    this->root = this->el[0];
    this->tail = this->el[this->size - 1];

    return temp;
}

// Get the element at the given index
AStarNode *binheap::get(int index)
{
    if (index < 0 || index >= this->size)
        return nullptr;
    return &this->el[index];
}

// Get the root element of the heap (smallest element)
AStarNode *binheap::getRoot()
{
    return &this->el[0];
}

// Get the tail element of the heap (last element)
AStarNode *binheap::getTail()
{
    return &this->el[this->size - 1];
}

// Remove the element at the given index
AStarNode *binheap::remove(int index)
{
    if (index < 0 || index >= this->size)
        return nullptr;

    // Swap the element with the last element
    exch(index, this->size - 1);
    AStarNode *removed = &this->el[this->size - 1];
    this->size--;

    // Restore the heap property by sinking
    sink(index);

    // Update root and tail after operation
    this->root = this->el[0];
    this->tail = this->el[this->size - 1];

    return removed;
}
