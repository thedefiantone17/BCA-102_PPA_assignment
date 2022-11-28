#include<stdio.h>
// Write a program to add two numbers, using a user define function having return type and with parameter list
int sum(int num1, int num2){
    int num3;
   num3 = num1 + num2;
   return (num3);
}

int main(int argc, char const *argv[])
{
   int num1, num2, res;
 
   printf("\nEnter the first number : ");
   scanf("%d", &num1);
   printf("\nEnter the second number : ");
   scanf("%d", &num2);
 
   //Call Function Sum With Two Parameters
   res = sum(num1, num2);
 
   printf("Addition of two number is : %d", res);
   return (0);
}
