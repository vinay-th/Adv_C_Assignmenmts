#include <stdio.h>
int main()
{
    char no,c;

    FILE *fp = fopen("2.txt","w");

    printf("Enter the number: ");
    scanf("%c",&no);

    fputc(no,fp);
    
    fclose(fp);

    fopen("2.txt","r");

    c = fgetc(fp);

    printf("The entered number is : %c",c);

    fclose(fp);
    
    printf("\n");
    return 0;
}