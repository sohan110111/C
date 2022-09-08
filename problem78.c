// mukla.c

#include <stdio.h>

int main() {

    int var = 5000;
    int *ptr;
    ptr = &var;
    int *pptr;
    pptr = ptr;

    printf("%d\n", var);
    printf("%d\n", *ptr);
    printf("%d\n", *pptr);

    return 0;
}