#include <stdio.h>
typedef enum { reprovado, aprovado } situacaoAluno;
typedef struct {
int RA;
char nome[ 50 ];
float notas[ 3 ];
} aluno;
aluno novo_aluno( int nRA, char *nNome, float nNotas[3] ) {
aluno a;
a.RA = nRA;
sprintf( a.nome, nNome );
a.notas[ 0 ] = nNotas[ 0 ];
a.notas[ 1 ] = nNotas[ 1 ];
a.notas[ 2 ] = nNotas[ 2 ];
return a;
}
float media( aluno a ) {
return ( a.notas[ 0 ] + a.notas[ 1 ] + a.notas[ 2 ] ) / 3;
}
situacaoAluno situacao( aluno a ) {
if ( media( a ) >= 6.0 )
return aprovado;
return reprovado;
}
void imprime_aluno( aluno a ) {
printf( "RA.......: %d\n", a.RA );
printf( "Nome.....: %s\n", a.nome );
printf( "Nota 1...: %.1f\n", a.notas[ 0 ] );
printf( "Nota 2...: %.1f\n", a.notas[ 1 ] );
printf( "Nota 3...: %.1f\n", a.notas[ 2 ] );
printf( "Media....: %.1f\n", media( a ) );
printf( "Situacao.: %s\n\n", ( situacao( a ) == aprovado ? "APROVADO" : "REPROVADO" ) );
}
int main() {
int i;
aluno turma[3];
turma[0] = novo_aluno( 12263, "Rogerio", (float[]) { 7.5, 6.0, 4.5 } );
turma[1] = novo_aluno( 23239, "Ricardo", (float[]) { 4.2, 2.1, 3.5 } );
turma[2] = novo_aluno( 15364, "Rafael", (float[]) { 7.5, 6.4, 4.9 } );
for( i=0; i<3; i++ )
imprime_aluno( turma[i] );
return 0;
}
