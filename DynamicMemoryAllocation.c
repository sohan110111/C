#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2;
    ptr2 = (int *)malloc(5*4);
    ptr1 = (int *)calloc(5, sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Memory is not allocated\n");
    } else {
        printf("Memory is allocated\n");
        ptr1 = realloc(ptr1, 50);
        printf("Momory reallocation successfully");
    }
    return 0;
}