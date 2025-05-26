#include<stdio.h>
 struct book{
        char name[10];

    
    };


int main()
{ 
    struct book b1;
    printf("enter the name price and pages of the book");
    scanf("%s",&b1.name);
    printf("%s",b1.name);

}