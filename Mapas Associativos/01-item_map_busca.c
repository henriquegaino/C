item_mapa* busca( item_mapa *mapa, char* chave ) {
    while ( mapa != NULL )
    {
        if ( strcmp( mapa->chave, chave ) == 0 )
        return mapa;
        mapa = mapa->proximo;
    }
    return NULL;
}
