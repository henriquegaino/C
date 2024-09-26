#include<stdio.h>

struct horario
{
     int horas;
     int minutos;
     int segundos;
};

int main()
{
    void receberhorarios(struct horario lista[5]);
    void printfhorarios(struct horario lista[5]);
    struct horario listahorarios[5];
    receberhorarios(listahorarios);
    printfhorarios(listahorarios);

    return 0;
}

void receberhorarios(struct horario lista[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Digite o %dº horario(h,min,s):",i+1);
        scanf("%d %d %d",&lista[i].horas,&lista[i].minutos,&lista[i].segundos);
    }
}
void printfhorarios(struct horario lista[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%dº horaio:%d %d %d\n",i+1,lista[i].horas,lista[i].minutos,lista[i].segundos);
    }
}
