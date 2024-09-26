#include<stdio.h>

main()

{
     int i;

     printf("Idade:");
     scanf("%d",&i);

     if(i>=18)
     printf("Adulto!");
     if(i>=14 && i<18)
     printf("Juvenil!");
     if(i>=9 && i<14)
     printf("Infantil!");
     if(i<9)
     printf("Mirim!");

}
