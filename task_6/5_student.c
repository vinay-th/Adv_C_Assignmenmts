#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int roll;
    char name[20], subject[7], gender[7];
};
int main()
{
    char temp[20];
    int tempInt, n;
    struct student s[5];

    printf("Enter the details of the student:-\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Name: ");
        scanf("%s", temp);
        strcpy(s[i].name, temp);

        printf("Enter roll no: ");
        scanf("%d", &tempInt);
        s[i].roll = tempInt;

        printf("Enter gender: ");
        scanf("%s", temp);
        strcpy(s[i].gender, temp);

        printf("Enter Course: ");
        scanf("%s", temp);
        strcpy(s[i].subject, temp);

        printf("\n");
    }

    printf("\nDetails of the student:-\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\n", s[i].name);

        printf("roll no: %d\n", s[i].roll);

        printf("gender: %s\n", s[i].gender);

        printf("Course: %s\n", s[i].subject);

        printf("\n");
    }

    printf("\n");
    return 0;
}