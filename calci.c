#include <stdio.h>
void main() {
             int a,b;
             char c;
               printf("Enter the operation");
             scanf("%c",&c);
             printf("Enter 2 integers");
             scanf("%d %d",&a,&b);
             //if integers are read first, then value of enter is stored in scanf, thus in such programs first run scanf.
             
             if (c== '+')
             {
                
                printf("The answer is %d",a+b);
             }
             else if (c== '-')
             {
                
                printf("The answer is %d",a-b);
                 }

            else if (c== '*')
            {
                
                printf("The answer is %d",a*b);
        
            }
            else if (c== '/')

            {
               
                printf("The answer is %f",a/b);
            }

             }
