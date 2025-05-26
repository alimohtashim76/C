#include<stdio.h>
int main()
{
	int votingAge;
	printf("Enter your age :");
	scanf("%d",&votingAge);
	printf("\n");
	//Ternary operator 
	(votingAge>=18)?printf("\tYou are eligible to vote"):printf("\tYou are not eligible to vote");
		printf("\n");
	return 0;
}
