#include <stdio.h>
long long int fact(int m)
{
	long long int r = 1;
	for (int i = 1; i <= m; i++)
	{
		r = r * i;
	}
	return r;
}
int main()
{
	int n;
	printf("\t\tFACTORIAL CALCULATOR\n\n");

	printf("Enter the number:");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("Factorial is not defined for negative numbers");
	}
	else
		printf("The factorial of %d is = %lld", n, fact(n));

}
