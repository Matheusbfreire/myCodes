#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,y;

    printf("h) ler dois valores inteiros do teclado e dizer se o primeiro � par e o segundo � �mpar.\n");
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&x);
    printf("Digite outro n�mero inteiro qualquer:\n");
    scanf("%i",&y);
    if (x%2==0) {
        printf("O primeiro n�mero digitado � Par ");
    } else {
        printf("O primeiro n�mero digitado n�o � Par ");
    }
    if (y%2!=0) {
        printf("e o segundo n�mero digitado � �mpar!");
    } else {
        printf("e o segundo n�mero digitado n�o � �mpar!");
    }
    return 0;
}
