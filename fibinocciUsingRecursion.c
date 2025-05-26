#include<stdio.h>

int fib(int n)
{
    if(n==1 || n==2)
    return 1;

    return fib(n-1)+fib(n-2);
}
int main()
{
int a = 5;
int result = fib(a);

printf("%d",result);
}