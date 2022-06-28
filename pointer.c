#include <stdio.h>

int main() {

    int exampleValue = 10;
    int *pointerVariable = &exampleValue;
    int *anotherPointerVariable;
    anotherPointerVariable = &exampleValue;
    int *test = pointerVariable;
    int *test2;
    test2 = pointerVariable;
    printf("%d\n", exampleValue);
    printf("%p\n", &exampleValue);
    printf("%p\n", pointerVariable);
    printf("%p\n", anotherPointerVariable);
    printf("%p\n", test);
    printf("%p\n", test2);
    printf("%d\n", *test2);

    double ygpa = 2.29;
    double *ptr = &ygpa;
    printf("%lf\n", ygpa);
    printf("%p\n", ptr);

    int x = 19, y = 34;
    int *p1 = &x, *p2 = &y;
    int sum = *p1 + *p2;
    printf("%d\n", sum);

    return 0;
}