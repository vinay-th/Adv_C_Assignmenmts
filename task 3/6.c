#include <stdio.h>
int main()
{
    FILE *fp = fopen("6.txt","w");

    fputs("Heyyy there this will write the text in txt file",fp);
    fclose(fp);

    printf("The text is written successfully");
    
    printf("\n");
    return 0;
}