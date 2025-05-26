#include <stdio.h>
int main()
{
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR , a=%d and b=%d\n", a, b);

    char x = 7;
    x ^= 5;
    printf("%d\n", printf("%d", x += 3));

    int v = 75;
    int v2 = 56;
    int num;
    num = sizeof(v) ? (v2 > 23 ? ((v == 75) ? 'A' : 0) : 0) : 0;
    printf("%d", num);
}