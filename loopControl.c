#include <stdio.h>
int main()
{
    int i, n = 2; //4
    for (i = 0; i <= 20; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    int num;
    while (1)
    {
        printf("enter the number");
        scanf("%d", &num);
        if (num < 1)
        {
            break;
        }
    }
}