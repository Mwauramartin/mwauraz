//arrays
#include<stdio.h>
int main()
{
    int a[2][3][3]= {{{2,3,4}  {{4,5,6}
                  {6,7,8}},      {8,9,7},
                  {2,4,5}},    {9,6,5}};
    int i,r,c;
    for(i=0; i<2; i++)
    {
        for(r=0; r<3; r++)
        {
            for(c=0; c<3; c++)
            {
                printf("%d ",a[i][r][c]);
            }
        }
    }
    return 0;
