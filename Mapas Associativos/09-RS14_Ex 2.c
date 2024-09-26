#include<stdio.h>

int main()

{
    FILE *dados;
    dados = fopen("meus dados.txt","w");
    char nome[50],mat[14],d[10];

    printf("Digite seu nome: ");
    scanf("%[^\n]",nome);
    fprintf(dados,"%s\n",nome);

    printf("Digite sua matricula: ");
    scanf("%s",mat);
    fprintf(dados,"%s\n",mat);

    printf("Digite seu data de nascimento: ");
    scanf("%s",d);
    fprintf(dados,"%s\n",d);

}
