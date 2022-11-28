#include<stdio.h>
// # program to add 2 numbers

// creating sum function:
int sum(int a, int b){
    return a+b;
}

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // using sum function
    num3 = sum(num1, num2);
    printf("Sum of two numbers: %d", num3);
    return 0;
}
