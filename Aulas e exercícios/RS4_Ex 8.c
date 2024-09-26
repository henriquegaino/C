#include<stdio.h>

main()

{
    int i,j,n,aux=0,vet[3],valor;

    for(i=0;i<3;i++)
    {
        printf("Numero %d:",i+1);
        scanf("%d",&valor);
        vet[i]=valor;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(vet[j]>vet[j+1])
            {
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
            }
        }
    }
        for(i=0;i<3;i++)
        {
        printf("%d ",vet[i]);
        }
}


