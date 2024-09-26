#include<stdio.h>
#include<string.h>

main()
{
    FILE *cancela,*entrada,*saida;

    entrada= fopen("cancela_entrada.txt","r");
    saida = fopen("cancela_saida.txt","r");
    cancela= fopen("cancela_total.txt","w+");

    int i,j,qtd;
    char total1[20][30],total2[20][30],de[20][23],ds[20][23],he[20][23],hs[20][23],ide[20][23],ids[20][23];

    fprintf(cancela," ID   d.entrada   h.entrada d.saida     h.saida\n");
    for (i=0;i<20;i++)
    {
        fscanf(entrada,"%[^\n]\n",total1[i]);
    }
    for(i=0;i<20;i++)
    {
        for(j=0;j<=23;j++)
        {
            if(j>=19 && j<=23)
            {
                ide[i][j]=total1[i][j];
                fprintf(cancela,"%c",ide[i][j]);
            }
        }
        fprintf(cancela," ");
        for(j=0;j<=23;j++)
        {
          if(j<=10)
            {
                de[i][j]=total1[i][j];
                fprintf(cancela,"%c",de[i][j]);
            }

            if(j>=10 && j<=18)
            {
                he[i][j]=total1[i][j];
                fprintf(cancela,"%c",he[i][j]);
            }
        }

        fscanf(saida,"%[^\n]\n",total2[i]);
        fprintf(cancela,"  ");
        for(j=0;j<=23;j++)
        {
            if(j<=10)
            {
                ds[i][j]=total2[i][j];
                fprintf(cancela,"%c",ds[i][j]);
            }

            if(j>=10 && j<=18)
            {
                hs[i][j]=total2[i][j];
                fprintf(cancela,"%c",hs[i][j]);
            }
        }

        fprintf(cancela,"\n");
    }
        fclose(entrada);
        fclose(saida);
        fclose(cancela);
    return 0;
}
