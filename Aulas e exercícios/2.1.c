#include <stdio.h>
int main()
{
    int num, i, par=0, impar=0;
    for(i=1; i<11; i++)
    {
        printf("Digite o %io numero inteiro:", i);
        scanf("%d", &num);
        if(num%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    printf("\n %d Numeros pares",par);
    printf("\n %d Numeros impares",impar);


    return 0;
}
