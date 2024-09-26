#include<stdio.h>

int somatorio(int n1, int n2)
{
    int i,soma=0;

    for(i=n1;i<=n2;i++)
    {
        soma=soma+i;
    }
    return soma;
}

int main()
{
    int a,b;

    printf("Digite A: ");
    scanf("%d",&a);

    printf("Digite B: ");
    scanf("%d",&b);

    printf("Somatorio: %d",somatorio(a,b));
}
