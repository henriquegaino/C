#include<stdio.h>

main()

{
    int *p, x;
    p = &x;
    x = 10;

    printf("%d %d %d %d",*p,p,&x,x);
}
