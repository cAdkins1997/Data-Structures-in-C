
#include "stack.h"

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
    array[pStack->pointer] = 0;
    return data;
}


int top(Stack* pStack) {
    int* array = pStack->data;
    return array[pStack->pointer - 1];
}