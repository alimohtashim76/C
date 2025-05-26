#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    char y[100];
    int result;
    printf("Enter the first string\n");
    gets(x);
    printf("Enter the second string\n");
    gets(y);
    //compare x and y , and assign the the value to result
    result=strcmp(x,y);
    //print result ( returns 0 if the strings are equal / returns any other value if the strings are vnot equal).
    printf("\n%d",result);


}
