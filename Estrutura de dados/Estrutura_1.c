#include<stdio.h>

int main()
{
    struct horario ///definição uma estrutura!
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora; ///declaração de uma estrutura!

    agora.horas = 16;       /// ->agora(estrutura)
    agora.minutos = 8;     /// Inicialização dos membros da estrutura!
    agora.segundos = 30;  ///->horas,minutos,segundos(variaveis da estrutura)

    printf("%d %d %d",agora.horas,agora.minutos,agora.segundos);

    return 0;
}
