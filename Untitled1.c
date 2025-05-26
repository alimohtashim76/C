#include<stdio.h>
void AP(int a,int b,int c,float *av,float *pr)
{
    *av=(a+b+c)/3;
    *pr=(a+b+c)/300;

}
int main()
    {
        int s1=55,s2=67,s3=81;
        float avg,percnt;
        AP(s1,s2,s3,&avg,&percnt);
        printf("%.2f\n",avg);
        printf("%f",percnt);


    }
