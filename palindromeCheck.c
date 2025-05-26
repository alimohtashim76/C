#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    int actualNumber = number;
    int reverseNumber = 0;
    // this reverses the given number and reversed number is stored in reverseNumber variable
    while (number != 0)
    {
        reverseNumber = reverseNumber * 10 + number % 10;
        number = number / 10;
    }
    // printf("%d",reverseNumber);

    if (actualNumber == reverseNumber)
    {
        printf("%d is a Palindrome number", actualNumber);
    }
    else
    {
        printf("%d is not a Palindrome", actualNumber);
    }
}