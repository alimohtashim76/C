#include<stdio.h>

int count = 2;


void fib(int prev1, int prev2)
{
    int newFib;
    if (count <= 19)
    {
        newFib = prev1 + prev2;

        printf("%d ",newFib);
        prev2 = prev1;
        prev1 = newFib;
        count++;
        fib(prev1, prev2);

       

    }
    else
    {
        return;
    }
    
}

int main()
{
    int prev2 = 0;
    int prev1 = 1;
    printf("%d %d ", prev2, prev1);

    fib(prev1, prev2);
}