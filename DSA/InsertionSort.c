#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}

void main()
{
    int arr[] = {7, 5, 6, 7, 2, 3, 9};

    for (int i = 1; i < 7; i++)
    {
        int key = arr[i];

        int j = i - 1;

        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = key;
    }

    printArray(arr, 7);
}