#include <stdio.h>
void large(int *pt)
{
    int large = 0;

    for (int i = 0; i < 5; i++)
    {
        if (*pt > large)
        {
            large = *pt;
        }
        pt++;
    }
    
    printf("The largest num in array is %d", large);
}
int main()
{
    int a[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    large(a);
    
    printf("\n");
    return 0;
}