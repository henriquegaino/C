#include <stdio.h>
int main() {
FILE *ptrFile;
char cor[ 20 ];
int i = 0;
ptrFile = fopen( "cores.txt", "r" );
if ( ptrFile != NULL ) {
while ( !feof( ptrFile ) ) {
fscanf( ptrFile, "%s", &cor );
printf( "%d) %s\n", ++i, cor );
}
fclose( ptrFile );
}
return 0;
}
