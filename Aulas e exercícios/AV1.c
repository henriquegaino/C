//Henrique Morais Gaino 2019.1.25.014
#include <stdio.h>
int main()
{
    int num, i, primo=0;

    printf(" Digite um numero inteiro: ", num);
    scanf("%d", &num);

    if(num > 0)
    {
        printf("\n O numero eh positivo\n", num);
    }
    else
    {
        printf("\n O numero eh negativo\n", num);
        num = num * -1;
    }
    if(num == 0)
    {
        printf(" O numero eh igual a zero\n");
    }
    if(num % 2 == 0)
    {
        printf(" O numero eh par\n", num);
    }
    else
    {
        printf(" O numero eh impar\n", num);
    }
    for(i = 1; i <= num ; i++)
    {
        if(num % i == 0)
        {
            primo++;
        }
    }
    if(primo == 2 && num != 1)
    {
        printf(" O numero eh primo\n", num);
    }
    else
    {
        printf(" O numero nao eh primo\n", num);
    }

    return 0;
}
