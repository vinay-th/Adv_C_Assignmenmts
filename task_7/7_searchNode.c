#include <stdio.h>
#include <stdlib.h>

struct node
{
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

    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    four = (struct node *) malloc(sizeof(struct node));
    five = (struct node *) malloc(sizeof(struct node));

    head->next = second; 
    second->next = third; 
    third->next = four; 
    four->next = five; 
    five->next = NULL; 

    struct node *temp;
    temp = head;
    for (int i = 0; temp != NULL; i++)
    {
        printf("Enter %d node data: ", i+1);
        scanf("%d", &temp->data);
        temp = temp->next;
    }
    temp = head;
    for (int i = 0; temp != NULL; i++)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    int flag, found = 0;

    printf("\n\nEnter the number you want to search: ");
    scanf("%d", &flag);

    temp = head;
    for (int i = 1;temp != NULL; i++)
    {
        if (temp -> data == flag)
        {
            printf("The %d data is in %d node", flag, i);
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if(!found)
    {
        printf("The value you searched does not exist");
    }
    
    printf("\n");
    return 0;
}