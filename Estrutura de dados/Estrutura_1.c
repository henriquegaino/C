#include<stdio.h>

int main()
{
    struct horario ///defini��o uma estrutura!
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora; ///declara��o de uma estrutura!

    agora.horas = 16;       /// ->agora(estrutura)
    agora.minutos = 8;     /// Inicializa��o dos membros da estrutura!
    agora.segundos = 30;  ///->horas,minutos,segundos(variaveis da estrutura)

    printf("%d %d %d",agora.horas,agora.minutos,agora.segundos);

    return 0;
}
