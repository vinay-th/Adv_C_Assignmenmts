#include <stdio.h>
#include  <ctype.h>
int main()
{
    int i;
    char ch;
    FILE *fp = fopen("13.txt","r");

    while ((ch = fgetc(fp))!=EOF)
    {
        if (isalpha(ch))
        {
            printf("It is an alphabet file");
            return 0;
        }
        else if(isdigit(ch))
        {
            printf("it is an number file");
            return 0;
        }
    }
    
    
    printf("\n");
    return 0;
}