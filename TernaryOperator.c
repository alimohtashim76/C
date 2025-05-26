#include <stdio.h>
int main()
{
	int doorcode;
	printf("Enter the code :");
	scanf("%d", &doorcode);
	printf("\n");
	// Ternary operator
	(doorcode == 5479) ? printf("\tDoor is open") : printf("\tWrong code");
	printf("\n");
	return 0;
}
