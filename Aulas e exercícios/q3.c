#include<stdio.h>

int main()

{
    int vet[10],n=10,i,j,aux,menor;

    for(i=0;i<n;i++)
    {
        printf("Elemento[%d]: ",i);
        scanf("%d",&vet[i]);
    }

    for(i=0;i<n;i++)
    {
        menor=i;
        for(j=i+1;j<n;j++)
        {
            if(vet[j]<vet[menor])
                menor=j;
        }

        if(menor!=i)
        {
            aux=vet[menor];
            vet[menor]=vet[i];
            vet[i]=aux;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",vet[i]);
    }
}

