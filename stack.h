
#ifndef C_DATA_STRUCTURES_STACK_H
#define C_DATA_STRUCTURES_STACK_H

#include <stdlib.h>
#include <assert.h>
#include "dynamicarray.h"

#endif //C_DATA_STRUCTURES_STACK_H

typedef DArray Stack;

void push(Stack* pStack, int newData) {
    assert(pStack != nullptr && "pStack is null\n");
    int* array = pStack->data;

    if (pStack->size == pStack->pointer) {
        pStack->size++;
        resizeDArray(pStack, pStack->size);

        array[pStack->pointer] = newData;
        pStack->pointer++;
    }
    else {
        array[pStack->pointer] = newData;
        pStack->pointer++;
    }
}

int pop(Stack* pStack) {
    assert(pStack != nullptr && "pStack is null\n");
    int* array = pStack->data;
    pStack->pointer--;
    int data = array[pStack->pointer];
    array[pStack->size] = 0;
    return data;
}

int top(Stack* pStack) {
    int* array = pStack->data;
    return array[pStack->pointer - 1];
}