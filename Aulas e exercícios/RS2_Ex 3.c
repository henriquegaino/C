
#include<stdio.h>

main()

{
    int sd=0,d,i;

    for(i=1;i<=2000;i++)
    {
      for(d=1;d<=2000;d++)
        {
        if(i%d == 0)
            sd = sd+d;
        if(i==sd)
            printf("%d\n",sd);
        }
    sd=0;
    }
}
