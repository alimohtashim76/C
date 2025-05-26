#include<stdio.h>
//Conversion of temprature from degree celcius to degree farenheit
int main()
{
	int cel,far;
	printf("Enter the temp in degree celcius:");
	scanf("%d",&cel);
	far=(cel*9/5)+32;
	printf("The temp in degree farenheit is: %d",far);
}
