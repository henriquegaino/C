#include<stdio.h>

int main()
{
    struct horario ///defini��o uma estrutura!
    {
        int horas;
        int minutos;
        int segundos;
    }agora = {10,20,30};///declara��o de uma estrutura!

    printf("%d %d %d",agora.horas,agora.minutos,agora.segundos);

    return 0;
}
