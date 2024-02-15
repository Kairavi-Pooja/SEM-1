#include<stdio.h>
struct student{ //struct=keyword;student= name of structure
        char name[100];
        int roll_no;
    };
void main()
{   struct student s[1000]; //variable declared
   int i;
   for(i=0;i<3;i++)
   {
    printf("Enter name of student s[%d]: ",i);
    scanf("%s",&s[i]);
    scanf("%d",&s[i].roll_no);
   }
for(i=0;i<3;i++)
{
    printf("\n%s",s[i].name);
    printf("\n%d",s[i].roll_no);
}
}