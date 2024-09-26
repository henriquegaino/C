#include <stdio.h>

int main()
{

  int i,j,n;

  float x[50],y[50],xi,yi=0,coefs[50],coef;

  printf("Digite o tamanho do vetor: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
      printf("x%d: ",i);
      scanf("%f",&x[i]);
      printf("y%d: ",i);
      scanf("%f",&y[i]);
  }

  printf("Valor de X a ser interpolado: ");
  scanf("%f",&xi);

  for(i=0;i<n;i++)
  {
        coef=1;

        for(j=0;j<n;j++)
        {
            if(i != j)
                coef= (coef*(xi-x[j]))/(x[i]-x[j]);
        }
        coefs[i]=coef;
  }

  for(i=0;i<n;i++)
  {
      yi = yi + ((coefs[i])*(y[i]));
  }

  printf("O valor de Y interpolado em X(%.2f): %.2f",xi,yi);

  return 0;
}
