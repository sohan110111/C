#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *linkedlist_insert(int a[], int size) {
    struct node *head = NULL, *temp = NULL, *current = NULL;
    for (int i = 0; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = a[i];
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        } else {
            current->next = temp; 
            current = current->next;
        }
        
    }

    return head;
    

}

int indexSearch(struct node *head, int value) {
    int index = 1;
    while (head != NULL)
    {
        if (head->data == value)
        {
            return index;
        }
        index++;
        head = head->next;   
    }
    return -1;
}

int main() {

    int array[] = {0,1,2,3,4,5,6};
    struct node *head = linkedlist_insert(array, sizeof(array)/sizeof(array[0]));
    struct node *newHead = head;
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL");
    int searchValue = 5;

    printf("\nvalue of position is %d", indexSearch(head, 5));
    

    return 0;
}