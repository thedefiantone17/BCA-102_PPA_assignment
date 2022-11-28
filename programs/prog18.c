#include<stdio.h>
// program to find number greater between the 2 numbers.

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("%d is greater than %d", num2, num1);
    }
    else if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }
    else if (num1 == num2)
    {
        printf("%d is equal to %d", num1, num2);
    }
    else
    {
        printf("please enter a valid input!");
    }
    

    return 0;
}
