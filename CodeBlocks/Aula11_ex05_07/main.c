#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("g) ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99].\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&x);
    if (15<=x && x<=45) {
        printf("O número digitado pertence ao intervalo [15:45]!");
    } else {
        if (66<=x && x<=99) {
            printf("O número digitado pertence ao intervalo [66:99]!");
        } else {
            printf("O número digitado não pertence nem ao intervalo [15:45], nem ao intervalo [66:99]!");
        }
    }
    return 0;
}
