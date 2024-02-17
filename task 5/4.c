#include <stdio.h>
int minNum(int* p, int* q)
{
    if(*p > *q)
        return *q;
    else if(*q > *p)
        return *p;
    else
        return -1;
}
int main()
{
    int a, b;

    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    int min = minNum(&a, &b);

    printf("The smaller number is: %d", min);
    
    printf("\n");
    return 0;
}