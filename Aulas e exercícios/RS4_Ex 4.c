#include <stdio.h>
int main()
{
    int *c, v;
    c = &v;
    v = 25;
    *c *= 4;
    printf( "%d %d", v,c);
    return 0;
}
