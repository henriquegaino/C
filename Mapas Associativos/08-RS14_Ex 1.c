#include<stdio.h>

    typedef struct
    {
        int ano;
        int semestre;
        int curso;
        int aluno;
    }
    matricula;

int main()

{
    matricula m;

    printf("Verificacao de matricula do discente de graduacao da UNIFAL - Campus Pocos de Caldas! ");
    do
    {
        printf("\nDigite o ano de matricula:");
        scanf("%d",&m.ano);
    }
    while(m.ano<1914 || m.ano>2017);

    do
    {
        printf("Digite o semestre de ingresso na faculdade: ");
        scanf("%d",&m.semestre);
    }
    while(m.semestre!=1 && m.semestre!=2);

    do
    {
        printf("Digite o numero do curso:");
        scanf("%d",&m.curso);
    }
    while(m.curso!=25 && m.curso!=34 && m.curso!=36 && m.curso!=35);

    do
    {
        printf("Digite o numero do aluno: ");
        scanf("%d",&m.aluno);
    }
    while(m.aluno<=0);

    printf("Numero de matricula: %d.%d.%d.%d",m.ano,m.semestre,m.curso,m.aluno);
}
