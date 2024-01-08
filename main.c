#include <stdio.h>
#include "stack.h"
#include "queue.h"

int main() {
    Stack stack = initStack(10);
    for (int i = 0; i < 10; i++) {
        push(&stack, i);
        printf("%d\n", stack.data[i]);
    }

    printf("\n");

    Queue queue = initQueue(10);
    for (int i = 10; i > 0; i--) {
        int number = pop(&stack);
        enqueue(&queue, number);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", queue.data[i]);
    }
}
