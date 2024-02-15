#include<stdio.h>
void main(){
            int n;
            printf("Enter the size of array: ");
            scanf("%d",&n);
            int a[n],i;
            for(i=0;i<n;i++)
            {
                printf("Enter element in array a[%d]: ",i);
                scanf("%d",&a[i]);
            }
            int *x,temp,j;
            for(i=0;i<n;i++)
            {
                for(j=1+i;j<n;j++)
                {
                    if(a[i]>a[j])
                    {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                    }
                   
                }
            }
            for(i=0;i<n;i++)
            {
                x=&a[i];
                printf("%d ",*x);
            }
}