#include<stdio.h>
#include<string.h>
int main()
{
char x[100];
printf("Enter the string:");
gets(x);
int length=strlen(x);
printf("The length of string is %d",length);
return 0;

}
