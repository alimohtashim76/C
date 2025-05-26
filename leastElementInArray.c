#include<stdio.h>

int main()
{
    int arr[] = {12,3,4,6,7,53,2,8,2,9,23,3};

    int arrLength = sizeof(arr)/sizeof(arr[0]);
    int least = arr[0];

    for (int i = 1; i < arrLength ; i++)
    {
       if (arr[i] < least)
       {
        least = arr[i];
       }
       
    }

    printf("%d ", least);
    

}