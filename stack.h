
#ifndef C_DATA_STRUCTURES_STACK_H
#define C_DATA_STRUCTURES_STACK_H

#include <stdlib.h>
#include <assert.h>

#endif //C_DATA_STRUCTURES_STACK_H

typedef struct  {
    int* data;
    int stackPointer;
    int size;
} Stack;

Stack initStack(int size) {
    Stack stack;
    stack.data = (int*)malloc(sizeof(int) * size);
    stack.stackPointer = 0;
    stack.size = size;
    return stack;
}

void resize(Stack* pStack, int newSize) {
    assert(pStack != nullptr && "pStack is null\n");
    realloc(pStack->data,sizeof(int) * newSize);
}

void push(Stack* pStack, int newData) {
    assert(pStack != nullptr && "pStack is null\n");
    int* array = pStack->data;

    if (pStack->size == pStack->stackPointer) {
        pStack->size++;
        resize(pStack, pStack->size);

        array[pStack->stackPointer] = newData;
        pStack->stackPointer++;
    }
    else {
        array[pStack->stackPointer] = newData;
        pStack->stackPointer++;
    }
}

int pop(Stack* pStack) {
    assert(pStack != nullptr && "pStack is null\n");
    int* array = pStack->data;
    pStack->stackPointer--;
    int data = array[pStack->stackPointer];
    array[pStack->size] = 0;
    return data;
}

void freeStack(Stack* pStack) {
    free(pStack->data);
}