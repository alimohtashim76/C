#include<stdio.h>
#include<limits.h>
int var=10;

int fun(){
	printf("%d\n",var);
}
int main()
{
	//int a=INT_MIN;
	//int b=UINT_MAX;
	//printf("%d  %u",a,b);
	int var=4;
	printf("%d\n",var);
	fun();
	float a=3/5;
	printf("%.1f\n",a);
	float b=3.0/5.0;
	 printf("%.1f\n",b);
	 
	 char c=265;
	 printf("%d\n",c);
	 
	 printf("%d\n",printf("%s","hello "));
	 
	 printf("%10s\n","hello");
	 
}
