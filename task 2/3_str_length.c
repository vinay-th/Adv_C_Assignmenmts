#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    char str[20];

    printf("Enter you string: ");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }

    printf("The length of the string is %d.",count);

    printf("\n");
    return 0;
}