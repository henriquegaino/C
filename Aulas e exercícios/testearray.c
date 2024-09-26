#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float notas[4], media = 0;
    int i;
    for(i=0; i<4; i++)
    {
        printf("Digite a %dª nota do aluno: ", i+1 );
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    for(i=0; i<4; i++)
    {
        printf("%dª Nota  = %.1f\n", i+1, notas[i]);
    }
    media = media/4;
    printf("A média é  = %.1f\n",media);
}
