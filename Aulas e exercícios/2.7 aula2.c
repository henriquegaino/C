#include<stdio.h>
int main()
{
    int num = 1  ;
    float x = 0.0, y = 0.0, v, *p1, *p2;

    p1 = &x;
    p2 = &y;

    printf("\n End x: %d   ...   Val x: %.2f", &x, x);
    printf("\n End y: %d   ...   Val y: %.2f\n", &y, y);

    while(num == 1 || num == 2)
    {
        printf("\n Digite 1 -> End x \n Digite 2 -> End y \n Digite qualquer outro numero -> Finalizar o programa: ");
        scanf("%d", &num);

        if(num == 1)
        {
            printf("\n Digite um valor para atribuir ao endereco escolhido: ");
            scanf("%f", &v);

            *p1 = *p1 + v;

            printf("\n End x: %d   ...   Val x: %.2f", &x, x);
            printf("\n End y: %d   ...   Val y: %.2f\n", &y, y);
        }
        if(num == 2)
        {
            printf("\n Digite um valor para atribuir ao endereco escolhido: ");
            scanf("%f", &v);

            *p2 = *p2 + v;

            printf("\n End x: %d   ...   Val x: %.2f", &x, x);
            printf("\n End y: %d   ...   Val y: %.2f\n", &y, y);
        }
    }
    printf("\nPrograma encerrado...\n");
}

