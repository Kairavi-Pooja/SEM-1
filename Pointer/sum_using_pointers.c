#include<stdio.h>
void main(){
            int a,b,*x;
            printf("Enter number 1 for addition: ");
            scanf("%d",&a);
            printf("Enter number 2 for addition: ");
            scanf("%d",&b);
            int sum=a+b;
            x=&(sum);            
            printf("Sum of 2 numbers is: %d",*x);
}