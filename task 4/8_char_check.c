#include <stdio.h>
#include <ctype.h>
void check (char *pt)
{
    if (isalpha(*pt))
        printf("%c is an alphabet", *pt);
    else if(isdigit(*pt))
        printf("%c is a number", *pt);
    else
        printf("Enter valid char");
}
int main()
{
    char i;

    printf("Enter the char to check: ");
    scanf("%c", &i);   

    check(&i);
    
    printf("\n");
    return 0;
}