#ifndef BIBLIVET_H_INCLUDED
#define BIBLIVET_H_INCLUDED

#include<stdio.h>
#include<math.h>
#define MAX 20

int maior(int vetor[MAX],int n)
{
    int i,mais;

    for(i=0;i<n;i++)
    {
        if(i==0)
            mais=vetor[i];
        if(mais<vetor[i])
            mais=vetor[i];
    }
    return mais;
}

int menor(int vetor[MAX],int n)
{
    int i,menos;

    for(i=0;i<n;i++)
    {
        if(i==0)
            menos=vetor[i];
        if(menos>vetor[i])
            menos=vetor[i];
    }
    return menos;
}

int positivo(int vetor[MAX],int n)
{
    int i, qtd=0;

    for(i=0;i<n;i++)
    {
        if(vetor[i]>0)
            qtd=qtd+1;
    }
    return qtd;
}

int bubble_sort(int vetor[MAX],int n)
{
    int i,j,aux;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(vetor[j]>vetor[j+1])
            {
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",vetor[i]);
    }
}

#endif // BIBLIVET_H_INCLUDED
