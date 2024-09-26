#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, n, somapar=0, somaimpar=0;
    printf(" Digite o numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 ==0){
            somapar = somapar + i;
        }
    }
    printf(" \n A soma dos numeros pares ate %d eh: %d\n", n, somapar);

{
        for(i = 1; i <= n; i++){
        if(i % 2 !=0){
            somaimpar = somaimpar + i;
        }
    }
    printf(" \n A soma dos numeros impares ate %d eh: %d\n", n, somaimpar);
    }
}

