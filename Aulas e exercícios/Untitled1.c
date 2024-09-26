#include <stdio.h>
int f(int x){
if (x == 0)
    return 2;
if (x <= 2)
    return x * x;
if (x <= 5)
    return x * f (x - 1);
if (x > 5)
    return f(x - 3)+ f(x - 2);
}
int main() {
    int v, x;
    printf("Digite um número: ");
    scanf("%d", &v);
    printf("f(%d) = %d\n", v, f(v));
return 0;
}
