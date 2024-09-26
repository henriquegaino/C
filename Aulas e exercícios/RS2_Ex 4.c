#include<stdio.h>

main()

{
    int n1,n2,sd1=0,sd2=0,i,j;

    printf("Numero 1:");
    scanf("%d",&n1);
    printf("Numero 2:");
    scanf("%d",&n2);

    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
            sd1=sd1+i;
    }
    printf("%d\n",sd1);

    for(j=1;j<n2;j++)
    {
        if(n2%j==0)
            sd2=sd2+j;
    }
    printf("%d\n",sd2);

    if(n1==sd2 && n2==sd1)
        printf("Numeros amigos!");
    else
        printf("Numeros nao amigos");
}
