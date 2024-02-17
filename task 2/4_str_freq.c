#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    int frequency[256] = {0};
    char str[20],alp;

    printf("Enter you string: ");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        frequency[(int)str[i]]++;
    }

    printf("The frequence of all charcters in the string-------------\n");

    for(i=0;i<256;i++)
    {
        if(frequency[i]!='\0')
            printf("%c: %d\n",i,frequency[i]);
    }

    printf("\n");
    return 0;
}