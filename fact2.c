#include<stdio.h>
int main()
{
    long long int i,j;
    printf("Enter the no to check factorial: ");
    scanf("%d",&j);
    long long int f=1;
    for(i=1;i<=j;i++)
    {
     f=f*i;
    }
    printf("%d",f);
}