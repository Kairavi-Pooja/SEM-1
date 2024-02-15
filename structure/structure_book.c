#include<stdio.h>
#include<String.h>
struct book
            { char title[100];
              char author[100];
              char publication[100];
              int price;
            };
void main(){
    struct book b[3];//declaring array instead of a variable
    int i;
    for(i=0;i<3;i++)
    {   printf("Enter name of book : ");
        // gets(b[i].title);
        scanf(" %s",b[i].title); //to enter consecutive strings space has to be kept hence scanf
        printf("Enter author: ");
        // gets(b[i].author);
        scanf(" %s",b[i].author);

        printf("Enter publication: ");
        scanf(" %s",b[i].publication);
        
        printf("Enter price: ");
        scanf("%d",&b[i].price);
    }
    for(i=0;i<3;i++)
    {   printf("\nBook %d",i+1);
        printf("  Title: %s",b[i].title);
        printf(" Author: %s",b[i].author);
        printf("  Publication: %s",b[i].publication);
        printf("  Price: %d",b[i].price);
    }
            
}