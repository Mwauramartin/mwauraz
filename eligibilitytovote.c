//Eligibility to vote
#include<stdio.h>
int main()
{
    int age, nationality;
    printf("\n Enter your age in years and Nationality");
    scanf("%d%d",&age,&nationality);
    if(age>=18){
    printf("congratulations if you qualify");}
    
    else{
        printf("unfortunately you dont qualify");
    } 
   return 0;
   
}