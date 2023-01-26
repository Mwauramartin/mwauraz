//Program to calculate
#include<stdio.h>
#include<math.h>
int main()
{
    float t,r,p,interest;
    printf("\n Enter principal_amount:");
    scanf("%f",&p);
    printf("\n Enter value time:");
    scanf("%f",&t);
    printf("\n Enter rate value:");
    scanf("%f",&r);
interest=p* pow((1+r),t);
//pow(2,8)
printf("interest=%7.3f",interest);
return 0;
}