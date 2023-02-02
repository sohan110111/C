#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;

    printf("Address of a: %p\n", &a);
    printf("Address of p: %p\n", &p);
    printf("Value of p: %p\n", p);
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *p);

    int *pp = p;
    printf("Address of *p: %p\n", pp);
    printf("Value of p: %d\n", *pp);

    return 0;
}