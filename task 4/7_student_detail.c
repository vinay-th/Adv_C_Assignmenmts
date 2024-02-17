#include <stdio.h>
int studentData(int *x, float *y, char *z)
{
    printf("\n\n---------Student Data-----------\n");
    printf("Roll no: %d\n", *x);
    printf("Marks: %.2f\n", *y);
    if(*z == 'M' || *z == 'm')
        printf("Gender: Male\n");
    else
        printf("Gender: Female\n");
}
int main()
{   
    int roll;
    float marks;
    char gen = 'm';

    printf("------Student details-----------\n");
    printf("1. Enter the roll no of the student: ");
    scanf("%d", &roll);
    while (getchar() != '\n');
    printf("2. Enter the gender [M]/[F]: ");
    scanf("%c", &gen);
    printf("3. Enter the marks of the student: ");
    scanf("%f", &marks);
    printf("\nAll data received");

    studentData(&roll , &marks, &gen);

    printf("\n");
    return 0;
}