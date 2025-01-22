/**
 * @author Joaquin Gomez
 * @brief static size binary heap, intended for embedded systems
 */

#ifndef BINHEAP_H
#define BINHEAP_H

#include <vector>

#define BIN_HEAP_MAX_SIZE 50
#define BIN_HEAP_MAX_ELEMENT_SIZE 512

using namespace std;

class binheap
{
private:
    void *el[BIN_HEAP_MAX_SIZE] = {};
    void* root;
    void* tail;
    int size;
    /**
     * @brief Should return true on the condition `a_2 < a_1`
     * @param a_1 pointer to the first element to compare
     * @param a_2 pointer to the second element to compare
     */
    bool (*comparator_fn)(void * a_1, void * a_2);

    void exch(int i, int j);
public:
    binheap(bool (*comparator_fn)(void *, void *));
    binheap();
    ~binheap();
    void add(void *ptr);
    int swim(int index);
    int sink(int index);
    void *get(int index);
    void *getRoot();
    void *getTail();
    void *remove(int index);
};

#endif