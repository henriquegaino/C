#include<stdio.h>
#include<stdlib.h>


int main ()
{
int soma,i,j;

for (i=1;i<2000;i++)
  {
    soma=0;
    for (j=1;j<i;j++) {
      if (i%j==0)
      soma=soma+j;
    }
  if (soma==i)
  printf(" %d ",i);
  }
return 0;
}
