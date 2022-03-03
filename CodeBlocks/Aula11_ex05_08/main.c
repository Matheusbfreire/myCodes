#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,y;

    printf("h) ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&x);
    printf("Digite outro número inteiro qualquer:\n");
    scanf("%i",&y);
    if (x%2==0) {
        printf("O primeiro número digitado é Par ");
    } else {
        printf("O primeiro número digitado não é Par ");
    }
    if (y%2!=0) {
        printf("e o segundo número digitado é Ímpar!");
    } else {
        printf("e o segundo número digitado não é Ímpar!");
    }
    return 0;
}
