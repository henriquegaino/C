item_mapa* insere( item_mapa **mapa, char* chave, char* nome, char* matricula, float notas[4] )

///map_item* add( map_item **map, char* matricula, char* nome, char* data_nascimento, char* telefone, char* endereco, float coeficiente )
item_mapa* insere(  item_mapa **mapa, char* chave, char* nome, char* data_nascimento, char* matricula, float notas[4])
{
    item_mapa *aux = NULL;
    if ( busca( *mapa, chave ) != NULL )
        return NULL;
    if ( *mapa == NULL )
    {
        *mapa = (item_mapa*) malloc( sizeof( item_mapa ) );
        aux = *mapa;
    }
    else
    {
        aux = *mapa;
        while ( aux->próximo != NULL )
        {
            aux = aux->proximo;
            aux->proximo = (item_mapa*) malloc( sizeof( item_mapa ) );
            aux = aux->proximo;
        }
    }
    sprintf( aux->chave, chave );
    sprintf( aux->valor.nome, nome );
    sprintf( aux->valor.data_nascimento, data_nascimento );
    sprintf( aux->valor.matricula, matricula );
    sprintf( aux->valor.endereco, endereco );
    aux->valor.nota1 = nota[0];
    aux->valor.nota2 = nota[1];
    aux->valor.nota3 = nota[2];
    aux->valor.nota4 = nota[3];
    aux->proximo = NULL;
    return aux;
}
