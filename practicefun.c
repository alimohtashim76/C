#include<stdio.h>
#define PI 3.14159
#define  add(x,y) x+y
int main()
{
    printf("%.5f\n",PI);
    printf("%d\n",add(23,43));
    int a=012;
    int*p=&a;
    printf("adress of a is %d\n",p);
        printf("value at a is %d\n",*p);

        int**q=&p;
printf("adress of p is %d\n",q);
printf("value p is %d\n",*q);
printf("value at a is %d",**q);

}