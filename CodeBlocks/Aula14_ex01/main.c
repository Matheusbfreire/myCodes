#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int idade;

    printf("1.Escreva um programa para ler a idade de uma pessoa e mostrar se a pessoa � ou n�o maior de idade. A maioridade se estabelece ao alcan�ar 18 anos.\n");
    printf("Qual a sua idade?\n");
    scanf("%i",&idade);
    if (idade<18) {
        printf("Voc� � Menor de idade!\n");
    }
    if (idade>=18) {
        printf("Voc� � Maior de idade!\n");
    }
    return 0;
}
