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

int main() {

    int array[] = {0,1,2,3,4,5,6};
    struct node *head = linkedlist_insert(array, sizeof(array)/sizeof(array[0]));
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL");
    

    return 0;
}