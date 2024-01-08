
#ifndef DATA_STRUCTURES_IN_C_SORTING_H
#define DATA_STRUCTURES_IN_C_PRIORITYQUEUE_H

#include <stdlib.h>
#include <assert.h>

#endif //DATA_STRUCTURES_IN_C_SORTING_H

typedef struct {
    int* data;
    size_t queuePointer;
    size_t size;
} PriorityQueue;

PriorityQueue initPriotyQueue(int size) {
    PriorityQueue priorityQueue;
    priorityQueue.data = (int*) malloc(sizeof(int) * size);
    priorityQueue.queuePointer = 0;
    priorityQueue.size = size;
    return priorityQueue;
}

void resizePriorityQueue(PriorityQueue* pQueue, int newSize) {
    assert(pQueue != nullptr && "pStack is null\n");
    pQueue->data = (int*)realloc(pQueue->data,sizeof(int) * newSize);
    assert(pQueue->data != nullptr && "failed to reallocate dynamic array");
}

void priorityEnqueue(PriorityQueue* pQueue, int newData, void(*Predicate)(int[], int)) {
    assert(pQueue != nullptr && "pQueue is null\n");
    int* array = pQueue->data;

    if (pQueue->size == pQueue->queuePointer) {
        pQueue->size++;
        resizePriorityQueue(pQueue, pQueue->size);

        array[pQueue->queuePointer] = newData;
        pQueue->queuePointer++;
    }
    else {
        array[pQueue->queuePointer] = newData;
        pQueue->queuePointer++;
    }
    Predicate(pQueue->data, pQueue->queuePointer);
}