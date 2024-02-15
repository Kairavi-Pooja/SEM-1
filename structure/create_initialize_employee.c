#include<stdio.h>
struct employee
{
    char name[100];
    int salary;
};
void main(){ 
      struct employee e1={"Ram",1000000};
     
     struct employee  e2={"Mann",2000000};
     
     struct employee  e3={"madhav",300000};
      
      printf("%s",e1.name);
      printf("\n%d",e2.salary);

}