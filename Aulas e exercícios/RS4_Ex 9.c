#include<stdio.h>

main()

{
    int n;
    char b[10];

    printf("Digite um numero:");
    scanf("%d",&n);

    itoa(n,b,2);

    printf("Binario: %s",b);
}
