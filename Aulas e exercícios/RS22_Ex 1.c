#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;

    printf("Quantidade de pontos: ");
    scanf("%d",&n);
    float x[n],y[n],xk,yk=0;

    for(i=0;i<n;i++)
    {
        printf("x[%d]: ",i+1);
        scanf("%f",&x[i]);
        printf("y[%d]: ",i+1);
        scanf("%f",&x[i]);
    }

    printf("\nDigite o valor de x a ser interpolado: ");
    scanf("%f",&xk);

    if(xk<x[0] || xk>x[n-1])
    {
         printf("O valor de x e invalido!");
         exit(0);
    }
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(xk > x[i] && xk <= x[i+1])
            {
                yk = y[i]+((xk-x[i])*((y[i+1]-y[i])/(x[i+1]-x[i])));
            }
        }
    }

    printf("O valor de y inetrpolado em x(%.2f): %.2f",xk,yk);


}
