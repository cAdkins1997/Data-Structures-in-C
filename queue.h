
#ifndef DATA_STRUCTURES_IN_C_QUEUE_H
#define DATA_STRUCTURES_IN_C_QUEUE_H

#include <stdlib.h>
#include <assert.h>

#endif //DATA_STRUCTURES_IN_C_QUEUE_H

typedef struct  {
    int* data;
    size_t queuePointer;
    size_t size;
} Queue;

Queue initQueue(int size) {
    Queue queue;
    queue.data = (int*)malloc(sizeof(int) * size);
    queue.queuePointer = 0;
    queue.size = size;
    return queue;
}

void resizeQueue(Queue* pQueue, int newSize) {
    assert(pQueue != nullptr && "pStack is null\n");
    pQueue->data = (int*)realloc(pQueue->data,sizeof(int) * newSize);
    assert(pQueue->data != nullptr && "failed to reallocate dynamic array");
}

void enqueue(Queue* pQueue, int newData) {
    assert(pQueue != nullptr && "pQueue is null\n");
    int* array = pQueue->data;

    if (pQueue->size == pQueue->queuePointer) {
        pQueue->size++;
        resizeQueue(pQueue, pQueue->size);

        array[pQueue->queuePointer] = newData;
        pQueue->queuePointer++;
    }
    else {
        array[pQueue->queuePointer] = newData;
        pQueue->queuePointer++;
    }
}

int dequeue(Queue* pQueue) {
    assert(pQueue != nullptr && "pQueue is null\n");
    int* array = pQueue->data;
    int data = array[0];
    array[0] = 0;
    pQueue->queuePointer--;
    return data;
}

int front(Queue* pQueue) {
    return pQueue->data[0];
}

bool isQueueEmpty(Queue* Queue) {
    if (Queue->queuePointer == 0)
        return true;
    else
        return false;
}

bool isQueueFull(Queue* Queue) {
    if (Queue->queuePointer == Queue->size)
        return true;
    else
        return false;
}

void freeQueue(Queue* Queue) {
    free(Queue->data);
}