#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float notas[4], media = 0;
    int i;
    for(i=0; i<4; i++)
    {
        printf("Digite a %d� nota do aluno: ", i+1 );
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    for(i=0; i<4; i++)
    {
        printf("%d� Nota  = %.1f\n", i+1, notas[i]);
    }
    media = media/4;
    printf("A m�dia �  = %.1f\n",media);
}
