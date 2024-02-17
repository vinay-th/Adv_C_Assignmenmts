#include <stdio.h>
#include <math.h>
void square(int *pt)
{
    *pt = pow(*pt, 2);
}
void sqro(int *pt)
{
    *pt = sqrt(*pt);
}
int main()
{
    int i, a;

    printf("Enter the number: ");
    scanf("%d", &i);
    a = i;
    square(&i);

    printf("The square of %d is %d \n", a, i);   

    i = a;
    sqro(&i);
    printf("The square of %d is %d \n", a, i);   
    
    printf("\n");
    return 0;
}