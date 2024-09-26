#include <stdio.h>

int main() {
  int n,       /* numero a ser verificado             */
      soma,    /* soma dos valores dos divisores de n */
      divisor; /* candidato a divisor de n            */

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);

  /* inicializacoes */
  soma = 0;

  for (divisor = 1; divisor < n; divisor++){
    if (n % divisor == 0)
      soma = soma + divisor;
  }

  if (n == soma)
    printf("O numero %d e' perfeito\n", n);
  else
    printf("O numero %d nao e' perfeito\n", n);

  return 0;
}

