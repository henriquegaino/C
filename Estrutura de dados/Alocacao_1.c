#include<stdio.h>
#include<malloc.h>

struct x
{
    int a;
    int b;
    int c;
};

int main()
{
    struct x estrutura;
    int x;
    double y;

    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(y));
    printf("%d\n",sizeof(estrutura));

    return 0;
}
