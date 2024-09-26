#include<stdio.h>

main()
{
    int i,j,n,q=0;

    printf("Digite a ordem da matriz: ");
    scanf("%d",&n);

    int l=0,c=n-1;
    int mat[n][n],dp[n],ds[n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Elemento[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);

            if(i==j)
                dp[i]=mat[i][j];
            if(i==l && j==c)
                ds[i]=mat[i][j];
        }
        l=l+1;
        c=c-1;
    }

    for(i=0;i<n;i++)
    {
        if(dp[i]==ds[i])
            q++;
    }

    if(q==n)
        printf("Diagonal principal igual a diagonal secundaria!");
    else
        printf("Diagonal principal diferente da diagonal secundaria!");
}
