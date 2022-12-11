#include<stdio.h>


void add(){
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("the sum of %d and %d is %d", a, b, sum);
}

int main(int argc, char const *argv[])
{
    add();
}
