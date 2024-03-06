// Write a C Program to create a linear link list consisting of elements 5 nodes. Take input from the
// user. Add add a new node at the beginning of the created link list.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head -> data = 1;
    head -> next = first;

    first -> data = 2;
    first -> next = second;

    second -> data = 3;
    second -> next = third;

    third -> data = 4;
    third -> next = fourth;

    fourth -> data = 5;
    fourth -> next = NULL;

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = 6;
    newNode -> next = head;
    
    head = newNode;

    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    
    printf("\n");
    return 0;
}