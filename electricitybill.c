#include <stdio.h>
void main() {
             int units;
             float bill,Bill;
             printf("Enter electricity unit charge:");
             scanf("%d",&units);
             if(units<=50)
             {bill=units*0.50;}
             else if(units<=150) //or (units>=50 && units<=100)
             {bill=(50*0.50)+(units-50)*0.75;}
             else if(units<=250)
             {bill=(50*0.50)+(100*0.75)+(units-150)*1.20;}
             else if(units>250)
             {bill=(50*0.50)+(100*0.75)+(100*1.20)+(units-250)*1.50;}
            Bill=bill+(bill*0.2);
            printf("Total bill: %f",Bill);

}
