#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("d) ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.\n");
    printf("Digite um valor inteiro qualquer:\n");
    scanf("%i",&x);
    if (x%2==0) {
        printf("O valor escolhido é Par ");
    } else {
        printf("O valor escolhido não é Ímpar ");
    }
    if (x>100) {
        printf("e é maior que 100!");
    } else {
        printf("e é menor que 100!");
    }
    return 0;
}
