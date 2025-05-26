#include<stdio.h>
struct ab{
	char name;	
};
int main()
{
	struct ab b={'a'};
	printf("%c",&b.name);
}
