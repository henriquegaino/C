#include<stdio.h>
#include<math.h>

float f(float x, float y, float t)
{
    return x*cos(t)-y*sin(t);
}

float g(float x, float t)
{
    return x*exp(-t);
}

main()
{
    int N=100, j,n;
    float x=-1,y=1,t=0,H=0.250,X=0,Y=0;
    FILE *arquivo;

    n=1;

    arquivo=fopen("q5.txt","w");

    fprintf(arquivo,"%d %.3f %.3f %.3f\n",n,t,x,y);

    for(j=0;j<N;j++)
    {
        X=x;
        x = x + H*f(x,y,t);
        y = y + H*g(X,t);
        t = t + H;

         n++;

        fprintf(arquivo,"%d %.3f %.3f %.3f\n",n,t,x,y);
    }
    fclose(arquivo);
    printf("DONE!");
}
