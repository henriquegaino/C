#include<stdio.h>

int main()

{
    int vet[10]= {1,2,2,3,4,5,6,6,6,7},b,p=0,e=0,d=10,m=0;

    printf("Digite o valor a ser buscado no vetor:");
    scanf("%d",&b);

    while (e<=d)
    {
        m=(d+e)/2;
        if (vet[m] == b)
        {
            p=m;
            break;
        }
        if(vet[m] < b)
            e=m+1;
        else
            d=m-1;
    }
    printf("%d",p);
}
