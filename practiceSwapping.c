#include <stdio.h>
void swap(int firstNumber, int secondNumber)
{
    int temp;
    temp = firstNumber + secondNumber;
    firstNumber = temp - firstNumber;
    secondNumber = temp - secondNumber;
    printf("\tSwapping A and B back by using a temporary variable , we get : A = %d and B = %d \n\n", firstNumber, secondNumber);
}
int main()
{
    int A;
    int B;

    printf("Enter the value of A : ");
    scanf("%d", &A);
    printf("Enter the value of B : ");
    scanf("%d", &B);

    printf("\tInitially : A = %d and B = %d\n\n", A, B);

    A = A + B;
    B = A - B;
    A = A - B;
    printf("\tSwapping A and B without using a temporary variable, we get : A = %d and B = %d \n\n", A, B);

    swap(A, B);
}
