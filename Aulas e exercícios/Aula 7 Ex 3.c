#include<stdio.h>

float media(float num1,float num2,float num3)
{
    float med;
    med=(num1+num2+num3)/3;
    return med;
}

int main()

{
    float n1,n2,n3,m;

    printf("Digite tres numeros:");
    scanf("%f %f %f",&n1,&n2,&n3);
    m=media(n1,n2,n3);

    printf("Media: %.2f",m);
}
