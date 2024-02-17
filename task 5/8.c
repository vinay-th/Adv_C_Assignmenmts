#include <stdio.h>
const float pi = 3.1415;
void area(float* pt)
{
    printf("The area of the %.2f radius is: %.2f",*pt, pi * ((*pt)*(*pt)));
}
void addr(float* pt)
{
    printf("The address of %.2f radius is %u", *pt, &pt);
}
void circum(float* pt)
{
    printf("The circumference of %.2f radius is %.2f", *pt, 2 * pi * (*pt));
}
int main()
{
    int num;
    float rad;

    printf("------This is my program--------------------\n\n\n");
    printf("Enter the radius of circle: ");
    scanf("%f", &rad);
    printf("These are the following operation you can perform\n");
    printf("1. Area of circle\n");
    printf("2. Address of radius\n");
    printf("3. Circumference of circle\n");
    printf("Enter the number of operation you want to perform\n");
    scanf("%d", &num);

    switch(num){
        case 1:
            area(&rad);
            break;
        case 2:
            addr(&rad);
            break;
        case 3:
            circum(&rad);
            break;
    }
    
    printf("\n");
    return 0;
}