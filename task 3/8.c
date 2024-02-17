#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    FILE *fp = fopen("8.txt","r");

    fgets(str,100,fp);

    printf("The length of chars is: %d",strlen(str));
    
    printf("\n");
    return 0;
}