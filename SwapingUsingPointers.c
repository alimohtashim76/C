#include <stdio.h>
#include <conio.h>
void exch(int *L, int *M)
{
    int C;
    C = *L;
    *L = *M;
    *M = C;
}
int main()
{

    int a, b;
    a = 5;
    b = a + 2;
    exch(&a, &b);
    printf("\n a=%d,b=%d", a, b);
    getch();
}
