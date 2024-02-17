#include <stdio.h>
int add(int *p1, int *p2)
{
    return *p1 + *p2;
}
int sub(int *p1, int *p2)
{
    return *p1 - *p2;
}
int mult(int *p1, int *p2)
{
    return *p1 * *p2;
}
int main()
{
    int a, b, opt;

    printf("Enter values of numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("You choose: ");
    scanf("%d",&opt);

    switch (opt)
    {
    case 1:
        printf("The addition is %d", add(&a, &b));
        break;
    case 2:
        printf("The subtraction is %d", sub(&a, &b));
        break;
    case 3:
        printf("The multiplication is %d", mult(&a, &b));
        break;
    default:
        break;
    }

    
    printf("\n");
    return 0;
}