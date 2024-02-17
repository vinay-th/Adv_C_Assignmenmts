#include <stdio.h>
int main()
{
    char c,ch;
    FILE *fp = fopen("11.txt","w+");

    printf("Enter the char you want in your file: ");
    scanf("%c",&c);

    fputc(c,fp);   

    rewind(fp);
    fscanf(fp," %c",&ch);

    printf("The first character of the file is: %c",ch);

    fclose(fp);
    
    printf("\n");
    return 0;
}