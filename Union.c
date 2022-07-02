#include <stdio.h>

union abc{
    int a;
    char b;
    float c;
    int test;
};

union Union
{
    int a;
    double d;
    char c;
   
}var;

int main() {

    union abc u;
    union abc *ptr = &u;

    u.a = 1;
    u.b = 'c';
    u.c = 9.8;
    u.test = 5;

    printf("value of c %f\n", ptr->c);
    printf("value of b %c\n", ptr->b);
    printf("value of c %f\n", u.c);
    printf("value of c %f\n", ptr->c);
    printf("value of test %d\n", ptr->test);

    //var.a = 65;
    scanf("%d", &var.a);
   // printf("value of a = %d\n", var.a);
    printf("value of a = %c\n", var.c);
    printf("Size of the union = %ld", sizeof(union Union));

    return 0;
}