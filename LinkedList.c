#include <stdio.h>
#include <stdlib.h>

struct LinkedList
{
    int data;
    struct LinkedList *next;
};


int main() {

    struct LinkedList *list = NULL;          
    struct LinkedList *list_2 = NULL;          
    struct LinkedList *list_3 = NULL;

    list = (struct LinkedList*)malloc(sizeof(struct LinkedList));   
    list_2 = (struct LinkedList*)malloc(sizeof(struct LinkedList));   
    list_3 = (struct LinkedList*)malloc(sizeof(struct LinkedList));

    list -> data = 4;
    list_2 -> data = 5;
    list_3 -> data = 6;

    list -> next = list_2;
    list_2 -> next = list_3;
    list_3 -> next = NULL;

    while (list != NULL) {
        
        printf("%d -> ", list -> data);
        list = list->next;
        printf("\n address of nest node : %d\n", list);
    }
    printf("\nsize of struct %d\n", sizeof(struct LinkedList));
    return 0;
}