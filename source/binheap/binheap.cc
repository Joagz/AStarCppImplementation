#include "binheap.hh"

void binheap::exch(int i, int j)
{
    void *temp = this->el[i];
    this->el[i] = this->el[j];
    this->el[j] = temp;
}

binheap::binheap(bool (*comparator_fn)(void *, void *))
{
    this->root = NULL;
    this->tail = NULL;
    this->size = 0;
    this->comparator_fn = comparator_fn;
}

binheap::~binheap()
{
}

void binheap::add(void *ptr)
{
    if (ptr == NULL)
        return;
    if (BIN_HEAP_MAX_SIZE <= this->size)
        return;

    if (this->root == NULL)
    {
        this->el[0] = ptr;
        this->root = 0;
        this->size++;
        return;
    }

    this->el[this->size] = ptr;
    this->size++;
    swim(this->size - 1);
}

int binheap::swim(int index)
{
    if (this->tail == NULL)
    {
        this->tail = this->el[index];
    }

    int temp = index;
    int parent = (index - 1) / 2;
    while (parent >= 0 && (*comparator_fn)(this->el[temp], this->el[parent]))
    {
        exch(parent, temp);
        temp = parent;
        parent = (parent - 1) / 2;
    }

    this->root == this->el[0];
    this->tail = this->el[this->size - 1];
}

int binheap::sink(int index)
{
    if (this->root == NULL)
    {
        // nothing to do
        return;
    }

    int temp = index;
    int leftchild = 2 * index + 1;
    int rightchild = 2 * (index + 1);
    while (rightchild < this->size && leftchild < this->size)
    {
        if ((*comparator_fn)(this->el[temp], this->el[leftchild]))
        {
            exch(leftchild, temp);
            temp = leftchild;
            leftchild = 2 * leftchild + 1;
        }
        else if ((*comparator_fn)(this->el[temp], this->el[rightchild]))
        {
            exch(rightchild, temp);
            temp = rightchild;
            leftchild = 2 * (rightchild + 1);
        }
        else
            break;
    }

    this->root == this->el[0];
    this->tail = this->el[this->size - 1];
}

void *binheap::get(int index)
{
    if (index < 0 || index >= this->size)
        return NULL;
    return this->el[index];
}

void *binheap::getRoot()
{
    return this->root;
}

void *binheap::getTail()
{
    return this->tail;
}

void *binheap::remove(int index)
{
    exch(index, this->size - 1);
    // so now index is the position of tail element
    int toDelete = this->size - 1;

    this->el[toDelete] = NULL;

    this->tail = this->el[this->size - 1];
    
    this->size--;
    sink(index);
}