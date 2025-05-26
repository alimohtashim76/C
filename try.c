#include <stdio.h>
void d(int i)
{
    printf("%d", i);
}
int main()
{
    int k = 10;
    while (k != 0)
    {

        printf("%d", k);
        d(--k);
    }
}