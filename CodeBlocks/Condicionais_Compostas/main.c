#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int ex01();
int ex02();
int ex03();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha;

    printf("Qual exercício você quer executar?\n");
    printf("\nExercício 1: Verifica se você é maior de idade.\nExercício 2: Verifica se um número é Par ou Ímpar.\nExercício 3: Lanchonete.\n");
    scanf("%i",&escolha);
    switch (escolha) {
    case 1:
        ex01();
    case 2:
        ex02();
    case 3:
        ex03();
    default:
        printf("O exercício não existe!");
    }
    return 0;
}

int ex01()
{
    int idade;

    printf("1.Escreva um programa para ler a idade de uma pessoa e mostrar se a pessoa é ou não maior de idade. A maioridade se estabelece ao alcançar 18  anos.\n");
    printf("Qual sua idade?\n");
    scanf("%i",&idade);
    if (idade<18) {
        printf("Você é menor de idade!");
    } else {
        printf("Você é maior de idade!");
    }
    return 0;
}

int ex02()
{
    int num;

    printf("2.Escreve um programa que leia um número e diga se esse número é par ou ímpar.\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&num);
    if (num%2==0) {
        printf("O número digitado é Par!");
    } else {
        printf("O número digitado é Ímpar!");
    }
    return 0;
}

int ex03()
{
    int item;

    printf("3.O cardápio de uma lanchonete é dado abaixo. Prepare um programa que o código correspondente ao item da lanchonete e mostre a descrição do item e seu valor. Caso for digitado um valor não existente mostre a mensagem código inválido.\n");
    printf("1 -Hambúrguer...............  R$ 30,00\n2 -Cheeseburger............. R$ 35,50\n3 -Fritas................... R$ 20,50 \n4 -Refrigerante............. R$ 10,00\n5 -Milk-shake............... R$ 30,00\n");
    printf("Qual item do cardápio você quer?\n(DIGITE O NÙMERO CORRESPONDENTE AO ITEM)\n");
    scanf("%i",&item);
    switch (item) {
    case 1:
        printf("Você escolheu o Hambúrguer, ele custa R$30,00!");
        break;
    case 2:
        printf("Você escolheu o Cheeseburguer, ele custa R$35,50!");
        break;
    case 3:
        printf("Você escolheu a Fritas, ela custa R$20,50!");
        break;
    case 4:
        printf("Você escolheu o Refrigerante, ele custa R$10,00!");
        break;
    case 5:
        printf("Você escolheu o Milk-Shake, ele custa R$30,00!");
        break;
    default:
        printf("O item escolhido não existe no cardápio!");
    }
}
