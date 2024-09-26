#include <stdio.h>

int main()
{

  int i,j,n; /// declaração de variáveis -> i,j: contadores -> n: tamanho do vetor

  printf("Digite o tamanho do vetor: ");
  scanf("%d",&n); /// lê o tamanho do vetor

  float x[n],y[n],X,Y=0,coefs[n],coef; ///cria as variáveis para armanezar os pontos x,y, cria as variaveis para ler o valor de x interpolado

  for(i=0;i<n;i++)
  {
      printf("x[%d]: ",i);
      scanf("%f",&x[i]); ///le os pontos de x
      printf("y[%d]: ",i);
      scanf("%f",&y[i]); ///le os pontos de y
  }

  printf("Valor de X a ser interpolado: ");
  scanf("%f",&X); ///le o valor de x para o calculo de y interpolado

  for(i=0;i<n;i++)
  {
        coef=1; /// como envolve multiplicação, o valor de coef neutro tem que ser 1

        for(j=0;j<n;j++)
        {
            if(i != j)
                coef= (coef*(X-x[j]))/(x[i]-x[j]); /// calcula o coeficientes de cada item do polinomio
        }
        coefs[i]=coef;
  }

  for(i=0;i<n;i++)
  {
      Y = Y + ((coefs[i])*(y[i])); /// calcula o y interpolado
  }

  printf("O valor de Y interpolado em X(%.2f): %.2f",X,Y); ///imprime o valor de x e y interpolado.

  return 0;
}

