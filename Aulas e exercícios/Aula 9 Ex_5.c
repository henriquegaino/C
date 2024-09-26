#include<stdio.h>

int main()
{
    FILE *a1;
    FILE *a2;

    a1=fopen("fornecedor.txt","r");
    a2=fopen("produto.txt","r");

    double cod_p,cod_f1,cod_f2,c;
    float preco;
    char nome_f[100],nome_p[100];
    int i;

    printf("Digite um codigo: ");
    scanf("%lf",&c);

    for(i=0;i<2;i++)
    {
        fscanf(a2,"%lf %s %f %lf\n",&cod_p,nome_p,&preco,&cod_f1);
        fscanf(a1,"%lf %s\n",&cod_f2,nome_f);
        if(cod_p==c)
        {
            printf("%s\n",nome_p);
            printf("%.2f\n",preco);
            printf("%s",nome_f);
        }
    }
    return 0;
}
