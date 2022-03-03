#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int idade;

    printf("1.Escreva um programa para ler a idade de uma pessoa e mostrar se a pessoa é ou não maior de idade. A maioridade se estabelece ao alcançar 18 anos.\n");
    printf("Qual a sua idade?\n");
    scanf("%i",&idade);
    if (idade<18) {
        printf("Você é Menor de idade!\n");
    }
    if (idade>=18) {
        printf("Você é Maior de idade!\n");
    }
    return 0;
}
