#include<stdio.h>
#include<math.h>
#define a 0.2
#define b 0.2
#define c 5.7

float f(float y, float z)
{
    return -y-z;
}

float g(float x, float y)
{
    return x+a*y;
}

float h(float x, float z)
{
    return b+z*(x-c);
}

main()
{
    int N=1000, j;
    double x=3,y=5,z=1,t=0,H=0.01,X=0,Y=0,Z=0;
    FILE *arquivo;

    arquivo=fopen("12_2.txt","w");

    fprintf(arquivo,"%.2lf %.2lf %.2lf %.2lf\n",t,x,y,z);

    for(j=0;j<N;j++)
    {
        X=x;
        x = x + H*f(y,z);
        y = y + H*g(X,y);
        z = z + H*h(X,z);
        t = t + H;

        fprintf(arquivo,"%.2lf %.2lf %.2lf %.2lf\n",t,x,y,z);
    }
    fclose(arquivo);
    printf("DONE!");
}

