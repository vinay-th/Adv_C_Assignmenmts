#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->next = second;
    second->next = third;
    third->next = NULL;

    struct node *temp;

    temp = head;

    for (int i = 0; temp != NULL; i++)
    {
        printf("Enter the data in %d node: ", i);
        scanf("%d", &temp->data);
        temp = temp->next;
    }
    
    printf("\n\nBefore deletion:\n");

    temp = head;
    for (int i = 0; temp != NULL; i++)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    head = head -> next;

    printf("\nAfter deletion:\n");

    temp = head;
    for (int i = 0; temp != NULL; i++)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    
    printf("\n");
    return 0;
}