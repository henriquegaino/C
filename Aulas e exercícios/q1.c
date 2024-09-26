#include<stdio.h>

int main()
{
    int a=80000,b=200000,ano=0;
    float ta=0.03, tb=0.15;

    while(a <= b)
    {
        a= a + a*ta;
        b= b + b*tb;
        ano++;
    }

    printf("Em %d a populacao A iguala ou ultrapassa a populacao B!",ano);
}
