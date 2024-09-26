#include <stdio.h>
#include <malloc.h>
typedef struct node {
int valor;
struct node *proximo;
} no;
void insere_elemento( no **inicio, int valor ) {
no *aux = NULL;
if ( *inicio == NULL ) {
*inicio = (no*) malloc( sizeof( no ) );
aux = *inicio;
} else {
aux = *inicio;
while ( aux->proximo != NULL )
aux = aux->proximo;
aux->proximo = (no*) malloc( sizeof( no ) );
aux = aux->proximo;
}
aux->valor = valor;
aux->proximo = NULL;
}
void imprime_lista( no *list ) {
while ( list != NULL ) {
printf( " %d ->", list->valor );
list = list->proximo;
}
printf( "." );
}
void destroi_lista( no **list ) {
no *aux = *list;
while ( aux != NULL ) {
aux = (*list)->proximo;
free(*list);
*list = aux;
}
}
int main() {
no *list = NULL;
insere_elemento( &list, 12 );
insere_elemento( &list, 29 );
insere_elemento( &list, 3 );
insere_elemento( &list, 7 );
insere_elemento( &list, 7 );
insere_elemento( &list, 7 );
imprime_lista( list );
destroi_lista( &list );
return 0;
}
