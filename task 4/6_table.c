#include <stdio.h>
void table(int *x)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", *x, i, (*x*i));
    }
    
}
int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    table(&a);

    printf("\n");
    return 0;
}