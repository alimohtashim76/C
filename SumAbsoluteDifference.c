#include <stdio.h>
#include<stdlib.h>


void update(int *a,int *b) {
    // Complete this function 
    
   *a=*a+*b;
   int m=abs(*a-*b);
   *b=abs(m-*b);


   
}

int main() {
    int a, b;
    //int *pa = &a, *pb = &b;
    printf("Enter the numbers :\n");
    scanf("%d %d", &a, &b);
    update(&a, &b);
    
    printf("%d\n%d", a, b);

    return 0;
}
