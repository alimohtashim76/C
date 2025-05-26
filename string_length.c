#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    printf("Enter the String\n");
    gets(x);
    printf("Length of String is :%lu\n",strlen(x));
    return 0;
}