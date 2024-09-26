#include<stdio.h>

int main()

{
    float mat[3][3],soma=0.0;
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);
            soma=soma+mat[i][j];
        }
    }
    printf("Somatorio: %.2f",soma);
}
