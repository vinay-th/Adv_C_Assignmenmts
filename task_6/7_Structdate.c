#include <stdio.h>
#include <string.h>

struct date
{
    int date;
    int month;
    int year;
};

void MonthCheck(int month)
{
    switch (month)
    {
    case 1:
        printf("Your entered date is in January month\n");
        break;
    case 2:
        printf("Your entered date is in February month\n");
        break;
    case 3:
        printf("Your entered date is in March month\n");
        break;
    case 4:
        printf("Your entered date is in April month\n");
        break;
    case 5:
        printf("Your entered date is in May month\n");
        break;
    case 6:
        printf("Your entered date is in June month\n");
        break;
    case 7:
        printf("Your entered date is in July month\n");
        break;
    case 8:
        printf("Your entered date is in August month\n");
        break;
    case 9:
        printf("Your entered 1st date is in September month\n");
        break;
    case 10:
        printf("Your entered date is in October month\n");
        break;
    case 11:
        printf("Your entered date is in November month\n");
        break;
    case 12:
        printf("Your entered date is in December month\n");
        break;

    default:
        break;
    }
}

int main()
{
    int mon;

    struct date d1, d2;

    printf("Enter the first date in (DD MM YYYY): ");
    scanf("%d %d %d", &d1.date, &d1.month, &d1.year);

    printf("Enter the second date in (DD MM YYYY): ");
    scanf("%d %d %d", &d2.date, &d2.month, &d2.year);

    if (d1.year == d2.year)
    {
        printf("\nFirst Date:\n");
        MonthCheck(d1.month);
        printf("\nSecond Date:\n");
        MonthCheck(d2.month);
    }
    else
        printf("Enter the dates of same year!!!");

    printf("\n");
    return 0;
}