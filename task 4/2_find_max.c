#include <stdio.h>

int great(int *x)
{
    int *pt = x;
    int large = *pt;
   
    for (int i = 0; i < 5; i++)
    {
        pt++;
        if (*pt > large)
        {
            large = *pt;
        }
    }
     
    return large;
}

int main()
{
    int a[10] = {0};
    int *p;

    *p = &a;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    int res = great(a);

    printf("%d is the largest number\n", res);
    
    printf("\n");
    return 0;
}