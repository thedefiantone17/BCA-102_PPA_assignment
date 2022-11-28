#include<stdio.h>
// program to use 'goto' in loop statement

int main(int argc, char const *argv[])
{
    int start = 1, end = 10;
    int currentNumber = start;

    // defining the label
    print_line:
        printf("%d \n", currentNumber);
        if (currentNumber < end)
        {
            currentNumber++;
            goto print_line;
        }
        
    return 0;
}
