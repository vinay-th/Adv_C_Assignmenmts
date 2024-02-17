#include <stdio.h>
#include <string.h>
void sort(char str[100],int n)
{
    int i,j;
    char temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}
int main()
{
    int i,j;
    char str[100],temp;

    printf("Enter your string: ");
    scanf("%s",str);

    int n=strlen(str);

    sort(str,n);
    
    printf("The string is %s",str);

    printf("\n");
    return 0;
}