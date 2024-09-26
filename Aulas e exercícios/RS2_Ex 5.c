#include<stdio.h>

main()

{
    int n,i,si=0,sp=0;

    printf("Numero:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            si=si+i;
        else
            sp=sp+i;
    }
    printf("A soma dos numeros impares de 1 ate %d: %d",n,si);
    printf("\nA soma dos numeros pares de 1 ate %d: %d",n,sp);
}
