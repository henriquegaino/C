#include<stdio.h>

int main()
{
    struct horario ///definição uma estrutura!
    {
        int horas;
        int minutos;
        int segundos;
        float teste;
        char letra;
    };

    struct horario agora; ///declaração de uma estrutura!

    agora.horas = 16;       /// ->agora(estrutura)
    agora.minutos = 8;     /// Inicialização dos membros da estrutura!
    agora.segundos = 30;  ///->horas,minutos,segundos(variaveis da estrutura)

    struct horario depois;

    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos + 10;
    depois.segundos = agora.segundos + 10;
    depois.teste = 7/3;
    depois.letra = 'a';

    printf("%d %d %d %.2f %c",depois.horas,depois.minutos,depois.segundos,depois.teste,depois.letra);

    return 0;
}

