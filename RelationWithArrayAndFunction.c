#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("After swapping num1 = %d num2 = %d\n", *num1, *num2);
}

int addition(int *number, int size) {
    int add = 0;
    for (int i = 0; i < size; i++)
    {
        add = add + *(number + i);
    }
    return add;
}

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
    printf("%d\n", *ptr - 1);

    int num1 = 7, num2 = 8;
    printf("Before swapping : %d, %d\n", num1, num2);
    swap(&num1, &num2);
    
    //int size = 3;
    int array[3] = {4, 5, 7};
    int result = addition(array, 3);
    printf("%d\n", result);

    return 0;
}