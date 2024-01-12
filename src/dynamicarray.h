
#ifndef DATA_STRUCTURES_IN_C_DYNAMICARRAY_H
#define DATA_STRUCTURES_IN_C_DYNAMICARRAY_H

#include <stdlib.h>
#include <assert.h>

#endif //DATA_STRUCTURES_IN_C_DYNAMICARRAY_H

typedef struct  {
    int* data;
    size_t pointer;
    size_t size;
} DArray;

typedef DArray Stack;
typedef DArray Queue;
typedef DArray PriorityQueue;

DArray initDArray(int size);
void resizeDArray(DArray* pDArray, int newSize);
bool isEmpty(DArray* pDArray);
bool isFull(DArray* pDArray);
void freeDArray(DArray* pDArray);