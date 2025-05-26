#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the two numbers :\n");
	scanf("%d %d", &a, &b);
	// Use of Ternary operator
	int max = (a > b) ? a : b;
	printf("Maximum : %d", max);
}
