#include<stdio.h>

main()
{
    int v1, v2, resultado;
    char a;

    printf("Qual o sinal da conta? (+-*/):");
    scanf("%c", &a);

    printf("Digite o primeiro valor:");
    scanf("%d", &v1);

    printf("Digite o segundo valor:");
    scanf("%d", &v2);

   if (a = '+'){
    resultado = v1 + v2;
   }
    else if (a = '-'){
    resultado = v1 - v2;
    }
    else if (a = '*'){
    resultado = v1 * v2;
    }
    else if (a = '/'){
    resultado = v1 / v2;
    }
    else {
        printf("Resultado invalido");
    }
    printf("%d", resultado);
    return 0;


}
