#include <stdio.h>
#include <math.h>
void main() {
             
             float a,b,c,D,x,y,real,img;
             printf("Enter the coefficients a,b and c: ");
             scanf("%f %f %f",&a,&b,&c);
             D=(b*b)-4*a*c; //take a positve or negative or zero case as well
             if(D>0)
             {x=(-b+sqrt(D))/2*a;  // pow(b,2)= b2
             y=(-b-sqrt(D))/2*a;
             printf("Roots are : %0.0f %0.0f",x,y);
             }
             else if(D==0)
             {x=y=-b/2*a;
              printf("Roots are : %0.0f %0.0f",x,y);}
              else if(D<0)
              {
                real=-b/2*a;
                img=sqrt(D)/2*a;
                printf("Roots are %0.2f+%0.2f and %0.2f-%0.2f",real,img,real,img);
              }
             

             

}