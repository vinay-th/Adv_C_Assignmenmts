#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[50];
    FILE *fp = fopen("5.txt","r");

    fgets(str,50,fp);

    for (int i = 0; i < 51; i++)
    {
        str[i]= toupper(str[i]);
    }
    
    printf("%s",str);
    
    printf("\n");
    return 0;
}