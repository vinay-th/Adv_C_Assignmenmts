#include <stdio.h>
int check(int* pt){
    if (*pt > 0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is negative.\n");
    }
    
}
int main()
{
    int i;
    
    printf("Enter the number: ");
    scanf("%d", &i);

    check(&i);   
    
    printf("\n");
    return 0;
}