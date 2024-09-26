#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int fat (int x);
    int num, resultado;
    printf("Digite um número inteiro: ");
    scanf("%i", &num);
    resultado = fibonacci (num);

    printf("\nO fibonacci de %i é %i\n", num, resultado);
}
int fibonacci (int x)
{
    int resultado;

    if(x == 0 || x == 1)
    {
        resultado = x;
    }
    else
    {
        resultado = fibonacci (x-1) + fibonacci (x-2);
    }
    return resultado;
}
