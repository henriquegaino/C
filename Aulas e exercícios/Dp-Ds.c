#include<stdio.h>

main()
{
    int i,j,n;

    printf("Digite a ordem da matriz: ");
    scanf("%d",&n);

    int l=0,c=n-1;
    float mat[n][n],dp=0,ds=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Elemento[%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);

            if(i==j)
                dp=dp+mat[i][j];
            if(i==l && j==c)
                ds=ds+mat[i][j];
        }
        l=l+1;
        c=c-1;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%.2f ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal principal: %.2f\nDiagonal secundaria: %.2f\nTotal: %.2f",dp,ds,dp-ds);
}
