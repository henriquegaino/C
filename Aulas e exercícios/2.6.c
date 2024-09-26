#include <stdio.h>
int main()
{

    int num, i, j, resto = 0, soma = 0, primo;

    printf(" Digite um numero inteiro maior que 2: ");
    scanf("%d", &num);
    printf("\n Numeros primos no intervalo [2,%d]: ", num);
    for (i = 2; i <= num; i++)
    {
        if (i == 0 || i == 1)
        {
            primo = 0;
        }
        else
        {
            primo = 1; //considero inicialmente que o número é primo
            for(j = 2; j < i; j++)   //tento provar que ele não é primo
            {
                if (i % j == 0)
                {
                    primo = 0; //consigo provar que ele não é primo
                }
            }
        }

        if (primo == 1)
        {
            printf("%d ", i);
            soma+=i;
        }
    }
    printf("\n\n Soma dos primos no intervalo [2,%d]: %d\n",num, soma);

    return 0;
}

