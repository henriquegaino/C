#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define TRUE 1
/* n: número do último ponto (n+1 = número de dados de entrada)
f(i), x[i]: dados de entrada dados (i começa em 0)
yans: resultado final
xa: x valor de entrada para o qual a interpolação é calculada */
main()
{
 int i, j, kk;
 float xa, yans, z;
 static n = 3; /* n+1 é o número de pontos de entrada */
 /*As próximas duas linhas defina os pontos para ser usados na interpolação */
static float x[11]={1., 2. , 3., 4.};
static float f[11]={.671, .620, .567, .512};
printf ("Interpolacao de Lagrange\n");
printf("Dados utilizados\n");
printf("i x(i) f(i) \n" );
for (i=0; i<=n; i++)
 printf("%d %g %g \n", i, x[i], f[i] );
while (TRUE)
 {
 printf( "\nEntrada x ? ");
 scanf("%f", &xa );
 if (!(x[0]<= xa && xa <= x[n]) )
 printf("(Atencao: x é uma extrapolacao do intervalo.)\n" );
 for (i =0; i<=n; i++)
 {
 z=1.0;
 for (j=0;j<=n;j++)
 {
 if (i != j)
 z=z*(xa - x[j]) / (x[i] - x[j]);
 }
 yans= yans + z*f[i];
 }
 printf("Resposta: g( %g) = %g \n", xa, yans );
 printf("\nDigite 1 para continuar, 0 para parar: ");
 scanf("%d", &kk);
 if (kk !=1)
 exit(0);
 }
}
//Interpolação
