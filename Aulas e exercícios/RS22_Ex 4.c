#include <stdio.h>

int main()
{
    FILE *a1;
    FILE *a2;
    FILE *a3;

    a1=fopen("dados_in.txt","r");
    a2=fopen("dados_out.txt","r");
    a3=fopen("out.txt","w");

  int i,j,n=4,k;

  float x[5],y[5],xi[21],yi[21],coefs[50],coef;

    for(i=0;i<n;i++)
    {
        fscanf(a1,"%f %f",&x[i],&y[i]);
        printf("%.2f %.2f\n",x[i],y[i]);
    }

    for(k=0;k<20;k++)
    {
        fscanf(a2,"%f\n",&xi[k]);
        printf("%.2f\n",xi[k]);
    }

    for(k=0;k<20;k++)
    {
        for(i=0;i<n;i++)
        {
            coef=1;

            for(j=0;j<n;j++)
            {
                if(i != j)
                    coef= (coef*(xi[k]-x[j]))/(x[i]-x[j]);
            }
            coefs[i]=coef;
      }

        for(i=0;i<n;i++)
        {
            yi[k] = yi[k] + ((coefs[i])*(y[i]));
        }
        fprintf(a3,"%.2f %.2f\n",xi[k],yi[k]);
    }

  return 0;
}

