#include<stdio.h>
int main()
{
	int arr[]={56,7,87,56,23,23};
//	for(int j=0;j<4;j++)
//	printf("enter the array");
//	scanf("%d",&arr[j]);
	int length = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<length;i++)
	{
		printf(" %d",arr[i]);
		
	}
	return 0;
	
}
