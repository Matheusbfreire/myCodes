#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,y;

    printf("i) ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo.\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&x);
    printf("Digite um segundo número inteiro qualquer:\n");
    scanf("%i",&y);
    if (x%2==0) {
        printf("O primeiro valor digitado é Par ");
    } else {
        printf("O primeiro valor digitado não é Par ");
    }
    if (x>0) {
        printf("e é Positivo, ");
    } else {
        printf("e não Positivo, ");
    }
    if (y%2!=0) {
        printf("já o segundo número é Ímpar ");
    } else {
        printf("já o segundo número não é Ímpar ");
    }
    if (y<0) {
        printf("e é Negativo!");
    } else {
        printf("e não Negativo!");
    }
    return 0;
}
