#include <stdio.h>
int main()
{
    int i, j, r, c;
    int a[100][100];

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

    printf("---------The Array is---------------------------------------\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }   

    printf("-----------------The diagonals are--------------\n");

    for ( i = 0; i < r; i++)
    {
        for(j=0;j<c;j++)
        {
            if (i==j)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf(" \t");
            }
            
        }
        printf("\n");
    }
    
    
    
    printf("\n");
    return 0;
}