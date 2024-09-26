#include<stdio.h>

int main()

{
    int mat[30][30],i,j,l,c;

    printf("Digite o numero de linhas e colunas da matriz:");
    scanf("%d %d",&l,&c);
    printf("\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",i+j);
        }
        printf("\n");
    }
}
