#include <stdio.h>

int main()
{
    char frase[250], palavra[50];
    int i, x = 0, aparece = 0;

    printf( "\n Digite uma frase: ");
    scanf( "%[^\n]", &frase);
    printf( "\n Digite uma palavra para pesquisar: ");
    scanf( "%s", &palavra);

    for(i = 0; frase[i] != '\0'; i++)
        if (palavra[x] == frase[i])
        {
            x = x + 1;
            if (palavra[x] == '\0')
            {
                aparece = aparece + 1;
                x = 0;
            }
        }
        else
        {
            x = 0;
        }
    if (aparece == 1)
    {
        printf("\n A palavra * %s * aparece uma vez na frase.\n",palavra);
    }
    else
    {
        printf(" \n A palavra * %s * aparece %d vezes na frase.\n",palavra, aparece);
    }
    return 0;
}
