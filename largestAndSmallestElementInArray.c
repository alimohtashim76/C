#include <stdio.h>

int findMax(int array[], int length)
{

    // Assume the first element is the largest
    int max = array[0];
    for (int i = 1; i < length; i++)
    {

        // Update max if arr[i] is greater
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int findSmallestElement(int array[], int length)
{
    int smallestElement = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] < smallestElement)
        {
            smallestElement = array[i];
        }
    }
    return smallestElement;
}
int main()
{
    int arr[] = {5, 2, 7, 6};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    printf("Largest element of your array is : %d\n", findMax(arr, arrLength));

    printf("Smallest element of your array is : %d\n", findSmallestElement(arr, arrLength));
    return 0;
}