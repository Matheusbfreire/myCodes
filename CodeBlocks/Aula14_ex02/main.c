#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n;

    printf("2.Escreve um programa que leia um n�mero e diga se esse n�mero � par ou �mpar.\n");
    printf("Digite um n�mero qualquer:\n");
    scanf("%i",&n);
    if (n%2==0) {
        printf("O n�mero digitado � Par!");
    }
    if (n%2!=0) {
        printf("O n�mero digitado � �mpar!");
    }
    return 0;
}
