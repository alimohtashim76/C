#include<stdio.h>
int main()
{
	int arr[3][3]={{5,6,7},{1,2,3},{4,8,9}};
	//Accessing the element in 2D array
	int x=arr[2][1];// or we can simply write -->    printf("%d",arr[2][1]);
	printf("%d\n",x);
	
	//changing the value of element in 1st row and 2nd column
	arr[0][1]=7+5;
	printf("%d\n",arr[0][1]);
	
	//Printing all elements in 2D array
	for(int i=0;i<3;i++)
	{
		printf("\n\n");
		for(int j=0;j<3;j++)
		{
			printf("\t%d\t",arr[i][j]);
		}
	}
	
}
