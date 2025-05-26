#include<stdio.h>
int main()
{
	
	
	int num,b;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("Table of %d",num);
	for(b=1;b<=10;b++){
	
	printf("\n%d*%d=%d",num,b,num*b);
}
	
}
