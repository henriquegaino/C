#include<stdio.h>
#include"biblivet.h"
#define MAX 20

int main()
{
    int qtd=0,x,vet[MAX],i;

    printf("Tamanho do vetor: ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("Posicao[%d]: ",i);
        scanf("%d",&vet[i]);
    }
    qtd=positivo(vet,x);
    printf("%d",qtd);
    return 0;
}
