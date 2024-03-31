#include <stdio.h>

void revArray(int* ptr, int count)
{
    for (int i = count - 1 ; i >= 0; i--)
    {
        printf("%d \n", *(ptr + i));
    }
    
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    revArray(a, 10);
    
    printf("\n");
    return 0;
}
