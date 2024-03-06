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
    struct node *four = NULL; 
    struct node *five = NULL; 
    struct node *six = NULL; 
    struct node *seven = NULL; 
    struct node *eight = NULL; 
    struct node *nine = NULL; 
    struct node *ten = NULL;

    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    four = (struct node *) malloc(sizeof(struct node));
    five = (struct node *) malloc(sizeof(struct node));
    six = (struct node *) malloc(sizeof(struct node));
    seven = (struct node *) malloc(sizeof(struct node));
    eight = (struct node *) malloc(sizeof(struct node));
    nine = (struct node *) malloc(sizeof(struct node));
    ten = (struct node *) malloc(sizeof(struct node));

    head->next = second; 
    second->next = third; 
    third->next = four; 
    four->next = five; 
    five->next = six; 
    six->next = seven; 
    seven->next = eight; 
    eight->next = nine; 
    nine->next = ten; 
    ten->next = NULL;

    struct node *temp;

    temp = head;

    for (int i = 0; temp != NULL; i++)
    {
        printf("Enter %d node data: ", i+1);
        scanf("%d", &temp -> data);
        temp = temp->next;
    }
    
    temp = head;

    int count = 1;
    for (int i = 0; temp != NULL; i++)
    {
        if(count % 2 != 0)
            printf("%d ", temp -> data);
        count++;
        temp = temp->next;
    }
    
    printf("\n");
    return 0;
}