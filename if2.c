#include <stdio.h>
int main()
{
    int a;
    printf("\n1.enter the program \n 2.exit\n");
    scanf("%d", &a);
    if (a == 1)
    {
        {
            /* code */
        }

        int x;
        printf("\n Enter the number : ");
        scanf("%d", &x);
        if (x <= 0)
        {
            printf("Absolute Value :%d", x * (-1));
        }
        else
        {
            printf("%d", x);
        }

        return main();
    }
    else
    {
     return 0;
    }
}