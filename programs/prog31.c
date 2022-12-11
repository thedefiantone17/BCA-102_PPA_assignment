#include<stdio.h>
// Program to add two numbers, using a user define function having return type but without parameter list

int y;
int sum;

int add(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d" , &a, &b );
    sum = a+b;
    return sum;
}

int main(int argc, char const *argv[])
{
    y= add();
    printf("the sum is: %d", y);
}
