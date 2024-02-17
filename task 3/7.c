#include <stdio.h>
int main()
{
    FILE *fp = fopen("6.txt","r");
    char c;

    c = fgetc(fp);
    fclose(fp);

    printf("The first char is: %c",c);

    fclose(fp);
    
    printf("\n");
    return 0;
}