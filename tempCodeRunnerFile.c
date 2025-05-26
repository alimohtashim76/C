#include<stdio.h>

void fib(int n)
{
    int t1 = 0, t2 = 1;
    int nexterm;

    printf("%d\t%d\t",t1,t2);

    for(int i=3;i<=n;i++)
    {
        nexterm = t1 +t2;
        t1 = t2;
        t2 = nexterm;

        printf("%d\t",nexterm);
    }
}
int main()
{

    int nthTerm = 7;
printf("First %d terms of fibinocci series are : \n",nthTerm);
    fib(nthTerm);
}