#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	
	int r =rand();

	
	printf("The random number:%d",r);
	return 0;
	
}
