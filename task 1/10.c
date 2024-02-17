#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, n, k;

    printf("This program will multiply 2 matrix\n\n");

    printf("Enter the no of rows & cols: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter the value for A [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter the value for B [%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }  

    printf("The multiplication of A * B is--------\n");

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for ( k = 0; k < n; k++)
            {
                
                c[i][j] += a[i][k] * b[k][j];
            }
            
        }
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}