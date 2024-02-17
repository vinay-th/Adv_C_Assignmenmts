#include <stdio.h>
int main()
{
    int n1, n2, n3;
    int *p1 = &n1, *p2 = &n2, *p3 = &n3;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&n1, &n2, &n3);

    int avg = (*p1+ *p2+ *p3)/3;

    printf("The Avg is: %d", avg);
    
    printf("\n");
    return 0;
}