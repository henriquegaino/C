#include<stdio.h>

main()

{
    int x,y;

    printf("Digite o valor de x:");
    scanf("%d",&x);
    printf("Digite o valor de y:");
    scanf("%d",&y);
    printf("Endereco de x: %d\tValor de x:\n",&x,x);
    printf("Endereco de y: %d\tValor de y:\n",&y,y);

    while(x!=&x && y!=&y)
    {
        printf("Digite o valor de x:");
        scanf("%d",&x);
        printf("Digite o valor de y:");
        scanf("%d",&y);
        printf("Endereco de x: %d\tValor de x: %d\n",&x,x);
        printf("Endereco de y: %d\tValor de y: %d\n",&y,y);
    }
}
