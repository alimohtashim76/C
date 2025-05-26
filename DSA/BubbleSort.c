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
    int arr[] = {3,33,1,11,10,5,7,188,667};
    int temp, flag, numberOfSwaps = 0, numberOfIterations = 0; 

    for(int i = 0; i < 6; i++)
    {
        flag = 0;
        for(int j = 0; j < 6-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
                numberOfSwaps++;
            }
             numberOfIterations++;
        }

        if(flag == 0)
        break;

    }
    
    printf("Number of swaps : %d\n", numberOfSwaps);

    printf("Number of iterations : %d\n", numberOfIterations);

    printf("Sorted Array is \n");

    printArray(arr, 7);
}