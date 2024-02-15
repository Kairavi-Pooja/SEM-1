#include<stdio.h>
void main(){
            int n,m;
            printf("Enter the size of array: ");
            scanf("%d",&n);
            int a[n],b[n],i,*x;
            for(i=0;i<n;i++)
            {
                printf("Enter element in array a[%d]: ",i);
                scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                x=&a[i];
                b[i]=*x;
                printf("%d ",b[i]);
            }

}