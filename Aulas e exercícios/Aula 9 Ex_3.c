#include<stdio.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("cadastro.txt","w");

    double cpf[50],cep[50];
    int i,n;
    char nome[50][100];

    printf("Digite um numero: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Nome: ");
        scanf(" %[^\n]",nome[i]);

        printf("CPF: ");
        scanf("%lf",&cpf[i]);

        printf("CEP: ");
        scanf("%lf",&cep[i]);

        fprintf(arquivo,"%.0lf ",cpf[i]);
        fprintf(arquivo,"%s ",nome[i]);
        fprintf(arquivo,"%.0lf\n",cep[i]);
    }
    fclose(arquivo);
}


