#include<stdio.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("ordena.txt","r");

    int vet[10],i,aux,j;

    for(i=0;i<10;i++)
    {
        fscanf(arquivo,"%d",&vet[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(vet[j]>vet[j+1])
            {
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
            }
        }

    }

    for(i=0;i<10;i++)
    {
        printf("%d ",vet[i]);
    }
}

