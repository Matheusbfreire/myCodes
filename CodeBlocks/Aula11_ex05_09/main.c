#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,y;

    printf("i) ler dois valores inteiros do teclado e dizer se o primeiro � par e positivo, e o segundo � �mpar e negativo.\n");
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&x);
    printf("Digite um segundo n�mero inteiro qualquer:\n");
    scanf("%i",&y);
    if (x%2==0) {
        printf("O primeiro valor digitado � Par ");
    } else {
        printf("O primeiro valor digitado n�o � Par ");
    }
    if (x>0) {
        printf("e � Positivo, ");
    } else {
        printf("e n�o Positivo, ");
    }
    if (y%2!=0) {
        printf("j� o segundo n�mero � �mpar ");
    } else {
        printf("j� o segundo n�mero n�o � �mpar ");
    }
    if (y<0) {
        printf("e � Negativo!");
    } else {
        printf("e n�o Negativo!");
    }
    return 0;
}
