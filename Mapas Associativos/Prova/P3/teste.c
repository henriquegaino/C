#include<stdio.h>
#include<math.h>

int oasis(int x)
{
    int i,soma=0;
    if(x==0)
        return 6;
    else if(x==1)
        return 3;
    else if(x==2)
        return 4;
    else if(x>2)
    {
        for(i=1;i<(x-2);i++)
        {
            soma=soma+pow(x,i-1)*oasis(i);
        }
        return soma;
    }
}

int main()
{
    printf("%d",oasis(4));
    return 0;
}
