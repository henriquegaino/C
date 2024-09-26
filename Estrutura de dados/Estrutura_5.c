#include<stdio.h>

int main()
{
    int i;

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario teste[5] = {{10,20,30},{20,30,40},{30,40,50},{40,50,60},{50,60,70}};

    for(i=0;i<5;i++)
    {
        printf("%d %d %d\n",teste[i].horas,teste[i].minutos,teste[i].segundos);
    }

    return 0;
}
