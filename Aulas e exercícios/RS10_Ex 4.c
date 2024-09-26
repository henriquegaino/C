#include<stdio.h>
#include<string.h>

int main()

{
    FILE *aluno,*a1,*a2,*d1,*d2;
    aluno = fopen("ict17.txt","r");
    a1 = fopen("alunos_ICT17_turma_A1.txt","w");
    a2 = fopen("alunos_ICT17_turma_A2.txt","w");
    d1 = fopen("alunos_ICT17_turma_D1.txt","w");
    d2 = fopen("alunos_ICT17_turma_D2.txt","w");

    int i,j,qtd;
    char alunos[153][50],aux;

    for(i=0;i<153;i++)
    {
        fscanf(aluno,"%[^\n]\n",alunos[i]);
    }
    for(i=0;i<153;i++)
    {
        qtd=strlen(alunos[i]);
        if(alunos[i][0]=='A'&&alunos[i][1]=='1')
        {
            for(j=3;j<qtd;j++)
            {
                fprintf(a1,"%c",alunos[i][j]);
            }
            fprintf(a1,"\n");
        }

        if(alunos[i][0]=='A'&&alunos[i][1]=='2')
        {
            for(j=3;j<qtd;j++)
            {
                fprintf(a2,"%c",alunos[i][j]);
            }
            fprintf(a2,"\n");
        }

        if(alunos[i][0]=='D'&&alunos[i][1]=='1')
        {
            for(j=3;j<qtd;j++)
            {
                fprintf(d1,"%c",alunos[i][j]);
            }
            fprintf(d1,"\n");
        }

        if(alunos[i][0]=='D'&&alunos[i][1]=='2')
        {
            for(j=3;j<qtd;j++)
            {
                fprintf(d2,"%c",alunos[i][j]);
            }
            fprintf(d2,"\n");
        }
    }
    fclose(aluno);
    return 0;
}


