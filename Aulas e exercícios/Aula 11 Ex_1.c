#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Implementa��o do algoritmo de elimina��o de Gauss segundo consta na p�gina
// 126 do livro C�lculo Num�rico de Ruggiero e Lopes.
// Nesta vers�o, al�m de deixar ao usu�rio especificar a quantidade de vari�veis,
// usamos a estrat�gia de pivotamento parcial para contornar o caso de termos
// um piv� nulo ou muito pequeno. Usamos o algoritmo descrito na p�gina 127
// do livro de C�lculo Num�rico de Ruggiero

int main()
{
    int n; // quantidade de vari�veis do sistema

    // Entrada da quantidade de vari�veis
    printf("Digite a quantidade de vari�veis do sistema n = ");
    scanf("%d", &n);

    float A[n][n]; // matriz dos coeficientes;
    float b[n]; // vetor constante dos termos independentes
    float x0[n]; // vetor com dados x
    float z[n]; //vetor solucao
    int i, j, k, p, q; // vari�veis auxiliares para percorrer os coefs
    float m; // multiplicador usado na fase de elimina��o
    float s; // auxiliar usada na fase de resolu��o
    float aux; // auxiliar usada na fase de pivotamento parcial
    char resp = 's';
    float x,y=0;

   // Entrada dos valores de x
    for(i = 0; i < n; i++)
    {
        printf("Digite x[%d] = ", i);
        scanf("%f", &x0[i]);
    }
    // Entrada do vetor constante b
    for(i = 0; i < n; i++)
    {
        printf("Digite y[%d] = ", i);
        scanf("%f", &b[i]);
    }





/****************************************************************************************************/
//                              Programe a Montagem da matriz A
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            A[i][j]=pow(x0[i],j);
        }
    }
/****************************************************************************************************/




/*                             Resolucao do sistema linear Az = b                          */

    //Fase de elimina��o
    for(k = 0; k < (n-1); k++)
    {
        // escolhemos como piv� aquele coeficiente da coluna k com maior valor
        // absoluto
        aux = 0.0; // candidato de piv�
        p = 0;  // linha onde se encontra o coef com maior m�dulo
        for(q = k; q < n; q++)
        {
            if(fabs(A[q][k]) > aux)
            {
                aux = fabs(A[q][k]);
                p = q;
            }
        }
        // se o piv� encontrado � zero ent�o aborto a execu��o do programa
        if(aux == 0.0)
        {
            printf("Detectado piv� nulo na fase de elimina��o... Aborto o programa\n");

            exit(1); // for�o a termina��o do programa
        }
        // intercambio os coeficientes das equa��es k e p
        for(j=0; j < n; j++)
        {
            aux = A[k][j];
            A[k][j] = A[p][j];
            A[p][j] = aux;
        }
        aux = b[k];
        b[k] = b[p];
        b[p] = aux;

        // continuo o processo normal de elimina��o
        for(i = k + 1; i < n; i++)
        {
            // calculo o multiplicador
            m = A[i][k] / A[k][k];
            // anulo o coef eliminado
            A[i][k] = 0.0;
            // calculo os novos valores para os demais coefs.
            for(j = k + 1; j < n; j++)
            {
                A[i][j] = A[i][j] - m * A[k][j];
            }
            b[i] = b[i] - m * b[k];
        }
    }

    //              Fase de resolu��o
    z[n-1] = b[n-1] / A[n-1][n-1];
    for(k = n-2; k >= 0; k--)
    {
        s = 0.0;
        for(j = k + 1; j < n; j++)
        {
            s = s + A[k][j] * z[j];
        }
        z[k] = (b[k] - s) / A[k][k];
    }
/*                        Fim da Resolucao do sistema linear Az = b                          */

while (resp != 'n')
{

/****************************************************************************************************/
    //Sabendo que z � o vetor solu��o do sistema linear, solicite ao usu�rio o valor de x
    //Para o qual se quer interpolar y
    printf("Valor de X a ser interpolado: ");
    scanf("%f",&x);

    y=0;
    //Ent�o, calcule o valor de y
    for(i=0;i<n;i++)
    {
        y= y +(z[i]*pow(x,i));
    }
    printf("O valor de Y interpolado em X(%.2f): %.2f",x,y);
/****************************************************************************************************/

printf("\nDeseja continuar (s ou n)? \n");
scanf(" %c", &resp);
}
}
