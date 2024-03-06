// Write a C program that dynamically allocates an array of integers using malloc based on user
// input for the size. Also modify it with th help of realloc for 2 more items.Display the entered
// array and free the allocated memory.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, (n+2) * sizeof(int));

    printf("\n\nThe elements of the array are: \n");
    for (int i = n; i < n+2; ++i)
    {
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &ptr[i]);
    }

    printf("The entered array is: ");
    for (int i = 0; i < n+2; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    printf("\n");
    return 0;
}