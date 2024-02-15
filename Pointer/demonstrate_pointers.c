#include<stdio.h>
void main(){
            int *a,x=2;
            a=&x;
            printf("Address of variable: %d",a);
            printf("\nValue of variable: %d",*a);
            char b='A',*y;
            y=&b;
            printf("\nAddress of variable:%d",y);
            printf("\nValue of variable: %c",*y);
            float f=3.3,*z;
            z=&f;
            printf("\nAddress of variable:%d",z);
            printf("\nValue of variable: %f",*z);
            double d=3.72,*v;
            v=&d;
            printf("\nAddress of variable:%d",x);
            printf("\nValue of variable: %lf",*v);

}