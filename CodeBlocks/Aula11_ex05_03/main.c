#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("c) ler um valor inteiro do teclado e dizer se � �mpar e maior que 100.\n");
    printf("Digite um valor inteiro qualquer:\n");
    scanf("%i",&x);
    if (x%2!=0) {
        printf("O valor escolhido � �mpar ");
    } else {
        printf("O valor escolhido n�o � �mpar ");
    }
    if (x>100) {
        printf("e � maior que 100!");
    } else {
        printf("e � menor que 100!");
    }
    return 0;
}
