#include<stdio.h>
// program to print numbers from 1 to 10 using while loop

int main(int argc, char const *argv[])
{
    int num = 1;

    printf("Numbers from 1 to 10: \n");

    while (num <= 10)
    {
        printf("%d \n", num);
        num++;
    }
    
    return 0;
}
