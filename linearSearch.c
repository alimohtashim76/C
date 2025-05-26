#include <stdio.h>

int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return arr[i];
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

    int result = linearSearch(arr, target, lengthOfArr);

    if (result != -1)
    {
        printf("Element found using linear search at index %d", result);
    }
    else
    {
        printf("Element not found");
    }
}