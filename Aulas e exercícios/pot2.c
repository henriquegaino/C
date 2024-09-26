#include <stdio.h>
#include <math.h>
int main()
{
    FILE *ptrFile;
    int i;
    ptrFile = fopen( "potdois.txt", "w" );
    for ( i=0; i<=10; i++ )
        fprintf( ptrFile, "%d\t%d\n", i, (int) pow( 2, i ) );
    fclose( ptrFile );
    return 0;
}
