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

    printf("Qual exerc�cio voc� quer executar?\n");
    printf("\nExerc�cio 1: Verifica se voc� � maior de idade.\nExerc�cio 2: Verifica se um n�mero � Par ou �mpar.\nExerc�cio 3: Lanchonete.\n");
    scanf("%i",&escolha);
    switch (escolha) {
    case 1:
        ex01();
    case 2:
        ex02();
    case 3:
        ex03();
    default:
        printf("O exerc�cio n�o existe!");
    }
    return 0;
}

int ex01()
{
    int idade;

    printf("1.Escreva um programa para ler a idade de uma pessoa e mostrar se a pessoa � ou n�o maior de idade. A maioridade se estabelece ao alcan�ar 18  anos.\n");
    printf("Qual sua idade?\n");
    scanf("%i",&idade);
    if (idade<18) {
        printf("Voc� � menor de idade!");
    } else {
        printf("Voc� � maior de idade!");
    }
    return 0;
}

int ex02()
{
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

int ex03()
{
    int item;

    printf("3.O card�pio de uma lanchonete � dado abaixo. Prepare um programa que o c�digo correspondente ao item da lanchonete e mostre a descri��o do item e seu valor. Caso for digitado um valor n�o existente mostre a mensagem c�digo inv�lido.\n");
    printf("1 -Hamb�rguer...............  R$ 30,00\n2 -Cheeseburger............. R$ 35,50\n3 -Fritas................... R$ 20,50 \n4 -Refrigerante............. R$ 10,00\n5 -Milk-shake............... R$ 30,00\n");
    printf("Qual item do card�pio voc� quer?\n(DIGITE O N�MERO CORRESPONDENTE AO ITEM)\n");
    scanf("%i",&item);
    switch (item) {
    case 1:
        printf("Voc� escolheu o Hamb�rguer, ele custa R$30,00!");
        break;
    case 2:
        printf("Voc� escolheu o Cheeseburguer, ele custa R$35,50!");
        break;
    case 3:
        printf("Voc� escolheu a Fritas, ela custa R$20,50!");
        break;
    case 4:
        printf("Voc� escolheu o Refrigerante, ele custa R$10,00!");
        break;
    case 5:
        printf("Voc� escolheu o Milk-Shake, ele custa R$30,00!");
        break;
    default:
        printf("O item escolhido n�o existe no card�pio!");
    }
}
