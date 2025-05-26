#include<stdio.h>
int main()
{
	int s[20]={0};
	int n;
	printf("Enter the number:\n ");
	scanf("%d",&n);
	
	while(n>0){
		int p;
		p=n%10;
		if(s[p]==1);
		break;
		s[p]=1;
		n=n/10;
	}
	if(n>0)
	printf("\nYes your number has repeating digits\n");
	else
	printf("\nN0 your number has not repeating digits\n");
	
	
}
