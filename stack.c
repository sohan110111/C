#include <stdio.h>
#define CAPACITY 3

int arrayStack[CAPACITY];

int top = -1; // top of stack
void push_array(int element) {
    if (top < CAPACITY-1)
    {
        top = top + 1;
        arrayStack[top] = element;
        printf("Array added to stack successfully item : %d\n", element);
    } else {
        printf("No-space added element to stack\n");
    }
    
}
int pop_array() {
    return -1;
}
int peek_array() {

    return -1;
}
int main() {
    printf("Implementing stack in C programming.\n");
    push_array(10);
    push_array(20);
    push_array(30);
    push_array(40);

    return 0;
}