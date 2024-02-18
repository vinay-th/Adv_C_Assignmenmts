// Define the union to store employee data and display the same
#include <stdio.h>
#include <string.h>

union employee
{
    int id;
    char name[20];
    float salary;
} e;

int main()
{
    printf("Enter the employee id: ");
    scanf("%d", &e.id);

    printf("Enter the employee name: ");
    scanf("%s", e.name);

    printf("Enter the employee salary: ");
    scanf("%f", &e.salary);

    printf("\n");
    printf("The employee id is: %d\n", e.id);
    printf("The employee name is: %s\n", e.name);
    printf("The employee salary is: %.2f\n", e.salary);

    printf("\n");
    return 0;
}