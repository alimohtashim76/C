#include <stdio.h>

int main()
{
    int num, enteredNumber, result = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    // int num2 = num;
    enteredNumber = num;
    // this will give th order(number of digits) of number
    int order = 0;
    while (num != 0)
    {
        num = num / 10;
        order++;
    }
    // evaluating the the armstrong rules on number and stores it in result variable
    num = enteredNumber;

    while (num != 0)
    {
        int digit = num % 10;
        int mul = 1;
        for (int i = 1; i <= order; i++)
        {
            mul = mul * digit;
        }
        result = result + mul;

        mul = 1;

        num = num / 10;
        /* result = result + pow(num2 % 10, order); // power function from math.h is used
        num = num / 10; */
    }
    // comparing entered number and the result
    if (result == enteredNumber)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}