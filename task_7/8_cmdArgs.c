#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);

    if (num1>num2)
    {
        if(num1>num3)
            printf("%d is greater than %d , %d", num1, num2, num3);
        else
            printf("%d is greater than %d , %d", num3,num1, num2 );
    }
    else if(num2 > num3)
    {
        printf("%d is greater than %d , %d",  num2, num3, num1);
    }
    
    printf("\n");
    return 0;
}