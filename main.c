#include <stdio.h>
#include "stack.h"

int main() {
    Stack stack = initStack(5);

    for (int i = 0; i < 10; i++) {
        push(&stack, i);
        printf("%d\n", i);
    }

    for (int i = 0; i < 10; i++) {
        int num = pop(&stack);
        printf("%d\n", num);
    }

    freeStack(&stack);
}
