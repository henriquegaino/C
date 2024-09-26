#include<stdio.h>
#include<math.h>

int fat(int x)
{
   int contador,f=1;
   for(contador=x;contador>=1;contador--)
   {
       f=contador*f;
   }
   return f;
}

int expS(int numero)
{
    int i,q;
    float soma=1;
    for(i=1;i<=numero;i++)
    {
        q=pow(numero,i);
        soma = soma + q/fat(i);
    }
        return soma;
}

main()

{
    int n;
    float s;

    printf("Numero:");
    scanf("%d",&n);
    s=expS(n);
    printf("Exponencial: %.2f",s);
}
