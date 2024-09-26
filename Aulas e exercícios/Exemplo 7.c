#include<stdio.h>

void sequencia(int n1, int n2)
{
    int i;

    for(i=n1;i<=n2;i++)
    {
        printf("%d ",i);
    }
}

int main()
{
    int a,b;

    printf("Digite A: ");
    scanf("%d",&a);

    printf("Digite B: ");
    scanf("%d",&b);

    sequencia(a,b);
}
