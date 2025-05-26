#include <stdio.h>

int binarySearch(int arr[], int target, int size)
{

    int mid, left = 0, right = size - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int target, arr[] = {2, 4, 5, 6, 7, 12, 45, 55, 60, 98};
    int lengthOfArr = sizeof(arr) / sizeof(arr[0]);

    printf("enter the element you want to find : ");
    scanf("%d", &target);

    int result = binarySearch(arr, target, lengthOfArr);

    if (result != -1)
    {
        printf("Element found using binary search at index %d", result);
    }
    else
    {
        printf("Element not found");
    }
}