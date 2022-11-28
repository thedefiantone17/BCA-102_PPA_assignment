#include<stdio.h>
// program to find area and perimeter of rectangle and to check if they're equal on not.

int area(int l, int b){
    return l*b;
}

int perimeter(int l, int b){
    return 2*(l+b);
}

int main(int argc, char const *argv[])
{
    int length, breadth, rArea, rPerimeter;
    printf("enter the length of the rectangle: \n");
    scanf("%d", &length);
    printf("enter the width of the rectangle: \n");
    scanf("%d", &breadth);
    
    rArea = area(length, breadth);
    rPerimeter = perimeter(length, breadth);

    printf("area of rectangle: %d \n", rArea);
    printf("perimeter of rectangle: %d \n", rPerimeter);

    if (rArea != rPerimeter) {
        printf("since area not equal to perimeter therefore it's a rectangle.");
    } else {
        printf("the shape is a square.");
    }
    
    

    return 0;
}
