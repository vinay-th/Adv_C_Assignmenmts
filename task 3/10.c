#include <stdio.h>
int main()
{
    
    FILE *fp;
    char s[100];
    fp = fopen("6.txt", "r");
    fgets(s,100, fp);
    fclose(fp);

    fp = fopen("4_1.txt", "a+");
    fputs(s, fp);
    printf("\n");
    return 0;
}