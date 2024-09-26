#include<stdio.h>
#include<math.h>
main()
{
    int qtd,i;

    printf("Digite a qtd de polinomios: ");
    scanf("%d",&qtd);
    float coef[qtd],g[qtd],h=0.001,Fx=0,x;

    for(i=0;i<qtd;i++)
    {
        printf("Digite o valor do coeficite do %d°x: ",i+1);
        scanf("%f",&coef[i]);
        printf("Digite o valor do grau do %d°x: ",i+1);
        scanf("%f",&g[i]);
        printf("Digite o valor de x: ",i+1);
        scanf("%f",&x);
    }

    for(i=0;i<qtd;i++)
    {
        printf("(%.2fx)^(%.2f)",coef[i],g[i]);
        if(i!=qtd-1)
            printf(" + ");
    }

    for(i=0;i<qtd;i++)
    {
        Fx= Fx + ((coef[i]*pow((x+h),g[i]))/h) - coef[i]*pow(x,g[i])/h;

    }
    printf("\n%.2f",Fx);
}
