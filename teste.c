#include <stdio.h>

int main()
{
    int a;
    int b;

    a = 90;
    b = 2;

    printf("a = %d", a);
    printf("b = %d");

    printf("Endereço de 'a' = %d",&a);
    printf("Endereço de 'b' = %d", &b);


}