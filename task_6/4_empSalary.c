#include <stdio.h>
#include <string.h>

struct salary
{
    int sal;
    int total;
    int hra;
    int da;
    char name[20];
};

int main()
{
    char temp[20];
    int tempInt, n;

    struct salary s[3];

    printf("Enter the no of employees: ");
    scanf("%d", &n);

    printf("----Enter the details: \n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", temp);
        strcpy(s[i].name, temp);

        printf("Enter your salary: ");
        scanf("%d", &tempInt);
        s[i].sal = tempInt;

        s[i].hra = 0.25 * s[i].sal;
        s[i].da = 0.10 * s[i].sal;
        s[i].total = s[i].hra + s[i].da + s[i].sal;

        printf("\n");
    }

    printf("\n----Your Salary details: \n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Basic Salary: %d\n", s[i].sal);
        printf("Home Rental Allowance: %d\n", s[i].hra);
        printf("Dearness Allowance: %d\n", s[i].da);
        printf("Your total salary is %d\n", s[i].total);

        printf("\n");
    }

    printf("\n");
    return 0;
}