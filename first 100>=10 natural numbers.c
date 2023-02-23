//first 100<=10 natural numbers in reverse
#include<stdio.h>
int main()
{
  int r=100;
  while (r>=10)
    {
      printf("%d ",r);
      r=r-1;
    }
  printf("\nloop body finished");
  return 0;
}
