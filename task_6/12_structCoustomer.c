// WAP to store following details using structure. Name,DOB,Addresse,Contact no for customer.
//  For address and DOB create another sturucture and use that structure into customer stucture.
#include <stdio.h>
#include <string.h>

struct DOB
{
    int day;
    int month;
    int year;
};

struct address
{
    int houseno;
    char street[20];
    char city[20];
    char state[20];
    int pincode;
};

struct customer
{
    int id;
    char name[20];
    int contact;
    struct DOB dob;
    struct address add;
};

int main()
{
    int n;

    printf("Enter the number of customer : ");
    scanf("%d", &n);

    struct customer c[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the customer : ");
        scanf("%s", c[i].name);

        printf("Enter the id of the customer : ");
        scanf("%d", &c[i].id);

        printf("Enter the contact of the customer : ");
        scanf("%d", &c[i].contact);

        printf("Enter the DOB of the customer: ");
        scanf("%d %d %d", &c[i].dob.day, &c[i].dob.month, &c[i].dob.year);

        printf("\nEnter the Full address of the customer: \n");
        printf("Enter the house no: ");
        scanf("%d", &c[i].add.houseno);
        printf("Enter the street: ");
        scanf("%s", c[i].add.street);
        printf("Enter the city: ");
        scanf("%s", c[i].add.city);
        printf("Enter the state: ");
        scanf("%s", c[i].add.state);
        printf("Enter the pincode: ");
        scanf("%d", &c[i].add.pincode);
    }

    printf("\n\nThe details of the customers: \n\n");

    for (int i = 0; i < n; i++)
    {
        printf("The name of the customer is : %s\n", c[i].name);
        printf("The id of the customer is : %d\n", c[i].id);
        printf("The contact of the customer is : %d\n", c[i].contact);
        printf("The DOB of the customer is : %d %d %d\n", c[i].dob.day, c[i].dob.month, c[i].dob.year);
        printf("The Full address of the customer is : \n");
        printf("House no: %d\n", c[i].add.houseno);
        printf("Street: %s\n", c[i].add.street);
        printf("City: %s\n", c[i].add.city);
        printf("State: %s\n", c[i].add.state);
        printf("Pincode: %d\n", c[i].add.pincode);
        printf("\n");
    }

    printf("\n");
    return 0;
}