#include<stdio.h>

main()

{
    float preco,total,a,b,c,d,e,f;

    printf("Preco do produto:");
    scanf("%f",&preco);

    printf("Moedas de 1 real:");
    scanf("%f",&a);
    a=a*1;
    printf("Moedas de 50 centavos:");
    scanf("%f",&b);
    b=b*0.5;
    printf("Moedas de 25 centavos:");
    scanf("%f", &c);
    c=c*0.25;
    printf("Moedas de 10 centavos:");
    scanf("%f",&d);
    d=d*0.1;
    printf("Moedas de 5 centavos:");
    scanf("%f",&e);
    e=e*0.05;
    printf("Moedas de 1 centavo:");
    f=f*0.01;
    scanf("%f",&f);
    total=a+b+c+d+e+f;
    printf("Total:%.2f",total);

    if(preco<=total)
    printf("\nE possivel comprar o produto!");
    else
    printf("Não é possivel comprar o produto!");

}
