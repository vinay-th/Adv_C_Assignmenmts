#include <stdio.h>
int inc(int* pt)
{
    printf("Before increment: %d\n", *pt);
    (*pt)++;
    printf("After increment: %d", *pt);
}
int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    inc(&a);   
    
    printf("\n");
    return 0;
}