///void print_item( map_item *item )
void imprime_aluno( item_mapa *item )
{
    printf( "[Chave: %s]\n\tNome: %s\n\tData de nascimento: %s\n\tMatricula: %s\n\tEndereco: %s\n\tNotas: %.2f %.2f %.2f %.2f \n\n", item->chave, item->valor.nome, item->valor.data_nascimento, item->valor.matricula, item->cadastro.endereco, item->valor.nota1, item->valor.nota2, item->valor.nota3, item->valor.nota4 );
}
