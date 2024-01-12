
#ifndef DATA_STRUCTURES_IN_C_QUEUE_H
#define DATA_STRUCTURES_IN_C_QUEUE_H

#include <stdlib.h>
#include <assert.h>

#include "utility.h"

#endif //DATA_STRUCTURES_IN_C_QUEUE_H

void enqueue(Queue* pQueue, int newData);
void priorityEnqueue(PriorityQueue* pQueue, int newData, void(*Predicate)(int[], int));
int dequeue(Queue* pQueue);
int front(Queue* pQueue);