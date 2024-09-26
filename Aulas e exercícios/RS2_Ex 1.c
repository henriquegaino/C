#include<stdio.h>

main()

{
    int i,q;
    float n;

    printf("Numero:");
    scanf("%f",&n);

    q=(int)n;

    if(n>=1)
    {
        if(n/q==1)
        {
            for(i=1;i<=n;i++)
            {
            printf("%d\n",i);
            }
        }
        else
            printf("Numero decimal nao e valido");
    }
    if(n==0)
        printf("Numero zero nao e valido");
    if(n < 0)
        printf("Numero negativo nao e valido");
}
