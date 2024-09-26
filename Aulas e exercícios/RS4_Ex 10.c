#include<stdio.h>
#include<math.h>

main()

{
    float a,b,c,area,p;

    printf("Lado 1:");
    scanf("%f",&a);
    printf("Lado 2:");
    scanf("%f",&b);
    printf("Lado 3:");
    scanf("%f",&c);

    area=a*b*c/2;
    p=a+b+c;

    if(abs(b-c)<a<b+c && abs(a-c)<b<a+b && abs(a-b)<c<a+c)
    {
        printf("\nO triangulo existe!\n\n");
        if(a==b && a==c && b==c)
        {
            printf("Triangulo equilatero!\n");
            printf("Acutangulo!\n");
            printf("Os tres angulos possuem 60 graus!\n");
            printf("Area: %.2f\n",area);
            printf("Perimetro: %.2f\n",p);
        }

        else if(a==b || a==c || b==c)
            printf("Triangulo isosceles!");
        else
            printf("Triangulo escaleno!");
    }
}
