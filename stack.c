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
    if (top >= 0)
    {
        printf("Pop element from stack %d\n", arrayStack[top]);
        top = top - 1;
    }else
    {
        printf("Empty element in stack");
    }
    
    
    return -1;
}
int peek_array() {
    if (top >= 0)
    {
        printf("Peek top-eleemnt from stack : %d\n", arrayStack[top]);
    } else
    {
        printf("Array stack is empty");
    }
    
    
    return -1;
}
int main() {
    printf("Implementing stack in C programming.\n");
    peek_array();
    push_array(10);
    push_array(20);
    push_array(30);
    push_array(40);
    peek_array(); // peek all return top value of stack
    pop_array();
    pop_array();
    pop_array();
    pop_array();

    return 0;
}