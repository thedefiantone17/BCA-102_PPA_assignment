#include<stdio.h>
// program to print table of 2
int main(int argc, char const *argv[])
{
    int n = 2, i;
    printf("table of 2: \n");

    for ( i = 1; i <= 10; i++)
    {
        printf(" %d * %d = %d \n", n , i, n*i);
    }
    
    return 0;
}
