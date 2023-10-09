#include <stdio.h>
void main() {
             float a,b,c;
             printf("Enter the sides of triangle: ");
             //IMP: USE & IN SCANF
             scanf("%f %f %f",&a,&b,&c);
             //equilateral,all 3 ,ust be simultaneously equal thus and gate
             if(a==b&&b==c&&c==a)
             {printf("The triangle is equilateral");}
             //isosceles to check values of a,b,c use == not = this assigns value
             else if(a==b||b==c||c==a)
             {printf("The triangle is isosceles");}
             //right angled
             else if((a*a==(b*b)+(c*c))||(b*b==(a*a)+(c*c))||(c*c==(a*a)+(b*b)))
             {printf("The triangle is right angled");}
             //scalene
             else if(a!=b&&b!=c&&c!=a)
             {printf("The trianlge is scalene");}
             
             
             

}