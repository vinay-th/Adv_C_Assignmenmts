#include <stdio.h>
void maxFind(int* p, int* q)
{
    if((*p) > (*q))
        printf("%d is greater than %d", *p,*q);
    else if((*q) > (*p))
        printf("%d is greater than %d", *q,*p);
    else   
        printf("Both are equal");
}
int main()
{
    int i, j;

    printf("Enter the value of first num: ");
    scanf("%d", &i);
    printf("Enter the value of second num: ");
    scanf("%d", &j);

    maxFind(&i, &j);

    printf("\n");
    return 0;
}