#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n;

    printf("2.Escreve um programa que leia um número e diga se esse número é par ou ímpar.\n");
    printf("Digite um número qualquer:\n");
    scanf("%i",&n);
    if (n%2==0) {
        printf("O número digitado é Par!");
    }
    if (n%2!=0) {
        printf("O número digitado é Ímpar!");
    }
    return 0;
}
