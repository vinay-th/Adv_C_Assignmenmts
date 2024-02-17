#include <stdio.h>
int numMult(int* p, int* q)
{
    return (*p) * (*q);
}
int main()
{
    int a, b;

    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    int res = numMult(&a, &b);

    printf("The product is: %d", res);
    
    printf("\n");
    return 0;
}