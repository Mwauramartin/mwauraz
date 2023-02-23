//first 100<=10 natural numbers in reverse
#include<stdio.h>
int main()
{
  int k=100;
  while (k>=10)
    {
      printf("%d\n",k);
      k=k-1;
    }
  printf("\nloop body finished");
  return 0;
}
