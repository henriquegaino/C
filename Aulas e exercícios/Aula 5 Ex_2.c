#include<stdio.h>

int main()

{
    int vet[10]={2,3,5,6,8,2,3,2,1,9},n=10,i,j,aux,menor;

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
