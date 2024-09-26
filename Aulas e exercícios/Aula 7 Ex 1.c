#include<stdio.h>

int imprime(int num)
{
    int i;
    for(i=0;i<=num;i++)
    {
        printf("%d ",i);
    }
}

int main()

{
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);
    imprime(n);
}
