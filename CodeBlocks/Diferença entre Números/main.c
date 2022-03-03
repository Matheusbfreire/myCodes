#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,y;

    printf("3.Escreva um algoritmo para ler dois valores (x,y)\nescreva na tela o resultado da operação lógica que\nverifica se a operação diferença entre eles, é igual a zero. \n");
    printf("(0)False\n(1)True\n");
    printf("\n");
    printf("Escolha um valora pra x:\n");
    scanf("%i",&x);
    printf("Escolha um valora pra y:\n");
    scanf("%i",&y);
    printf("x-y=0?%i",x-y==0);
    return 0;
}
