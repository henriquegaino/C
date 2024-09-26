#include<stdio.h>

main()

{
    int vet[10],i,soma=0;

    for(i=0;i<10;i++)
    {
        printf("Digite um numero:");
        scanf("%d",&vet[i]);
        if(i%2==0)
            soma=soma+vet[i];
    }
    printf("Soma: %d",soma);
}
