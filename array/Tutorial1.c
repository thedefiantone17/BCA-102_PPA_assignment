#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int marks[4];

    // int marks[4] = {0,2,4,6};

    // marks[0]= 34;
    // printf("marks of student 1 is %d \n",marks[0]);
    // marks[0]= 50;
    // marks[1]= 45;
    // marks[2]= 40;
    // marks[3]= 20;
    // printf("marks of student 1 is %d \n",marks[0]);

    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     printf("Enter the value of %d element of the array \n",i);
    //     scanf("%d",&marks[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     printf("Enter the value of %d element of the array is %d \n", i, marks[i]);
    //     scanf("%d",&marks[i]);
    // }

    // # 2d array

    int a[10], i;
    printf("Enter 10 Elements: \n");

    for (i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d \n", &a[i]);
    }

    printf("Elements you entered \n");
    printf("%d\n",a[i]);

    printf("List of even numbers: \n");

    for (i = 0; i < 10; i++)
    {
        /* code */

        if (a[i] % 2 == 0)
        {
            /* code */
            printf("%d \n", a[i]);
        }
    }


    return 0;
}
