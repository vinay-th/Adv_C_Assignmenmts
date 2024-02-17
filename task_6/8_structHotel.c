#include <stdio.h>
#include <string.h>

struct hotel
{
    int room;
    int grade;
    char name[10];
    char address[10];
    float charge;
} h[10];

int main()
{
    char temp[10];
    int n;

    printf("Enter no. of customers: ");
    scanf("%d", &n);

    printf("details:------------\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", temp);
        strcpy(h[i].name, temp);

        printf("Enter the no. of rooms: ");
        scanf("%d", &h[i].room);

        printf("Enter the address: ");
        scanf(" %[^\n]", temp);
        strcpy(h[i].address, temp);

        printf("Enter the price: ");
        scanf("%f", &h[i].room);

        printf("Enter the grade of rooms: ");
        scanf("%d", &h[i].grade);

        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("name: %s\n", h[i].name);

        printf("no. of rooms: %d\n", h[i].room);

        printf("address: %s\n", h[i].address);

        printf("price: %.2f\n", h[i].room);

        printf("grade of rooms: %d\n", h[i].grade);

        printf("\n");
    }

    printf("\n");
    return 0;
}