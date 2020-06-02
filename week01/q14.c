#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void swap(int *a, int i, int j) {
    a[i] += a[j];
    a[j] = a[i] - a[j];
    a[i] -= a[j];
}

void swapTemp(int *a, int i, int j) {
    int temp = a[j];
    a[j] = a[i];
    a[i] = temp;
}


int main(void) {
    int size = 5;
    int* k = malloc(sizeof(int)*size);
    printf("Before swap.\n[");
    for(int i = 0; i < size; i++) {
        k[i] = rand()%100 - rand()%100;
        printf(" %d ", k[i]);
    }
    printf("]\n");
    swap(k, 0, 4);
    printf("After swap.\n[");
    for(int i = 0; i < size; i++) {
        printf(" %d ", k[i]);
    }
    printf("]\n");
}