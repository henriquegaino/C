#include<stdio.h>

main()

{
    int n,sd=0,i,j,sp=0;

    printf("Numero:");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j == 0)
            {
                sd =sd+j;
            }
            if(i==sd)
                sp=sp+sd;

        }
        sd=0;
    }
    printf("A soma dos numeros primos de 2 ate %d: %d",n,sp);
}
