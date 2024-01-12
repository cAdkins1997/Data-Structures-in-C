
#include "queue.h"

void enqueue(Queue* pQueue, int newData) {
    assert(pQueue != nullptr && "pQueue is null\n");
    int* array = pQueue->data;

    if (pQueue->size == pQueue->pointer) {
        pQueue->size++;
        resizeDArray(pQueue, pQueue->size);

        array[pQueue->pointer] = newData;
        pQueue->pointer++;
    }
    else {
        array[pQueue->pointer] = newData;
        pQueue->pointer++;
    }
}

void priorityEnqueue(PriorityQueue* pQueue, int newData, void(*Predicate)(int[], int)) {
    assert(pQueue != nullptr && "pQueue is null\n");
    int* array = pQueue->data;

    if (pQueue->size == pQueue->pointer) {
        pQueue->size++;
        resizeDArray(pQueue, pQueue->size);

        array[pQueue->pointer] = newData;
        pQueue->pointer++;
    }
    else {
        array[pQueue->pointer] = newData;
        pQueue->pointer++;
    }
    Predicate(pQueue->data, pQueue->pointer);
}

int dequeue(Queue* pQueue) {
    assert(pQueue != nullptr && "pQueue is null\n");
    int* array = pQueue->data;
    int data = array[0];
    for (int i = 0; i < pQueue->size - 1; i++) {
        array[i] = array[i + 1];
    }
    pQueue->pointer--;
    return data;
}

int front(Queue* pQueue) {
    return pQueue->data[0];
}