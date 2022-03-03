#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("a) Ler um valor inteiro do teclado e dizer se é par.\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&x);
    if (x%2==0){
        printf("O número %i é Par!",x);
    } else{
    printf("O número %i não é Par!",x);
    }
    return 0;
}
