#include<stdio.h>

int main()
{
    int n,soma=0;

    printf("N: ");
    scanf("%d",&n);

    int v1[n],v2[n],i,j;

    for(i=0;i<n;i++)
    {
        printf("v1[%d]: ",i);
        scanf("%d",&v1[i]);

        printf("v2[%d]: ",i);
        scanf("%d",&v2[i]);
    }

    i=0;
    j=n-1;


    while(i<n)
    {
        printf("%d %d\n",v2[j],v1[i]);
        soma = soma + v2[j] - v1[i];
        i++;
        j--;
    }

    printf("Soma total: %d",soma);
}
