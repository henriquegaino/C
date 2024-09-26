#include<stdio.h>

void removelc(int m,int n,int l,int c,int mat[m][n])
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=l || j!=c)
                printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,m,n,l,c;

    printf("Numero de linhas: ");
    scanf("%d",&m);
    printf("Numero de colunas: ");
    scanf("%d",&n);

    int mat[m][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Elemento[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("Linha a ser retirada: ");
    scanf("%d",&l);
    printf("Coluna a ser retirada: ");
    scanf("%d",&c);

    removelc(m,n,l,c,mat);
}
