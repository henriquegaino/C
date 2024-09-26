#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Implementação do algoritmo de eliminação de Gauss segundo consta na página
// 126 do livro Cálculo Numérico de Ruggiero e Lopes.
// Nesta versão, além de deixar ao usuário especificar a quantidade de variáveis,
// usamos a estratégia de pivotamento parcial para contornar o caso de termos
// um pivô nulo ou muito pequeno. Usamos o algoritmo descrito na página 127
// do livro de Cálculo Numérico de Ruggiero

int main()
{
    FILE *arq;

    arq=fopen("dados_poli.txt","r");

    int n=5; // quantidade de variáveis do sistema


    // Entrada da quantidade de variáveis

    float A[n][n]; // matriz dos coeficientes;
    float b[n]; // vetor constante dos termos independentes
    float x0[n]; // vetor com dados x
    float z[n]; //vetor solucao
    int i, j, k, p, q; // variáveis auxiliares para percorrer os coefs
    float m; // multiplicador usado na fase de eliminação
    float s; // auxiliar usada na fase de resolução
    float aux; // auxiliar usada na fase de pivotamento parcial
    char resp = 's';
    float x,y=0;

    //Leitura dos valores de x e y

    for(i=0;i<n;i++)
    {
        fscanf(arq,"%f %f",&x0[i],&b[i]);
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

    //Fase de eliminação
    for(k = 0; k < (n-1); k++)
    {
        // escolhemos como pivó aquele coeficiente da coluna k com maior valor
        // absoluto
        aux = 0.0; // candidato de pivô
        p = 0;  // linha onde se encontra o coef com maior módulo
        for(q = k; q < n; q++)
        {
            if(fabs(A[q][k]) > aux)
            {
                aux = fabs(A[q][k]);
                p = q;
            }
        }
        // se o pivô encontrado é zero então aborto a execução do programa
        if(aux == 0.0)
        {
            printf("Detectado pivô nulo na fase de eliminação... Aborto o programa\n");

            exit(1); // forço a terminação do programa
        }
        // intercambio os coeficientes das equações k e p
        for(j=0; j < n; j++)
        {
            aux = A[k][j];
            A[k][j] = A[p][j];
            A[p][j] = aux;
        }
        aux = b[k];
        b[k] = b[p];
        b[p] = aux;

        // continuo o processo normal de eliminação
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

    //              Fase de resolução
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

/*                        Imprime a função interpolação linear                     */

for(i=n-1;i>=0;i--)
{
    if(i!=0)
        printf("(%.2fx^%d)+",z[i],i);
    else
       printf("(%.2f)",z[i],i);
}
}

