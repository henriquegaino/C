#include<stdio.h>
#include<math.h>

float imc (float massa,float altura)
{
    float r;
    r=massa/pow(altura,2);
    return r;
}

int main()

{
    float m,a;

    printf("Digite a massa e a altura\n");
    scanf("%f %f",&m,&a);
    printf("%.2f",imc(m,a));
}
