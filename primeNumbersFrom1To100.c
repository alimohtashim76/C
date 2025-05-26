#include <stdio.h>
int main()
{

    int count = 0;
    int number = 1;
    while (numṇber <= 100)
    {
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
                count++;
        }
        if (count == 2)
            printf("%d\n", number);

        count = 0;
        number++;
    }
}