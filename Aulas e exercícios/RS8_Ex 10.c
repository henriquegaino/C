#include<stdio.h>
#include<string.h>

main()

{
    int i,qtd,soma=0,j;
    char s1[250],s2[250],aux;

    printf("Digite um texto: ");
    scanf("%s",s1);

    qtd=strlen(s1);

    j=qtd-1;

    for(i=0;i<qtd;i++)
    {
        while(j>=0)
        {
            s2[j]=s1[i];
            j=j-1;
            break;
        }
    }

    for(i=0;i<qtd;i++)
    {
        if(s1[i]==s2[i])
            soma=soma+1;
    }

    if(qtd==soma)
        printf("E um palindromo!");
    else
        printf("Nao e um palindromo!");
}
