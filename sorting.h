
#ifndef DATA_STRUCTURES_IN_C_SORTING_H
#define DATA_STRUCTURES_IN_C_SORTING_H

#include <stdio.h>

#endif //DATA_STRUCTURES_IN_C_SORTING_H

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int size)
{
    int i, j, min;

    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[min])
                min = j;
        swap(&arr[min], &arr[i]);
    }
}