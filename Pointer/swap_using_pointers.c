#include<stdio.h>
void main(){int a,b,*x,*y;
            printf("Enter a for swapping: ");
            scanf("%d",&a);
            printf("Enter b for swapping: ");
            scanf("%d",&b);
            x=&a,y=&b;
            printf("a=%d \nb=%d",*y,*x);
            
}