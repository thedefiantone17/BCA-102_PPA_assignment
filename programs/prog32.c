#include<stdio.h>

int a, b, sum, y;

void add(int x, int y){
    sum = x+y;
    printf("the sum of %d and %d is %d", x, y, sum);
}

int main(int argc, char const *argv[])
{
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    add(a,b);
}
