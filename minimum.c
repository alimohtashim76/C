#include<stdio.h>
int main()
{
    int arr[5]={10,9,3,4,5,7};
    int min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
     printf("%d",min);
}