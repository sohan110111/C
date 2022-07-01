#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int *ptr = &a[3];

    for (int i = 0; i < 5; i++)
    {
        printf("Address : %u\n", &a[i]);
        printf("Value : %u\n", *(a+i));
        sum += *(a+i);
    }
    
    printf("Address of a : %u\n", a);
    printf("Sum of the values : %u\n", sum);

    //access value with pointer
    printf("%d\n", *ptr);
    printf("%d\n", *ptr + 1);
    printf("Address of index 5 : %u\n", (ptr + 1));
    printf("%d", *ptr - 1);
    return 0;
}