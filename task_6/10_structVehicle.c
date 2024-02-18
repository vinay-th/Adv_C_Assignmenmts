#include <stdio.h>
#include <string.h>

struct vehicle
{
    int id;
    char name[20];
    float price;
} v[10];

void display(struct vehicle *pt, int n)
{
    printf("Following vehicles have price greater than 25000\n");

    for (int i = 0; i < n; i++)
    {
        if (pt[i].price >= 25000)
        {
            printf("ID: %d\n", v[i].id);
            printf("Name: %s\n", v[i].name);
            printf("Price: %.2f\n", v[i].price);
            printf("\n");
        }
        else
        {
            printf("No vehicles have price greater than 25000\n");
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of vehicles: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the ID of vehicle %d: ", i + 1);
        scanf("%d", &v[i].id);
        printf("Enter the name of vehicle %d: ", i + 1);
        scanf("%s", v[i].name);
        printf("Enter the price of vehicle %d: ", i + 1);
        scanf("%f", &v[i].price);
        printf("\n");
    }

    display(v, n);

    printf("\n");
    return 0;
}