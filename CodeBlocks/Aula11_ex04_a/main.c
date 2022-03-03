#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,suc;

    printf("a) Leia um número e imprima seu sucessor.\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&x);
    suc=x+1;
    printf("O sucessor do número %i é o %i!",x,suc);
    return 0;
}
