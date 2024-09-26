#include<stdio.h>

int quadradro(int n)
{
    int q;
    q=n*n;
    return q;
}

int main()
{
    int n,q;

    printf("Numero: ");
    scanf("%d",&n);
    q=quadradro(n);
    printf("Quadradro: %d",q);

}
