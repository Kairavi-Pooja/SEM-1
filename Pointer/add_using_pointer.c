#include<stdio.h>
void main(){
            int m,n;
            printf("Enter number of rows for matrix 1: ");
            scanf("%d",&m);
            printf("Enter the number of columns for matrix 1: ");
            scanf("%d",&n);
            int a[m][n],i,j;
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("Enter element in a[%d][%d]: ",i,j);
                    scanf("%d",&a[i][j]);
                    
                }
            }
            int x,y;
            printf("Enter the number of rows for matrix 2: ");
            scanf("%d",&x);
            printf("Enter the number of columns for matrix 2: ");
            scanf("%d",&y);
            int b[x][y];
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    printf("Enter element in b[%d][%d]: ",i,j);
                    scanf("%d",&b[i][j]);
                    
                }
            }//if we use 2 pointer for 2 matrix elements then address would change everytime for each iteration thus store the sum in a 
            int ans[x][y],*p;//pointer then print answer
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    ans[i][j]=a[i][j]+b[i][j];
                    p=&ans[i][j];
                    printf("%d ",*p);
                }
                printf("\n");
            }
}