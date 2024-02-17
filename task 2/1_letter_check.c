#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char chk;

    printf("Enter the letter to check: ");
    scanf("%c",&chk);

    if(isalpha(chk))
    {
        printf("It is alphabet\n");
        if(isupper(chk))
            printf("%c is an upper case.",chk);
        if(islower(chk))
            printf("%c is a lower case.",chk);
    }
    if(isalnum(chk))
            printf("%c is an alpha-numeric value.",chk);
    if(isdigit(chk))
            printf("\n%c is an int digit.",chk);
    if(isspace(chk))
            printf("\n%c is a blank space.",chk);
    else
        printf("You have input a undefined value.");

    printf("\n");
    return 0;
}