#include <stdio.h>
int main()
{
    char c[102],n;
    int i;

    FILE *fp = fopen("3.txt","w");

    for(i=1;i<=100;i++)
    {
        fprintf(fp,"%d\n",i);
    }  

    fclose(fp);
    
    printf("\n");
    return 0;
}