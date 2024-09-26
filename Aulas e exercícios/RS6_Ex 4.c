#include<stdio.h>
#include<math.h>

float area_heron(float lado1, float lado2,float lado3)
{
    if(lado1>0 && lado2>0 && lado3>0)
    {
        float s=(lado1+lado2+lado3)/2,area;
        area= pow((s*(s-lado1)*(s-lado2)*(s-lado3)),0.5);
        printf("Area: %.2f",area);
    }
    else
        printf("-1");
    }


main()

{
    float l1,l2,l3;

    printf("Lado 1:");
    scanf("%f",&l1);
    printf("Lado 2:");
    scanf("%f",&l2);
    printf("Lado 3:");
    scanf("%f",&l3);

    area_heron(l1,l2,l3);
}
