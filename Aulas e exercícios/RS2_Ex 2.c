#include<stdio.h>

main()

{
    int sd=0,d,n;

    printf("Numero:");
    scanf("%d",&n);

    for(d=1;d<n;d++)
    {
        if(n%d == 0)
        {
            sd = sd+d;
        }
    }
    if(n==sd)
        printf("Numero perfeito!");
    else
        printf("numero nao perfeito!");
}
