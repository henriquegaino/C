#include<stdio.h>

    struct horario ///definição uma estrutura!
    {
        int horas;
        int minutos;
        int segundos;
    };

int main()
{
    struct horario teste(struct horario x); ///teste é o nome da função! ---> x é o parametro da funçao!

    struct horario agora; ///declaração de uma estrutura!

    agora.horas = 16;       /// ->agora(estrutura)
    agora.minutos = 8;     /// Inicialização dos membros da estrutura!
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
