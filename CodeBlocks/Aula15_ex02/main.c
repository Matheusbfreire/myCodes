#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int num;

    printf("2.Escreve um programa que leia um n�mero e diga se esse n�mero � par ou �mpar.\n");
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&num);
    if (num%2==0) {
        printf("O n�mero digitado � Par!");
    } else {
        printf("O n�mero digitado � �mpar!");
    }
    return 0;
}
