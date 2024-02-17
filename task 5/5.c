#include <stdio.h>
int dec(int* pt)
{
    printf("Before decrement: %d\n", *pt);
    (*pt)--;
    printf("After decrement: %d", *pt);
}
int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    dec(&a);   
    
    printf("\n");
    return 0;
}