// Write a C program that dynamically allocates an array of integers using calloc based on user
// input for the n. Display the entered array and free the allocated memory.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int n;
    int i;
    
    printf("Enter the n of the array: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    printf("The entered array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);   
    
    printf("\n");
    return 0;
}