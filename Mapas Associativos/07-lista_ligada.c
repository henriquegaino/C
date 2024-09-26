#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int valor;
    struct node *proximo;
} no;

int contaelementos(no *list)
{
    int qtd=0;

    while(list!= NULL)
    {
        qtd=qtd+1;
        list = list->proximo;
    }

    return qtd;
}

int main()
{
    int qtd=0;

    no *list = NULL;
    // 1o. elemento da lista
    list = (no*) malloc( sizeof( no ) );
    list->valor = 10;
    list->proximo = NULL;
    // 2o. elemento da lista
    list->proximo = (no*) malloc( sizeof( no ) );
    list->proximo->valor = 25;
    list->proximo->proximo = NULL;
    // 3o. elemento da lista
    list->proximo->proximo = (no*) malloc( sizeof( no ) );
    list->proximo->proximo->valor = 6;
    list->proximo->proximo->proximo = NULL;

    list->proximo->proximo = (no*) malloc( sizeof( no ) );
    list->proximo->proximo->proximo->valor = 3;
    list->proximo->proximo->proximo->proximo = NULL;

    qtd=contaelementos(list);

    // Imprime lista
    while ( list != NULL ) {
    printf( "%d ->", list->valor );
    list = list->proximo;
    }
    printf( ".\n" );

    printf("Quantidade: %d",qtd);

    return 0;
}
