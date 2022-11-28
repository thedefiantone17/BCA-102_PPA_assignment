#include<stdio.h>
// program to print numbers from 1 to  using do while statement

int main(int argc, char const *argv[])
{
    int num = 1;
    do
    {
        printf("%d \n", num);
        num++;
    } while (num <= 10);
    
    return 0;
}
