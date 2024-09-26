#include <stdio.h>
#include <malloc.h>

main()
{
    int k ,n,i,*values;
    printf( "Quantidade: " );
    scanf( "%d", &n );
    printf("Numero:");
    scanf("%d",&k);
    values = (int*) malloc( n * sizeof( int ) );
    values[0]=k;
    printf("%d ", values[0]);
    for ( i=1; i<n; i++ )
    {
        values[i]=values[i-1]-2;
        printf("%d ",values[i]);

    }
    free(values);
    return 0;
}
