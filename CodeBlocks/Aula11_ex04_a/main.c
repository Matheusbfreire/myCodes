#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,suc;

    printf("a) Leia um n�mero e imprima seu sucessor.\n");
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&x);
    suc=x+1;
    printf("O sucessor do n�mero %i � o %i!",x,suc);
    return 0;
}
