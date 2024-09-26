#include<stdio.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("ordena.txt","w");

    int vet[10],i;

    for(i=0;i<10;i++)
    {
        printf("Posicao[%d]: ",i);
        scanf("%d",&vet[i]);
        fprintf(arquivo,"%d ",vet[i]);
    }
}
