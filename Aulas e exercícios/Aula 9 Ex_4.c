#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("cadastro.txt","r");

    double p,cpf,cep,v;
    int i,n;
    char nome[50][100];

    printf("Digite um CPF: ");
    scanf("%lf",&p);

    for(i=0;i<50;i++)
    {
        fscanf(arquivo,"%lf ",&cpf);
        fscanf(arquivo,"%s ",nome);
        fscanf(arquivo,"%lf\n",&cep);

        if(p==cpf)
        {
            printf("%s\n",nome);
            printf("%.0lf\n",cpf);
            printf("%.0lf\n\n",cep);
            exit(1);
        }
    }
    fclose(arquivo);
    return 0;
}

