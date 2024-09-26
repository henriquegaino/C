 #include<stdio.h>

main()

{
    int n, soma=0;

    printf("Digite um numero:");
    scanf("%d",&n);

    while(n > -100 && n < 100)
    {

        soma=soma+n;
        printf("Proximo numero:");
        scanf("%d",&n);
    }
    printf("Soma:%d",soma);
}
