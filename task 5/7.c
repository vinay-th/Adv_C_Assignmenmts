#include <stdio.h>
int arrMax(int* pt)
{
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*pt > max)
        {
            max = *pt;
        }
        pt++;
    }
    return max;
    
}
int main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int max = arrMax(a);
    
    printf("The max num in array is: %d", max);
    
    printf("\n");
    return 0;
}