// GRADING SYSTEM
#include<stdio.h>
int main()
{
    int Eng,Maths,Chem,Average;
    printf("\nEnter marks for Eng,Maths,Chem:");
    scanf("%d%d%d",&Eng,&Maths,&Chem);
    Average=(Eng+Maths+Chem)/3;
    if(Average>=70 && Average<=100){
    printf("Grade A");}
    else
    if(Average>=60 && Average<=69){
    printf("Grade B");}
    else
    if(Average>=50 && Average<=59){
    printf("Grade C");}
    else
    if(Average=40 && Average<=49){
    printf("Grade D");}
    else
    if(Average>=0 && Average<=39){
    printf("Grade E Fail");}
    
    return 0;
}