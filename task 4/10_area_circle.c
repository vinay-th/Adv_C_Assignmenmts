#include <stdio.h>
float pi = 3.14159;

float area(int *pt)
{
    return pi * (*pt * *pt);
}

int main()
{
    int rad;

    printf("Enter the radius: ");
    scanf("%d", &rad);
    
    printf("Area of the circle is %.2f", area(&rad));
    
    printf("\n");
    return 0;
}