#include<stdio.h>

int main()
{
    FILE *arquivo;
    arquivo= fopen("q6.txt","w");

    int i=1,n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    while(i<=10)
    {
        fprintf(arquivo,"%d ",n);
        n=n+1;
        i++;
    }

    fclose(arquivo);
}
