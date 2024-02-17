#include <stdio.h>
#include <string.h>

struct car
{
    int id;
    char model[10];
    float rate;
};

int main()
{
    struct car c[3];
    float total = 0;
    char temp[20];

    printf("---------Enter the details of the cars: ---------\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Model of car: ");
        scanf("%s", temp);
        strcpy(c[i].model, temp);

        printf("ID of car: ");
        scanf("%d", &c[i].id);

        printf("Rental price of car: ");
        scanf("%f", &c[i].rate);

        total += c[i].rate;

        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The model: %s\n", c[i].model);
        printf("Id of car: %d\n", c[i].id);
        printf("Rate of car for one day: %.2f\n", c[i].rate);

        printf("\n");
    }

    printf("The total cost of renting this three cars is \t%.2f Only /-", total);

    printf("\n");
    return 0;
}