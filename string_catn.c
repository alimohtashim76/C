#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    char y[100];
    printf("Enter the first string\n");
    gets(x);
    printf("Enter the second string\n");
    gets(y);
    strncat(x,y,3);
    printf("Combined string is \n%s",x);

}
