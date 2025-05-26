#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {3,33,1,11,10,5,7};
    int numberOfSwaps = 0;
    int minIndex, temp, a ;

    for(int i = 0; i < 6; i++)
    {
       minIndex = i;
        for(int j = i+1; j < 7; j++)
        {
           if (arr[j] < arr[minIndex])
           {
                minIndex = j;
           }
           
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    

    printf("Sorted Array is \n");

    printArray(arr, 7);
}