//program to calculate simple intrest
#include<stdio.h>
int main()
{
    float P,R,T,SI;
    printf("\n Enter value of P:");
    scanf("%f",&P);
    printf("\n Enter value of R:");
    scanf("%f",&R);
    printf("\n Enter value of T:");
    scanf("%f",&T);
    SI=(P*R*T)/100;
   printf("\n\nsimple interest=%f",SI);
   
   return 0;
}