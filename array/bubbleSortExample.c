#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        /* code */
        for (int i = 0; i < size - step - 1; ++i)
        {
            /* code */
            if (array[i] > array[i + 1])
            {
                /* code */
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        /* code */
        printf("%d", array[i]);
    }
    printf("\n");
}

int main()
{
    // Write C code here
    int data[5];
    printf("enter the elements: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n", &data[i]);
    }

    printf("---------------------- \n");

    printf("Elements in array are:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", data[i]);
    }

    printf("---------------------- \n");

    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    printf("---------------------- \n");

    printArray(data, size);

    return 0;
}