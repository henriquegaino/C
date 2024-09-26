#include<stdio.h>
#include<string.h>

main()

{
    char s1[250],s2[250];
    int qtd;

    printf("Digite um texto:");
    scanf("%s",s1);

    printf("Digite outro texto:");
    scanf("%s",s2);

    qtd=strcmp(s1,s2);

    printf("%d",qtd);
}
