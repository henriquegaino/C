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
        printf( " %d ->", list->valor );
        list = list->proximo;
    }
    printf( "." );
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

void destroiLista( no **list )
{
    no *aux = *list;
    while ( aux != NULL )
    {
        aux = (*list)->proximo;
        free(*list);
        *list = aux;
    }
}

void removeElemento( no **list, int posicao )
{
    no *aux = *list, *aux2 = NULL;
    int i;
    if ( *list == NULL )
        return;
    if ( posicao == 1 )
    {
        aux = *list;
        *list = aux->proximo;
        free( aux );
        return;
    }
    for ( i=1; i<posicao-1; i++ )
    {
    if ( aux->proximo == NULL )
        return;
    aux = aux->proximo;
    }
    aux2 = aux->proximo;
    if ( aux2 != NULL )
    {
        aux->proximo = aux2->proximo;
        free( aux2 );
    }
    return;
}

int main()
{
    no *list = NULL;
    int n,op,qtd=0;

    do
    {
        printf("\n1. Insere Elemento\n2. Retira Elemento\n3. Conta Elementos\n4. Exibe Elementos\n5. Destroi Elementos\n0. Sair\nOpcao:");
        scanf("%d",&op);

    switch(op)
    {
        case 1:
            printf("Digite um numero: ");
            scanf("%d",&n);
            insereElemento( &list, n );
            break;

        case 2:
            removeElemento( &list, 1);
            break;

        case 3:
            qtd=contaelementos(list);
            printf("Quantidade: %d",qtd);
            break;

        case 4:
            imprimeLista( list );
            break;

        case 5:
            destroiLista( &list );
            break;

        case 0:
            printf("Fim do programa!");
            break;

        default:
            printf("Opcao errada!");
            break;
    }
    }
    while(op!=0);

    return 0;
}
