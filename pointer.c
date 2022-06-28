#include <stdio.h>

int main() {

    int exampleValue = 10;
    int *pointerVariable = &exampleValue;
    int *anotherPointerVariable;
    anotherPointerVariable = &exampleValue;
    printf("%d\n", exampleValue);
    printf("%p\n", &exampleValue);
    printf("%p\n", pointerVariable);
    printf("%p\n", anotherPointerVariable);

    return 0;
}