#include <stdio.h>

int main()
{
    char frase[50];
    char palavra[] = "da";
    char *pos;

    sprintf(frase, "Curso da unifal");
    pos = strstr(frase, palavra);
    printf("%s", pos);

    return 0;
}
