#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");
int fat (int x);
int num, resultado;
printf("Digite um número inteiro: ");
scanf("%i", &num);
resultado = fat (num);

printf("O fatorial de %i é %i", num, resultado);
}
int fat (int x){
int resultado;

if(x == 0){
resultado = 1;
}
else {
    resultado = x * fat (x-1);
}
return resultado;
}
