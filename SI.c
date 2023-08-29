#include <stdio.h>
void main() {
             float SI;
             int P,R,T;
             scanf("%d",&P);
             scanf("%d",&R);
             scanf("%d",&T);
             SI = (P*R*T)/(float)100;
             printf("SI is %f",SI);
}