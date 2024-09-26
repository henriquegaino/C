#include<stdio.h>
#include<string.h>

main()

{
    char s[250], op;
    int qtd=0,i,q;

    printf("Digite um texto: ");
    scanf("%[^\n]",s);
    printf("String digitada: %s\n",s);

    q=strlen(s);

    printf("Digite uma letra:");
    scanf(" %c",&op);

    for(i=0;i<q;i++)
    {
        if(s[i]==op)
            qtd=qtd+1;
    }
    printf("Quantidade: %d",qtd);
}
