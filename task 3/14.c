#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char ch = ' ' , new[10],str[25];
    int i = 0;
    FILE *fp = fopen("14.txt","r+");
    char *pos;
    

    fgets(str,25,fp);

    printf("Enter the new surname: ");
    scanf("%9s",new);

    pos = strchr(str, ' ');

    strcpy(pos + 1, new);

    fprintf(fp, "%s", str);

    fclose(fp);

    
    printf("\n");
    return 0;
}