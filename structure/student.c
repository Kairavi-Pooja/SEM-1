#include<stdio.h>
struct student
{
    char name[100];
    int age;
    float percentage;
};
void main(){
            struct student s[5];
            int i;
            for(i=0;i<5;i++)
            {
                printf("Enter name of student %d: ",i+1);
                scanf("%s",s[i].name);              
                printf("Enter age of student %d: ",i+1);
                scanf("%d",&s[i].age);
                printf("Enter percentage of student %d: ",i+1);
                scanf("%f",&s[i].percentage);
            }   
            
            
                printf("%s ",s[2].name);
                printf("%d ",s[4].age);
                printf("%f ",s[0].percentage);
            
}