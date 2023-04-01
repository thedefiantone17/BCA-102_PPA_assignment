#include <stdio.h>

void swap(int, int);
void swap(int a, int b)
{
   int temp;

   temp = b;
   b = a;
   a = temp;
   printf("Values of a and b is %d  %d\n", a, b);
   printf("After Swapping\nx = %d\ny = %d\n", a, b);
}

int main()
{
   int x, y;

   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);

   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   swap(x, y);

   return 0;
}