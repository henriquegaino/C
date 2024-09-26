#include<stdio.h>
#include<string.h>

main()

{
    int i,qtd;
    char s[250];
    printf("Digite qualquer coisa: ");
    scanf("%[^\n]",s);

    qtd=strlen(s);

    for(i=qtd-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
