#include<stdio.h>

void classifica(int num)
{
    if(num >= 18)
        printf("Adulto!");
    else if(num >= 14 && num < 18)
        printf("Juvenil!");
    else if(num >= 9 && num < 14)
        printf("Infantil!");
    else if(num < 9)
        printf("Mirim!");
}

int main()

{
    int n;
    printf("Digite uma idade: ");
    scanf("%d",&n);
    classifica(n);
}
