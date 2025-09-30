#include <stdio.h>
#include <stdlib.h>

void *myrealloc(int *addr, int oldsize, int newsize) {
    int* newaddr = (int*) malloc(sizeof(int) * newsize);
    if (newaddr == NULL) {
        printf("Failed to allocated new memory\n");
        return NULL;
    }
    for (int i = 0; i < oldsize; ++i) {
        newaddr[i] = addr[i];
    }
    free(addr);
    return newaddr;
}

void *mycalloc(int byte_count, int element_count) {
    int* newarr = (int*) malloc(byte_count * element_count);
    if (newarr == NULL) {
        printf("Failed to allocated new memory\n");
        return NULL;
    }
    for (int i = 0; i < element_count; ++i) {
        newarr[i] = 0;
    }
    return newarr;
}

int main() {
    /* testing for myrealloc */

    int size = 5;
    int* arr = (int*) malloc(sizeof(int) * size);
    printf("Enter %d elements\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    
    int newsize = size * 2;
    arr = myrealloc(arr, size, newsize);
    for (int i = 0; i < newsize; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    /* testing for mycalloc*/
    int size2 = 5;
    int* arr2 = mycalloc(sizeof(int), size2);
    for (int i = 0; i < size2; ++i) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    free(arr2);
}