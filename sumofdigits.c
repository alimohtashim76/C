#include <stdio.h>
int sumOFdigits(int num)
{
	int sum = 0;
	while (num != 0)
	{
		int digit = num % 10;
		sum += digit;
		num = num / 10;
	}
	return sum;
}
int main()
{
	int a, b;
	printf("Enter the number:\n\t\t");
	scanf("%d", &a);
	b = sumOFdigits(a);
	printf("The sum of digits of your number is:\n\t\t%d\n\n", b);
}
