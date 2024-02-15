#include<stdio.h>
void main(){
            int x=10,*a;
            a=&x;
            printf("Address of variable x: %d",*&a);
            printf("\nValue of variable x: %d",*a);
}