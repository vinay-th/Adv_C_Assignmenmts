#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];

    printf("Enter the input for string: ");
    gets(str);
    
    printf("\nYour given string was-------------\n\n");
    puts(str);

    printf("\n");
    return 0;
}