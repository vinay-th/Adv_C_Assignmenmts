// Define a structure named Circle to represent a circle with a radius. Write a C program to
// calculate the area and perimeter of two circles and display the results.
#include <stdio.h>
#include <string.h>

struct circle
{
    int radius;
    float area;
    float perimeter;
};

int main()
{
    struct circle c1, c2;

    printf("Enter the radius of circle 1: ");
    scanf("%d", &c1.radius);

    printf("Enter the radius of circle 2: ");
    scanf("%d", &c2.radius);

    printf("\n");
    printf("The radius and perimeter of the circles are: \n");
    printf("The area of circle 1 is %.2f\n", 3.14 * c1.radius * c1.radius);
    printf("The area of circle 2 is %.2f\n", 3.14 * c2.radius * c2.radius);
    printf("\n");
    printf("The perimeter of circle 1 is %.2f\n", 2 * 3.14 * c1.radius);
    printf("The perimeter of circle 2 is %.2f\n", 2 * 3.14 * c2.radius);
    printf("\n");

    printf("\n");
    return 0;
}