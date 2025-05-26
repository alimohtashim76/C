#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    char y[100];
    printf("Enter the first string\n");
    scanf("%s",x);
    //gets(x);
    
    printf("Enter the second string\n");
    scanf("%s",y);
	//gets(y);
	
    printf("Combined string is \n%s",strcat(x,y));

}
