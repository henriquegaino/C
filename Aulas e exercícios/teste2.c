#include <stdio.h>
#include <stdlib.h>
//Código por Henrique Felipe (GitHub: HenriqueIni)
//Supõe-se que a matriz 'a' é válida e de ordem n × n
double detLaplace(int n, double a[n][n]){
    if(n == 1){
        //Caso básico: matriz 1x1
        return a[0][0];
    }else{
        double det = 0;
        int i, row, col, j_aux, i_aux;

        //Escolhe a primeira linha para calcular os cofatores
        for(i = 0; i < n; i++){
            //ignora os zeros (zero vezes qualquer número é igual zero)
            if (a[0][i] != 0) {
                double aux[n - 1][n - 1];
                i_aux = 0;
                j_aux = 0;
                //Gera as matrizes para calcular os cofatores
                for(row = 1; row < n; row++)
                    {
                    for(col = 0; col < n; col++){
                        if(col != i){
                            aux[i_aux][j_aux] = a[row][col];
                            j_aux++;
                        }
                    }
                    i_aux++;
                    j_aux = 0;
                }
                double factor = (i % 2 == 0)? a[0][i] : -a[0][i];
                det = det + factor * detLaplace(n - 1, aux);
            }
        }
        return det;
    }
}

int main()
{
    int i,j,n;
    float det;

    printf("Ordem da matriz: ");
    scanf("%d",&n);

    float mat[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Posicao[%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);
        }
    }

    det=detLaplace(n,mat);

    printf("%.2f",det);
}
