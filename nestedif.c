#include <stdio.h>
// Use of nested if else to check whether the given number is positive or negative or zero and even or odd
int main()
{
    int flag;
    printf("\t\tProgram to check whther number is positive or negative and even or odd \n");
    printf(" 1. Check number \n 2. Exit \n Enter 1 to perform number check .Enter 2 to exit\n");
    scanf("%d", &flag);

    while (flag == 1)
    {
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            printf("\t\t%d is positive\n", num);
            if (num % 2 == 0)
            {
                printf("%d is even\n", num);
            }
            else
            {
                printf("%d is odd\n", num);
            }
        }
        else if (num < 0)
        {
            printf("%d is negative\n", num);
            if (num % 2 == 0)
            {
                printf("%d is even\n", num);
            }
            else
            {
                printf("%d is odd\n", num);
            }
        }
        else
        {
            printf("%d is zero\n", num);
        }
        printf("1. Check number \n 2. Exit \n Enter 1 to perform number check .Enter 2 to exit\n");
    scanf("%d", &flag);
    }

}