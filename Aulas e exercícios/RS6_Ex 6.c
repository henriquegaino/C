#include<stdio.h>

void swap(float *n1,float *n2)
{
   float aux;

   aux= *n1;
   *n1= *n2;
   *n2= aux;

}

main()

{
    float a,b;

    printf("Numero 1:");
    scanf("%f",&a);
    printf("Numero 2:");
    scanf("%f",&b);

    swap(&a,&b);

    printf("Numero 1: %.2f\nNumero 2: %.2f",a,b);
}
