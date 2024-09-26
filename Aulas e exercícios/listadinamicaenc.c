#include<stdio.h>

int main()
{
    struct elemento
    {
        struct aluno dados;
        struct elemento *prox;
    };

    typedef struct elemento Elem;

    Lista *li;
}
