#include <stdio.h> // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeias de caracteres
#include <math.h> // para funcoes matematicas
int main ( )
{
// definir dados
int x = 0 ; // definir variavel com valor inicial
double y = 3.5; // definir variavel com valor inicial
char z = 'A'; // definir variavel com valor inicial
bool w = false; // definir variavel com valor inicial
// identificar
printf ( "%s\n", "EXEMPLO - Programa - v0.0 - continuacao" );
printf ( "%s\n", "Autor: ______________________" );
printf ( "\n" ); // mudar de linha
x = 4;
w = (x % 2 == 0); // equivalente a testar se é par ou
// resto inteiro (%) da divisao por 2 igual a zero
printf ( "17. %s (%d) ? %d\n", "e' par ", x, w );
x = 4;
w = (x % 2 != 0); // equivalente a testar se é ímpar ou
// resto inteiro (%) da divisao por 2 diferente de zero
printf ( "18. %s (%d) ? %d\n", "e' impar ", x, w );
z = 'x';
w = ('a'<=z && z<='z'); // equivalente a testar se e' letra minuscula
printf ( "19. %s (%c) ? %d\n", "e' minuscula ", z, w );
z = 'x';
w = ('A'<=z && z<='Z'); // equivalente a testar se e' letra maiuscula
printf ( "20. %s (%c) ? %d\n", "e' maiuscula ", z, w );
z = '0';
w = ('0'==z || '1'==z); // equivalente a testar se e' igual a '0' ou a '1'
printf ( "21. %s%(%c) ? %d\n", "e' 0 ou 1 ", z, w );
// encerrar
printf ( "\n\nApertar ENTER para terminar." );
fflush ( stdin ); // limpar a entrada de dados
getchar( ); // aguardar por ENTER
return ( 0 ); // voltar ao SO (sem erros)
} // fim main( )
