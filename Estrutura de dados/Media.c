#include<stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media=0.0;

    printf("Digite 4 notas(n1 n2 n3 n4):");
    scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("Nota1: %.2f\nNota2: %.2f\nNota3: %.2f\nNota4: %.2f\n",nota1,nota2,nota3,nota4);
    printf("Media: %.2f\n",media);

    if(media >= 6)
        printf("Aprovado!");
    else if(media >= 4 && media < 6)
        printf("Final!");
    else if(media >= 0 && media < 4)
        printf("Reprovado!");
    else
        printf("Media incorreta!");

    return 0;
}
