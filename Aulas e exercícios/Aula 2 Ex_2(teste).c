#include<stdio.h>
#include<stdlib.h>

int main()

{
    float n1, n2, n3, media;
    char op;

    do
    {
        printf("Nota 1:");
        scanf("%f",&n1);
        printf("Nota 2:");
        scanf("%f",&n2);
        printf("Nota 3:");
        scanf("%f",&n3);

        media= (n1+n2+n3)/3 ;
        do
        {
            printf("Voce deseja sair do programa(s/n)?:");
            scanf("%c", &op);
        }
        while(op=='s' || op=='n');
    }
    while(op=='n');
}
