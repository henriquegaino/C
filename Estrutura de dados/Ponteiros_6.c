#include<stdio.h>

int main()
{
    void testevariavel(int x);
    void testeponteiro(int *px);
    int teste = 1;
    int *pteste = &teste;

    testevariavel(teste); ///Quando ela for executada, no printf ,vai sair 1 porque o teste(fun��o principal) e o x(fun��o testevariavel) s�o duas variaveis diferentes!
    testeponteiro(pteste); ///Quando ela for executada, no printf vai sair 2 porque como a fun��o tem como parametro o endere�o de memoria, � adicionado +1 no valor de teste, resumindo, s� exite uma variavel!

    printf("%d\n",teste);

    return 0;
}

void testevariavel(int x)
{
    ++x;
}
void testeponteiro(int *px) ///Recebe o endere�o de memoria do ponteiro
{
    ++*px; ///Adiciona +1 no valor do ponteiro!
}

