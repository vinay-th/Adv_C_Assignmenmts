#include <stdio.h>
int main()
{
    int i, j, r, c;
    int matrix[100][100];

    printf("Enter the row for the matrix: ");
    scanf("%d",&r); 

    printf("Enter the col for the matrix: ");
    scanf("%d",&c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter value of A [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("---------The Array is---------------------------------------");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }   
    
    
    printf("\n");
    return 0;
}