#include<stdio.h>
#include<math.h>

void removelc(int n,float mat_in[n][n],float mat_out[n-1][n-1],int l,int c)
{
    int o=(n-1)*(n-1),i,j,k=0;
    float vet[o];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=l && j!=c)
            {
               vet[k]=mat_in[i][j];
               k++;
            }
        }
    }

    i=0;
    k=0;

    while(k<o)
    {
        j=0;
        while(j<n-1)
        {
            mat_out[i][j]=vet[k];
            j++;
            k++;
        }
        i++;
    }
}

float det_laplace(int n,float mat[n][n])
{
    int i=0,j=0;
    float val_det=0,mat_out[n-1][n-1];
    if (i==0 && j==0)
        return mat[i][j];
    else
    {
        for (j=0;j<n;j++)
        {
            removelc(n,mat,mat_out,i,j);
            val_det = val_det + pow(-1,i+j)*mat[i][j]*det_laplace(n-1,mat_out);
        }
        return val_det;
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

    det=det_laplace(n,mat);

    printf("%.2f",det);
}

