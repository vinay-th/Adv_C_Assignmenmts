#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int c = (a*a*a) + (b*b) + (3*a*b);

    printf("The answer is %d", c);
    
    printf("\n");
    return 0;
}