#include <stdio.h>
void main() {
             int a,b,c;
             float avg;
             printf("Enter first integer");
             scanf("%d",&a);
             printf("Enter second integer");
             scanf("%d",&b);
             printf("Enter third integer");
             scanf("%d",&c);
             avg=((a+b+c)/(float)3);
             printf("Average is %d",avg);
}