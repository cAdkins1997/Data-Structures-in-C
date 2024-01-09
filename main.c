#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "sorting.h"

int main() {
    Stack stack = initDArray(10);

    for (int i = 0; i < 10; i++) {
        push(&stack, i);
        printf("%d\n", stack.data[i]);
    }

    printf("\n");

    Queue queue = initDArray(10);
    for (int i = 0; i < 10; i++) {
        int num = pop(&stack);
        enqueue(&queue, num);
        printf("%d\n", queue.data[i]);
    }
}
