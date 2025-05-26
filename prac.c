#include<stdio.h>
void addition()
    {
        int a,b;

        printf("enter the two numbers :");
        scanf("%d%d",&a,&b);
        printf("%d+%d=%d",a,b,a+b);

    }
void subtraction()
{
    int x,y;
     printf("enter the two numbers :");
        scanf("%d%d",&x,&y);
        printf("the difference between %d and %d = %d",x,y,x-y);

}  
int main()
{
    int z;
    printf("enter 1 if u want to perform sum or enter 2 if u want to perform subtraction");
    scanf("%d",&z);
    switch(z)
    {
        case 1:  addition();
        break;
        case 2:  subtraction();
        break;
        default:printf("not valid input");
        
    }


}