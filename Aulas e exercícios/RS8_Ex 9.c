#include <stdio.h>
#include <string.h>

main()
{
    int i,qtd,q=0,a;
    char s[250],aux,l;

    printf("Digite uma string: ");
    scanf("%[^\n]",s);

    qtd=strlen(s);
    for(i=0;i<qtd;i++)
    {
        for(a=65;a<=122;a++)
        {
            if(s[i]==l)
                q=q+1;
        printf("%c aparece %d vezes!\n",a,q);
        }
    }
}
