#include<stdio.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen("string.txt","r");

    int i,j,qtd=0,cont;
    char text[10][250];

    for(i=0;i<10;i++)
    {
        fscanf(arquivo,"%[^\n]\n",text[i]);
    }

    for(i=0;i<10;i++)
    {
        cont=strlen(text[i]);
        for(j=0;j<cont;j++)
        {
            if(j==0 && text[i][j]=='M')
                qtd=qtd+1;
            if(text[i][j]==' ')
            {
                if(text[i][j+1]=='M')
                    qtd=qtd+1;
            }
        }
    }

    printf("Quantidade: %d",qtd);
}
