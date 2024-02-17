#include <stdio.h>
void revAry(int *pt)
{
    int i, a[5];
    int start = 0, end = 4, temp;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of A[%d]: ",i);
        scanf("%d", pt);
        pt++;
    }
    pt -= 5;
    printf("\nThe original array is------------\n\n");

    for ( i = 0; i < 5; i++)
    {
        printf("A[%d] : %d\n", i, *pt);
        pt++;
    }
    pt -= 5;

    for ( i = 0; i < 5; i++)
    {
        a[i] = *pt;
        pt++;
    }
    
    while (start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
    printf("\nThe reversed array is------------\n\n");
    for ( i = 0; i < 5; i++)
    {
        printf("A[%d] : %d\n", i, a[i]);
    }
}
int main()
{
    int a[5];

    revAry(a);   
    
    printf("\n");
    return 0;
}