#include <stdio.h>
#include <stdlib.h>



int main ()
{
    int i, num1, num2, div1 = 0, div2 =0 ;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    for(i = 1; i <= num1/2; i++){
        if(num1 % i == 0)
            div1 += i;
    }
    for(i = 1; i <= num2/2; i++){
        if(num2 % i == 0)
        div2 += i;
    }
    if(num1 == div2 && num2 == div1) printf("%d e %d SAO numeros amigos", num1, num2);
    else printf("%d e %d NAO SAO numeros amigos", num1, num2);
    return 0;
}
