#include<stdio.h>

int floyd(int x)
{
    if(x<4)
        return x;
    if(x==4)
        return 4 + floyd (x-1);
    return floyd(x-2)+floyd(x-1);
}

int rush(int k, int s)
{
    if(k<=s)
        return k/s;
    return k*s;
}

int main()
{
    int i,j;

    printf("floyd(%d) = %d\n",8,floyd(8));

    for(i=4;i<9;i++)
    {
        for(j=3;j<=8;j++)
        {
            printf("rush(%d %d) = %d\n",i,j,rush(i,j));
        }
    }
}
