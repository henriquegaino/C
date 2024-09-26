#include<stdio.h>

int main()

{
    float ma[3][3],mb[3][3],mc[3][3],soma=0.0;
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Matriz 1 posicao[%d][%d]: ",i,j);
            scanf("%f",&ma[i][j]);
            printf("Matriz 2 posicao[%d][%d]: ",i,j);
            scanf("%f",&mb[i][j]);
            mc[i][j]=ma[i][j]+mb[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%.2f ",mc[i][j]);
        }
        printf("\n");
    }
}
