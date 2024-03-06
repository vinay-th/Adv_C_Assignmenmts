#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("The multiplication is %d\n", a * b);
    printf("The subtraction of %d - %d is %d", b, a, b-a);
    
    printf("\n");
    return 0;
}