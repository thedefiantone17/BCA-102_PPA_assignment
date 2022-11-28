#include<stdio.h>
// program to check whether the integer is even or odd
int main(int argc, char const *argv[])
{
    int num;
    printf("Please enter the integer: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("%d is an Even number.", num);
    }
    else
    {
        printf("%d is an odd number.", num);
    }
    
    return 0;
}
