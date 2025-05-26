#include <stdio.h>

int power(int base, int exp)
{
    if (exp > 1)
    return base * power(base, exp-1);
    
}

int main()
{
    int result = power(3, 2);
    printf("%d ",result);
}