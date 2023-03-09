//arrays 3by3 dimension
#include<stdio.h>
int main()
{
    int r,c;
    int k[2][3]={{2,3,4},
                    {5,6,7}};
   for(r=0; r<3;r++){
   for(c=0;c<3;c++)
    {
    printf("%d ",k[r][c]);
    }
   }
    return 0;
}
