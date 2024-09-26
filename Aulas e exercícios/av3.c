#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int g(int x);
    int num, resultado;
    printf("Digite um número inteiro: ");
    scanf("%i", &num);
    resultado = g(num);

    printf("\n%i\n", resultado);
}
int g(int x)
{
    int resultado;

    if(x == 0)
    {
        resultado = 2;
    }
    if(x == 1 || x == 2 )
    {
        resultado = x * x;
    }
    if(x == 3 || x == 4 || x == 5 )
    {
        resultado = x * g(x - 1);
    }
    else
    {
        resultado = g(x-3) + g(x - 2);
    }
    return resultado;
}
