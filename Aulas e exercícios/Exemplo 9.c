#include<stdio.h>

int somatorio()
{
    int num,soma=0;
    do
    {
        printf("Digite um numero: ");
        scanf("%d",&num);
        soma=soma+num;
    }
    while(num!=0);
    return soma;
}

int main()
{
    int soma=0;
    soma=somatorio();
    printf("Somatorio: %d",soma);
    return 0;
}
