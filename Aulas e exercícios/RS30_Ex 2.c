#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,ms[60],aux;

    printf("Os numeros sorteados da mega-sena foram:\n");

    srand(4);

    for(i=0;i<6;i++)
    {
        ms[i]= rand() %60 +1;
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ms[j]>ms[j+1])
            {
                aux=ms[j];
                ms[j]=ms[j+1];
                ms[j+1]=ms[j];
            }
        }
    }

    for(i=0;i<5;i++)
    {
        if(ms[i]==ms[i+1]);
            ms[i]= rand() %60 +1;
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ms[j]>ms[j+1])
            {
                aux=ms[j];
                ms[j]=ms[j+1];
                ms[j+1]=ms[j];
            }
        }
    }

    for(i=0;i<6;i++)
    {
        printf("%d ",ms[i]);
    }
    return 0;
}
