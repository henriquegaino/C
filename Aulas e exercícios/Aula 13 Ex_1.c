#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main()
{
    float x=-1,y=2,erro=0.001,dx=10,dy=10,xn=0,yn=0;
    int i=0,Nmax=1000;

    while(abs(dx) > erro  && abs(dy) > erro)
    {
        xn = -pow((0.5*(y+1)),0.5);
        yn = pow((0.5*(pow(x,2)+4)),0.5);
        dx = xn - x;
        dy = yn - y;
        x = xn;
        y = yn;
        i = i + 1;
        printf("X: %.2f  Y: %.2f\n",x,y);
        if(i > Nmax)
        {
            printf("X: %.2f  Y: %.2f\n ",x,y);
            exit(1);
        }
    }
}
