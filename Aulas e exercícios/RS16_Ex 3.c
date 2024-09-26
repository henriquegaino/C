#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int valor;
    struct node *proximo;
} no;

void insereElemento( no **inicio, int valor )
{
    no *aux = NULL;
    if ( *inicio == NULL )
    {
        *inicio = (no*) malloc( sizeof( no ) );
        aux = *inicio;
    }
    else
    {
        aux = *inicio;
        while ( aux->proximo != NULL )
        aux = aux->proximo;
        aux->proximo = (no*) malloc( sizeof( no ) );
        aux = aux->proximo;
    }
    aux->valor = valor;
    aux->proximo = NULL;
    }

void imprimeLista( no *list )
{
    while ( list != NULL )
    {
        printf( "%d ->", list->valor );
        list = list->proximo;
    }
        printf( "." );
}

void removeElemento( no **list, int valor )
{
    no *aux = *list, *aux2 = NULL;
    int i;
    if ( *list == NULL )
        return;
    if ( aux->valor == valor )
    {
        aux = *list;
        *list = aux->proximo;
        free( aux );
        return;
    }

    while(aux == NULL)
    {
        if(aux->valor == valor)
        {

            aux= aux->proximo;
            aux2 = aux->proximo;

            if ( aux2 != NULL )
            {
                aux->proximo = aux2->proximo;
                free( aux2 );
            }
            return;
        }
        aux = aux->proximo;
    }
}

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
    no *list = NULL;
    insereElemento( &list, 1); //Elemento 1
    insereElemento( &list, 25); //Elemento 2
    insereElemento( &list, 6); //Elemento 3
    insereElemento( &list, 42 ); //Elemento 4
    removeElemento( &list, 25);
    imprimeLista( list );
    return 0;
}
