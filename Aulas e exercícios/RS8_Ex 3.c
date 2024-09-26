#include<stdio.h>
#include<string.h>

main()

{
    char s[250];

    printf("Digite um texto:");
    scanf("%s",s);

    printf("Letra maiuscula: %s",strupr(s));
}
