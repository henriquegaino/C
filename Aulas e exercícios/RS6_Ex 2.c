#include<stdio.h>
#include<math.h>

float imc (float massa,float altura)
{
    float r;
    r=massa/pow(altura,2);
    return r;
}

float classificacao_imc(float n)
{
    if(n<16)
        printf("\nMagreza grave!");
    if(n>=16 && n<17)
        printf("\nMagreza moderada!");
    if(n>=17 && n<18)
        printf("\nMagreza leve!");
    if(n>=18 && n<25)
        printf("\nSaudavel!");
    if(n>=25 && n<30)
        printf("\nSobrepeso!");
    if(n>=30 && n<35)
        printf("\nObesidade I!");
    if(n>=35 && n<40)
        printf("\nObesidade II!");
    if(n>=40)
        printf("\nObesidade III!");
}

int main()

{
    float m,a,y;

    printf("Digite a massa e a altura\n");
    scanf("%f %f",&m,&a);
    y=imc(m,a);
    printf("%.2f",y);
    classificacao_imc(y);
}

