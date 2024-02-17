#include <stdio.h>
#include <string.h>

struct course
{
    int no;
    char name[20];
    char desc[20];
};

int main()
{
    int tempInt, n;
    char temp[20];

    struct course c[3];

    printf("Enter no of courses: ");
    scanf("%d", &n);

    printf("---Enter the details of the course------\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the course no: ");
        scanf("%d", &tempInt);
        c[i].no = tempInt;

        printf("Enter the course name: ");
        scanf("%s", temp);
        strcpy(c[i].name, temp);

        printf("Enter the course desc: ");
        scanf("%s", temp);
        strcpy(c[i].desc, temp);

        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Course no: %d\n", c[i].no);
        printf("Course name: %s\n", c[i].name);
        printf("Course description: %s\n", c[i].desc);

        printf("\n");
    }

    printf("\n");
    return 0;
}