#include <stdio.h>
#include <string.h>

struct book
{
    int price;
    char author[20];
    char title[20];
} bk[5];

int mostExp(int *pt, int n)
{
    int max = *pt;
    for (int i = 0; i < n; i++)
    {
        if (*(pt + i) > max)
        {
            max = *(pt + i);
        }
    }
    return max;
}

int leastExp(int *pt, int n)
{
    int min = *pt;
    for (int i = 0; i < n; i++)
    {
        if (*(pt + i) < min)
        {
            min = *(pt + i);
        }
    }
    return min;
}

int main()
{
    int n, prc[5];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the price of book %d: ", i + 1);
        scanf("%d", &bk[i].price);

        prc[i] = bk[i].price;

        printf("Enter the author of book %d: ", i + 1);
        scanf("%s", bk[i].author);

        printf("Enter the title of book %d: ", i + 1);
        scanf("%s", bk[i].title);

        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Book %d: \n", i + 1);
        printf("Price: %d\n", bk[i].price);
        printf("Author: %s\n", bk[i].author);
        printf("Title: %s\n", bk[i].title);
        printf("\n");
    }

    printf("The most expensive book is: %d\n", mostExp(prc, n));
    printf("The least expensive book is: %d\n", leastExp(prc, n));

    printf("\n");
    return 0;
}