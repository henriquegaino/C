#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *a1;
    FILE *arquivo;

    arquivo  = fopen("cadastro.txt","r");
    a1 = fopen("cadastro_novo.txt","w");

    int i;
    char nome[50],dados[50][100];

    printf("Digite o nome da pessoa: ");
    scanf("%s",nome);

    for(i=0;i<50;i++)
    {
        if(fgets(dados[i], sizeof(dados),arquivo) != NULL)
        {
            if(strstr(dados[i],nome)== NULL)
            fprintf(a1,"%s",dados[i]);
        }
        else
        {
            fclose(a1);
            fclose(arquivo);
            rename("cadastro_novo.txt","cadastro.txt");
            remove("cadastro_novo.txt");
            exit(0);
        }
    }
}
