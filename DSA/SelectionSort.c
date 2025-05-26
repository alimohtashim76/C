#include<stdio.h>


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int minIndex, temp, arr[] = {12,32,3,45,5,6,2,67,7,};

    int arrLength = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < arrLength-1; i++)
    {
        minIndex = i;
       for (int j = i+1; j < arrLength; j++)
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

    printArray(arr, arrLength);
    
}