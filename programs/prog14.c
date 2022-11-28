#include <stdio.h>
// program to show nesting of loop

int main(int argc, char const *argv[])
{

    int i, j, x, y;
    int a[10][10];
    printf("Enter value for x(rows)- max of 10: ");
    scanf("%d", &x);
    printf("Enter value for y(columns) - max of 10: ");
    scanf("%d", &y);
    printf("Let's create a 2-D array: ");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Now printing the array: ");
    printf("\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("\t");
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
