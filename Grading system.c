//Grading system
#include <stdio.h>
int main()
{
    int math,Eng,CRE,average;
    printf("\nEnter value of math,Eng and CRE:");
    scanf("%d%d%d",&math,&Eng,&CRE);
    average=(math+Eng+CRE)/3;
    if(average>=70 && average<=100){
        printf("A");}
        else
    if(average>=60 && average<=69){
        printf("B");}
        else
    if(average>=50 && average<=59){
        printf("C");}
        else
    if(average>=40 && average<=49){
        printf("D");}
        else
    if(average>=0 && average<=39){
        printf("E Fail");
        
        return 0;
    }
    
}