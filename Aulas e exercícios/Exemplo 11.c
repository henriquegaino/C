#include<stdio.h>
#include"biblivet.h"
#define MAX 20

int main()
{
    int m,x,vet[MAX],i;

    printf("Tamanho do vetor: ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("Posicao[%d]: ",i);
        scanf("%d",&vet[i]);
    }
    m=maior(vet,x);
    printf("%d",m);
    return 0;
}
