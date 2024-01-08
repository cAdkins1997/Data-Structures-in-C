#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "sorting.h"

int main() {
    PriorityQueue priorityQueue = initDArray(5);
    for (int i = 0; i < 10; i++) {
         int newNumber = rand();
        priorityEnqueue(&priorityQueue, newNumber, selectionSort);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", priorityQueue.data[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        int number = dequeue(&priorityQueue);
        printf("%d\n", priorityQueue.data[i]);
    }
}
