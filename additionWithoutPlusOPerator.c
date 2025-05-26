#include <stdio.h>
int main()
{
    int choice;
    while (choice != 2)
    {

        printf("1. Addition \n2. Exit \nEnter your choice :");
        scanf("%d", &choice);
        if (choice != 2 && choice != 1)
        {
            printf("invalid choice");
            break;
        }

        int a, b;

        printf("Enter the two numbers :");
        scanf("%d%d", &a, &b);
        while (b != 0)
        {
            a++;
            b--;
        }
        printf("Sum = %d\n", a);
    }
}
