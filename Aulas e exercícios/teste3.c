#include<stdio.h>


int main()
{
    int i,j,n,l,c;
    float det;

    printf("Ordem da matriz: ");
    scanf("%d",&n);

    float mat[n][n],mat2[n-1][n-1];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Posicao[%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);
        }
    }



    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==l && j==c)
            {
                mat2[i][j]=mat[i][j];
            }
            printf("%.2f ",mat2[i][j]);
        }
    }
}
