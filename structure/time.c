#include<stdio.h>
struct time{
     int h;
     int m;
     int s;
};
void main(){
    struct time t1,t2,t3;
    printf("Enter time 1 in hh:mm:ss format: ");
    scanf("%d %d %d",&t1.h,&t1.m,&t1.s);
    printf("Enter time 2 in hh:mm:ss format: ");
    scanf("%d %d %d",&t2.h,&t2.m,&t2.s);
    t3.s=t1.s+t2.s;
    printf("%d ",t3.s);
    t3.m=t1.m+t2.m;
    printf("%d ",t3.m);
    t3.h=t1.h+t2.h;
    if(t3.s>=60)
    {t3.m=1+t1.m+t2.m;
    t3.s=t3.s-60;}
    
    if(t3.m>=60)
    {t3.h=1+t1.h+t2.h;
    t3.m=t3.m-60;}
   
    printf("%d:%d:%d",t3.h,t3.m,t3.s);
    }
