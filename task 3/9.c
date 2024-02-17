#include <stdio.h>
int main()
{
    char ch[200];
    printf("Enter the filename: ");
    scanf("%s",ch);
    FILE *fp = fopen(ch,"r");

    fgets(ch,100,fp);

    fclose(fp);
    fp = fopen("9.txt","w");

    fputs(ch,fp);

    fclose(fp);
    
    printf("Your file is copied to 9.txt\n");
    return 0;
}