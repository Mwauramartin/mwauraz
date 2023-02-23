//Sum of natural numbers
#include <stdio.h>
int main()
{
    int r = 15, sum = 0;
    while (r>0){
    printf("%d " , r);
    r = r - 1;
    sum = sum + r;
    }
    printf("\n the sum is %d", sum);

    return 0;
}
 
