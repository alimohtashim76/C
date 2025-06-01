#include <stdio.h>
int main()
{
	int a[] = {44, 32, 45, 67, 89, 9, 12, 5, 7, 1};
	int i;

	// original order
	for (i = 0; i < 10; i++)
	{
		printf("\t%d", a[i]);
	}

	printf("\n\n");

	// reverse order
	for (i = 9; i >= 0; i--)
	{
		printf("\t%d", a[i]);
	}

	return 0;
}
