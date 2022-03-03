#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;

    printf("b) Ler um valor inteiro do teclado e dizer se é ímpar.\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&x);
    if (x%2!=0){
        printf("O número %i é Ímpar!",x);
    } else{
    printf("O número %i não é Ímpar!",x);
    }
    return 0;
}
