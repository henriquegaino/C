#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

int inteiro(char numero)
{
    if(numero == '0')
        numero=0;
    else if(numero == '1')
        numero=1;
    else if(numero == '2')
        numero=2;
    else if(numero == '3')
        numero=3;
    else if(numero == '4')
        numero=4;
    else if(numero == '5')
        numero=5;
    else if(numero == '6')
        numero=6;
    else if(numero == '7')
        numero=7;
    else if(numero == '8')
        numero=8;
    else if(numero == '9')
        numero=9;
    else if(numero == 'a')
        numero=10;
    else if(numero == 'b')
        numero=11;
    else if(numero == 'c')
        numero=12;
    else if(numero == 'd')
        numero=13;
    else if(numero == 'e')
        numero=14;
    else if(numero == 'f')
        numero=15;

    return numero;
}

char caractere(int numero)
{
    if(numero == 0)
        numero = '0';
    else if(numero == 1)
        numero='1';
    else if(numero == 2)
        numero='2';
    else if(numero == 3)
        numero='3';
    else if(numero == 4)
        numero='4';
    else if(numero == 5)
        numero='5';
    else if(numero == 6)
        numero='6';
    else if(numero == 7)
        numero='7';
    else if(numero == 8)
        numero='8';
    else if(numero == 9)
        numero=9;
    else if(numero == 10)
        numero='a';
    else if(numero == 11)
        numero='b';
    else if(numero == 12)
        numero='c';
    else if(numero == 13)
        numero='d';
    else if(numero == 14)
        numero='e';
    else if(numero == 15)
        numero='f';

    return numero;
}


#endif // BASE_H_INCLUDED
