#include <stdio.h>
int mult(int *p1, int *p2)
{
    return *p1 * *p2;
}
int div(int *p1, int *p2)
{
    return *p1 / *p2;
}
int main()
{
    int a, b, opt;

    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Multiplication\n");
    printf("2. Division\n");
    printf("You choose: ");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1:
            printf("The multiplication is %d",mult(&a, &b));
            break;
        case 2:
            printf("The division is %d",div(&a, &b));
            break;
    }   
    
    printf("\n");
    return 0;
}