///void print_map( map_item *map )
void imprime_mapa( item_mapa *mapa )
{
    while ( mapa != NULL )
    {
    imprime_mapa( mapa );
    mapa = mapa->proximo;
    }
}
