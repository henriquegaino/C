#include<stdio.h>

int main()
{
    int x;
    x=10;

    int *p; /// aponta para o valor da variavel escolhida;
    p=&x; /// acessa o endere�o de mem�ria;

    printf("%d %d",*p,p);

    return 0;
}
