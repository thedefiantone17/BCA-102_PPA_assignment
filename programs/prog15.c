#include <stdio.h>
// program to print even numbers between 1-100.
int main(int argc, char const *argv[])
{
    int i;
    printf("Even numbers between 1 and 100. \n");

    for (i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
