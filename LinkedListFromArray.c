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

struct node *reversedLinkedListNode(struct node *head) {
    struct node *prev = NULL, *current = NULL, *next = NULL;

    while (current != NULL)
    {
        //store the next node
        next = current->next;
        //reverse the link/connection
        current->next = prev;
        //propagate the link/connection
        prev = current;
        current = next;
    }
    head = prev;
    while (head != NULL) {
        printf("%d -> ", head-> data);
        head = head->next; 
    }
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
    struct node *newHead2 = head;
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL");
    int searchValue = 5;

    printf("\nsearch value %d of position is %d", searchValue, indexSearch(newHead, searchValue));
    
    //reversed linked list 
    reversedLinkedListNode(newHead2);

    return 0;
}