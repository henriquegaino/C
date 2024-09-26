#include<stdio.h>

int verifica_amizade(x1,x2)
{
    int sd1=0,sd2=0,i,j;

    for(i=1;i<x1;i++)
    {
        if(x1%i==0)
            sd1=sd1+i;
    }

    for(j=1;j<x2;j++)
    {
        if(x2%j==0)
            sd2=sd2+j;
    }

    if(x1>=0 && x2>=0)
       {
        if(x1==sd2 && x2==sd1)
            printf("1");
        else
            printf("-1");
       }
    else
        printf("0");
}

main()

{
    int n1,n2;

    printf("Numero 1:");
    scanf("%d",&n1);
    printf("Numero 2:");
    scanf("%d",&n2);

    verifica_amizade(n1,n2);
}
