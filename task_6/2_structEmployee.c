#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20];
    char dept[20];
    char desig[20];
};

int main()
{
    int tempInt, n;
    char temp[20];
    struct employee e[3];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    printf("Enter the details of the employee:- \n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter ID: ");
        scanf("%d", &tempInt);
        e[i].id = tempInt;

        printf("Enter the name: ");
        scanf("%s", temp);
        strcpy(e[i].name, temp);

        printf("Enter the department: ");
        scanf("%s", temp);
        strcpy(e[i].dept, temp);

        printf("Enter the designation: ");
        scanf("%s", temp);
        strcpy(e[i].desig, temp);

        printf("\n");
    }

    printf("The stored details are: ---------\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("ID: %d\n", e[i].id);

        printf("Name: %s\n", e[i].name);

        printf("Department: %s\n", e[i].dept);

        printf("DesignationL: %s\n", e[i].desig);

        printf("\n");
    }

    printf("\n");
    return 0;
}