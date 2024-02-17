#include <stdio.h>
int main()
{
    int i, j, r, c;
    int a[100][100],b[100][100];

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
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter value of B [%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("---------To check if matrix is identical---------------------------------------\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if (a[i][j]==b[i][i])
            {
                printf("The matrix are identical");
                return 0;
            }
            else
            {
                printf("The matrix are not identical");
                return 1;
            }
        }
    }
}