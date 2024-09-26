#include<stdio.h>
#include<string.h>

main()
{
    char string[300];
    int i, maiuscula=0,minuscula=0;

    printf("Frase: ");
    scanf("%[^\n]",&string);

    for(i=0;i=strlen(string);i++)
    {
        if(string[i]>=97 && string[i]<=122)
            minuscula=minuscula+1;
        else if(string[i]>=65 && string[i]<=92)
            maiuscula=maiuscula+1;
    }

    printf("Letras minusculas: %d\n",minuscula);
    printf("Letras maiusculas: %d",maiuscula);
}
