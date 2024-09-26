#include <stdio.h>

int main()
{
    FILE *ptr;
    char nArq[20];
    int n=0;

    scanf("%s", nArq);
    ptr = fopen(nArq, "rt");

    if (ptr==NULL)
    {
        printf("Arquivo inexistente.");

    }




    return 0;
}
