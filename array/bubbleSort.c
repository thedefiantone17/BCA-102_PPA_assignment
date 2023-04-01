#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        /* code */
        for (int i = 0; i < size - step - 1; i++)
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
        printf("%d\n", array[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {6,5,4,3,2};
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    printf("sorted array: \n");
    printArray(data, size);
}