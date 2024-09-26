#include<stdio.h>

main()

{
    int vet1[10],vet2[10],i,soma=0;

    for(i=0;i<10;i++)
    {
        printf("Digite um numero(Vetor 1):");
        scanf("%d",&vet1[i]);
        printf("Digite um numero(vetor 2):");
        scanf("%d",&vet2[i]);

        soma=soma+(vet1[i]*vet2[i]);
    }

    printf("Produto escalar: %d",soma);

}

