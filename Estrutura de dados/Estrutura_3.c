#include<stdio.h>

    struct horario ///defini��o uma estrutura!
    {
        int horas;
        int minutos;
        int segundos;
    };

int main()
{
    struct horario teste(struct horario x); ///teste � o nome da fun��o! ---> x � o parametro da fun�ao!

    struct horario agora; ///declara��o de uma estrutura!

    agora.horas = 16;       /// ->agora(estrutura)
    agora.minutos = 8;     /// Inicializa��o dos membros da estrutura!
    agora.segundos = 30;  ///->horas,minutos,segundos(variaveis da estrutura)

    struct horario proximo;

    proximo = teste(agora);

    printf("%d %d %d\n",proximo.horas,proximo.minutos,proximo.segundos);

    return 0;
}

struct horario teste(struct horario x)
{
    printf("%d %d %d\n",x.horas,x.minutos,x.segundos);

    x.horas = 10;
    x.minutos = 10;
    x.segundos = 10;

    return x;
};
