#include<stdio.h>

main()

{
    int vet[10],i,soma=0;

    for(i=0;i<10;i++)
    {
        printf("Digite um numero:");
        scanf("%d",&vet[i]);
    }

    for(i=0;i<10;i++)
    {
        if(vet[i]==2)
            printf("O numero 2 esta na posicao: %d\n",i);
    }
}
