//Bank loan
#include<stdio.h>
int main(){
    int age,salary;
    printf("enteryour age in years and salary:");
    scanf("%d%d",&age,&salary);
    if(age>= & salary>=21000){
        printf("congratulations you qualify for a loan");
    }
    else{
        printf("unfortunately you dont qualify");
    }
    return 0;
}