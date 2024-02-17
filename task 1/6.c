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

    printf("---------The Sum is---------------------------------------\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    printf("---------The Subtraction is---------------------------------------\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j] - b[i][j]);
        }
        printf("\n");
    }   
    
    
    printf("\n");
    return 0;
}