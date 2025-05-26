#include<stdio.h>

int binarySearch(int arr[], int arrLength, int targetValue)
{   
    int mid, left = 0;
    int right = arrLength-1;

    while (left <= right)
    {
        mid = (left+right)/2;

        if (arr[mid] == targetValue)
        {
           return mid;
        }

        if (arr[mid] > targetValue)
        {
            right = mid -1;
        }
        else
        left = mid +1;
        
    }

    return -1;
    
}

int main()
{
    int arr[] = {12,3,3,4,5,5,6,7,8,9};

    int index = binarySearch(arr, 10, 5);

    if(index != -1)
    {
        printf("element found at index %d ",index);
    }
    else
    printf("not found");
}