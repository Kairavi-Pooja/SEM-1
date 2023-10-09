#include <stdio.h>
void main() {
             char b,A,Z,a,z;
             
             printf("Enter a character");

             scanf("%c",&b);



             if(b>='A' && b<='Z')
             { printf("uppercase");}
             
            else if(b>='a' && b<='z')
             {printf("lowercase");}
             else if(b>=48 && b<=57)
             {printf("digit");}

             else{printf("special character");}


}