#include <stdio.h>
#include "stack.h"

int main() {
    Stack stack = initStack(1);
    push(&stack, 1);
    int number = pop(&stack);
    bool full = isFull(&stack);
    printf("%d\n", full);
    freeStack(&stack);
}
