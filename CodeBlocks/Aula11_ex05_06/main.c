#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("e) ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).\n");
    printf("Digite um número inteiro qualquer\n");
    scanf("%i",&x);
    if (25<=x && x<=75) {
        printf("O número digitado está entre 25 e 75!");
    } else {
        printf("O número digitado não está entre 25 e 75!");
    }
    return 0;
}
