#include<stdio.h>
#include<math.h>

int main()

{
int a,b,c;
printf("Enter the base  ");
scanf("%d",&a);
printf("Enter the exponent  ");
scanf("%d",&b);

c=pow(a,b);
printf("Power of %d raised power %d = %d",a,b,c);	
return 0;
	
}

