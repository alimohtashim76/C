#include <stdio.h>
int mean(int a, int b, int c)
{
	int x;
	x = (a + b + c) / 3;
	return x;
}

int main()
{
	int arr[9];
	

	printf("enter the 9 integers of the array :");
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 9; i += 3)
	{

		int p = mean(arr[i], arr[i + 1], arr[i + 2]);

		arr[i] = p;
		arr[i+1] = p;
		arr[i+2] = p;

		printf("Mean of %d, %d and %d is : %d\n", arr[i], arr[i + 1], arr[i + 2], p);
	}
}
