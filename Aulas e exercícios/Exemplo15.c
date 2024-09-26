#include<stdio.h>
#include<math.h>

float f(float t, float x)
{
    return 1.1*x*x+sin(t);
}

main()
{
    int N, j;
    float x,t,h;
    FILE *arquivo;

    arquivo=fopen("dados.txt","w");

    printf("Escolha o passo de integracao: ");
    scanf("%f",&h);

    printf("Escolha o numero de pontos de integracao: ");
    scanf("%d",&N);

    printf("Informe o valor inicial de t: ");
    scanf("%f",&t);

    printf("Informe o valor inicial de x(x0): ");
    scanf("%f",&x);

    fprintf(arquivo,"%f %f\n",t,x);

    for(j=0;j<N;j++)
    {
        x = x + h*f(t,x);
        t = t + h;

        fprintf(arquivo,"%f %f\n",t,x);
    }
    fclose(arquivo);
    printf("DONE!");
}
