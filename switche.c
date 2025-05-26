#include<stdio.h>
int main()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);

    switch(x)
    {

        case 0: printf("Monday");
        break;
         case 1: printf("Tuesday");
        break;
         case 2: printf("Wednsday");
        break;
         case 3: printf("Thursday");
        break;
         case 4: printf("Friday");
        break;
         case 5: printf("Saturday");
        break;
         case 6: printf("Sunday");
        break;
        default:printf("wrong number entered");
        break;
    }
}