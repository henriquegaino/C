#include<stdio.h>

int main()

{
    float mat[3][3],maior=-18000.0;
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);
            if(maior<mat[i][j])
                maior=mat[i][j];
        }
    }
    printf("O maior elemento da matriz e: %.2f",maior);
}
