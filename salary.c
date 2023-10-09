#include <stdio.h>
void main() {
             int salary;
             float HRA,DA,gross=0;
             printf("Enter basic salary:");
             scanf("%d",&salary);
             //always use ==(relational) operator to get the value checked.
             //here when salary=10000 is written, it is assigned value 10000 and hence gives the same o/p for every value.
             //
             if (salary>=10000 && salary<20000)
             {
                HRA=(20*salary)/100;
                DA=(80*salary)/100;
                gross= salary+HRA+DA;
                printf("Gross salary :%0.0f",gross);
             }
                
             else if(salary>=20000&&salary<30000)
            {
                HRA=(25*salary)/100;
                DA=(90*salary)/100;
                gross =salary+ HRA+DA;
                printf("Gross salary :%0.0f",gross);
             }
             else if (salary>=30000)
             {
                HRA=(30*salary)/100;
                DA=(95*salary)/100;
                gross = salary+HRA+DA;
                printf("Gross salary :%0.0f",gross);
            
             }
             
}