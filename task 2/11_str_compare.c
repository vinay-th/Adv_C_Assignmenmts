#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[20],str2[20];

    printf("Enter you first string: ");
    scanf("%s",&str1);

    printf("Enter you second string: ");
    scanf("%s",&str2);

    int result= strcmp(str1,str2);

    if(result==0)
    {
        printf("Both the strings are equal");
    }
    else if (result<0)
    {
        printf("The first string is smaller than second string.");
    }
    else
    {
        printf("The second string is smaller than first string.");
    }
    

    printf("\n");
    return 0;
}