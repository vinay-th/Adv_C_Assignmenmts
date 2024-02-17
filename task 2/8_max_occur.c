#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,count[256]={0};
    char str[100],temp;

    printf("Enter your string: ");
    scanf("%s",str);
    int length= strlen(str);

    for(i=0;str[i]!='\0';i++)
    {
        count[(int)str[i]]++;
    }

    int maxcount=0;
    char maxchar;

    for(i=0;i<256;i++)
    {
        if(count[i] > maxcount)
        {
            maxcount=count[i];
            maxchar=(char)i;
        }
    }

    printf("The most occuring char is \"%c\" it came %d times",maxchar,maxcount);

    printf("\n");
    return 0;
}