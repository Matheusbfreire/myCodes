#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("a) Ler um valor inteiro do teclado e dizer se � par.\n");
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&x);
    if (x%2==0){
        printf("O n�mero %i � Par!",x);
    } else{
    printf("O n�mero %i n�o � Par!",x);
    }
    return 0;
}
