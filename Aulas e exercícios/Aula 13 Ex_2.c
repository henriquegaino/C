#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main()
{
    float x=3,y=-2,erro=0.001,dx=1,dy=1,xn,yn;
    int i=0,Nmax=1000;

    while(abs(dx) > erro  && abs(dy) > erro)
    {
        xn = pow((x*(4-x)),0.5);
        yn = pow((-1/(y+2)),-1);
        dx = xn - x;
        dy = yn - y;
        x = xn;
        y = yn;
        i = i+1;
        printf("X: %.2f  Y: %.2f\n",x,y);
        if(i > Nmax)
        {
            printf("X: %.2f  Y: %.2f\n ",x,y);
            exit(1);
        }
    }
}
