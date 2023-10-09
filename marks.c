#include <stdio.h>
void main() {
             float A,B,C,D,E,Percentage;
             
             
             printf("Enter the subject marks out of 100\n");
             printf(" A:\n B:\n C:\n D:\n E:\n");
             scanf("%f %f %f %f %f",&A,&B,&C,&D,&E);
             Percentage=(A+B+C+D+E)/5;
             if(Percentage<=35)
             {
                printf("Fail");
             }
            else if(Percentage>=36 && Percentage<=45)
            {printf("Pass");}
            else if(Percentage>=46 && Percentage<=60)
            {printf("Second class");}
            else if(Percentage>=61 && Percentage<=70)
            {printf("First class");}
            else if(Percentage>70 && Percentage<=100)
            {printf("Distinction");}
            
}