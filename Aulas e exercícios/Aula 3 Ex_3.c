#include<stdio.h>

main()

{
    float base, altura;
    do
    {
        printf("Base:");
        scanf("%f",&base);
    }
    while(base<=0);

    do
    {
        printf("Altura:");
        scanf("%f",&altura);
    }
    while(altura<=0);

    printf("Area total: %.2f",base*altura/2);
}
