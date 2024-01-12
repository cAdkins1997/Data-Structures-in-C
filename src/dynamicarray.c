
#include "dynamicarray.h"

DArray initDArray(int size) {
    DArray dArray;
    dArray.data = (int*)malloc(sizeof(int) * size);
    dArray.pointer = 0;
    dArray.size = size;
    return dArray;
}

void resizeDArray(DArray* pDArray, int newSize) {
    assert(pDArray != nullptr && "pStack is null\n");
    pDArray->data = (int*)realloc(pDArray->data,sizeof(int) * newSize);
    assert(pDArray->data != nullptr && "failed to reallocate dynamic array");
}

bool isEmpty(DArray* pDArray) {
    if (pDArray->pointer == 0)
        return true;
    else
        return false;
}

bool isFull(DArray* pDArray) {
    if (pDArray->pointer == pDArray->size)
        return true;
    else
        return false;
}

void freeDArray(DArray* pDArray) {
    free(pDArray->data);
}