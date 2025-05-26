#include <stdio.h>
int main()
{
  int choice;
  float num1, num2, result;

  printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");

  while (1)
  {

    printf("\n\tEnter your choice  : ");
    scanf("%d", &choice);
    if (choice == 5)
    {
      break;
    }
    else if (choice > 5 || choice < 1)
    {
      printf("invalid choice\n");
    }
    else
    {
      printf("Enter the first number : ");
      scanf("%f", &num1);
      printf("Enter the second number : ");
      scanf("%f", &num2);

      switch (choice)
      {
      case 1:
        result = num1 + num2;
        printf("%.2f+%.2f=%.2f", num1, num2, result);
        break;
      case 2:
        result = num1 - num2;
        printf("%.2f-%.2f=%.2f", num1, num2, result);
        break;
      case 3:
        result = num1 * num2;
        printf("%.2f*%.2f=%.2f", num1, num2, result);
        break;
      case 4:

        if (num2 != 0)
        {
          result = num1 / num2;

          printf("%.2f/%.2f=%.2f", num1, num2, result);
        }
        else
        {
          printf("A number cannot be divided by zero");
        }
        break;
      }
    }
  }
}
