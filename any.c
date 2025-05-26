#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:    ");
    scanf("d",&n);

    int div=2;
    while(div<n){
        if(n % div==0){
            printf("not prime");
        }
        div++;
        }
    printf("prime");
}
