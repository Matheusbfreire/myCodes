#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("b) Ler um valor inteiro do teclado e dizer se � �mpar.\n");
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&x);
    if (x%2!=0){
        printf("O n�mero %i � �mpar!",x);
    } else{
    printf("O n�mero %i n�o � �mpar!",x);
    }
    return 0;
}
