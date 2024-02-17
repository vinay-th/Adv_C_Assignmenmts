#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i,count=0;
    char str[20];

    printf("Enter you string: ");
    scanf("%s",&str);

    for(i=0;i<=20;i++)
    {
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
            
    }

    printf("\n\nChanged string is: %s",str);

    printf("\n");
    return 0;
}