#include <stdio.h>
#include <locale.h>

int n = 0;
void valor();
int main()
{
    printf("Digite um valor para saber o dobro: ");
    scanf("%i", &n);
    setlocale(LC_ALL,"");
valor();
    return 0;
}

void valor()
{
    int dobro = n * 2;
    printf("\nO dobro de %i é %i\n",n,dobro);
    return 0;
}
