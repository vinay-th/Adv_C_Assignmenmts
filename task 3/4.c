#include <stdio.h>
int main()
{
    int i;
    char str[50],str2[50],str3[50];

    printf("enter the first file name: ");
    scanf("%s",str);

    FILE *fp1 = fopen(str,"r");
    fgets(str2,50,fp1);

    fclose(fp1);

    printf("enter the second file name: ");
    scanf("%s",str);
    FILE *fp2 = fopen(str,"r");
    fgets(str3,50,fp1);
    
    fclose(fp2);

    FILE *fp3 = fopen("4_3.txt","a");
    fputs(str2,fp3);
    fputs(str3,fp3);

    
    fclose(fp3);
    
    printf("\n");
    return 0;
}