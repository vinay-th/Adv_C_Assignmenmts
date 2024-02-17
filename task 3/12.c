#include <string.h>
#include <stdio.h>
int main()
{
    char str[100];
    FILE *fp = fopen("11.txt","w");

    printf("Enter the string you want to enter in file:\n");
    gets(str);

    fputs(str,fp);

    rewind(fp);
    fgets(str,100,fp);

    puts(str);
    printf("\n");
    return 0;
}