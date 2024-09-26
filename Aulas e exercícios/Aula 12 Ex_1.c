#include<stdio.h>
#include<math.h>
#define u 8.53

float f(float x, float y)
{
    return u*(x-0.33*pow(x,3)-y);
}

float g(float x)
{
    return (1/u)*x;
}

main()
{
    int N=100, j;
    double x=1,y=1,t=0,h=0.1,X=0;

    printf("%.2lf %.2lf %.2lf\n",t,x,y);

    for(j=0;j<N;j++)
    {
        X=x;
        x = x + h*f(x,y);
        y = y + h*g(X);
        t = t + h;

        printf("%.2lf %.2lf %.2lf\n",t,x,y);
    }

    printf("\n\nDONE!");
}
