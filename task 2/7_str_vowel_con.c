#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    char str[20];

    printf("Enter you string: ");
    scanf("%s",&str);

    for(i=0;i<=20;i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            count++;
    }

    printf("\n\nNumber on vowels in string: %d",count);
    printf("\nNumber of consonent in string: %d",strlen(str)-count);

    printf("\n");
    return 0;
}