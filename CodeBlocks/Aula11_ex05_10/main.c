#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float x,y;

    printf("j) Ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo.\n");
    printf("Digite um número real qualquer:\n");
    scanf("%f",&x);
    printf("Digite um segundo número real qualquer:\n");
    scanf("%f",&y);
    if (x<y) {
        printf("O primeiro número é menor que o segundo!");
    } else {
        if (x>y) {
            printf("O primeiro número é maior que o segundo!");
        } else {
            printf("O primeiro número é igual ao segundo!");
        }
    }
    return 0;
}
