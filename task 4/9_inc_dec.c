#include <stdio.h>
void inc(int *n)
{
    (*n)++;
}
void dec(int *n)
{
    (*n)--;
}
int main()
{
    int i;

    printf("Enter th number: ");
    scanf("%d", &i);
    printf("%d is befor increment\n", i);

    inc(&i);

    printf("%d is after increment\n", i);

    dec(&i);
    printf("%d is after decrement\n", i);

    
    printf("\n");
    return 0;
}