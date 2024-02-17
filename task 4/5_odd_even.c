#include <stdio.h>
void oddEve(int *x)
{
    if ((*x % 2) == 0)
        printf("%d is an even number\n", *x);
    else
        printf("%d is an odd number\n", *x);
    
}
int main()
{
    int a;

    printf("Enter the number to check: ");
    scanf("%d",&a);

    oddEve(&a);
    
    printf("\n");
    return 0;
}