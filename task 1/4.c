#include <stdio.h>
int main()
{
    int a[10][10], i, j, r, c, temp;

    printf("Enter the row for the matrix: ");
    scanf("%d",&r); 

    printf("Enter the col for the matrix: ");
    scanf("%d",&c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter value of A [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }   

    printf("-----The matrix A--------------------\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r; i++)
    {
        for(j=i+1; j<c; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("-----The transpose of matrix A--------------------\n");
    
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}