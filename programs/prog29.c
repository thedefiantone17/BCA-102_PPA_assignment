#include<stdio.h>

// This is macro definition
#define PI 3.14

void main()
{
    // declaration and initialization of radius
    int radius = 5;
    // declaration and calculating the area
    float area = PI * (radius*radius); 
    
    // Printing the area of circle
    printf("Area of circle is %f", area);
}

