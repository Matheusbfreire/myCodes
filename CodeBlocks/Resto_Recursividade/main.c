#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void menu();
void main_01();
void main_02();
int resto_divisao(int a, int b);
void main_03();
int resto_divisao_recursividade(int a, int b);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha=0;

    menu();
    printf("---------------------\n");
    printf("Escolha um exerc�cio:\n");
    printf("---------------------\n");
    printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
    printf("---------------------------------\n");
    scanf("%i",&escolha);
    while (escolha!=-1) {
        switch (escolha) {
            case 1:
                main_01();
                break;
            case 2:
                main_02();
                break;
            case 3:
                main_03();
                break;
            default:
                printf("ERRO: Exerc�cio n�o existe!\n");
                printf("---------------------------\n");
                break;
        }
        printf("\n\n");
        system("pause");
        system("cls");
        menu();
        printf("---------------------\n");
        printf("Escolha um exerc�cio:\n");
        printf("---------------------\n");
        printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
        printf("---------------------------------\n");
        scanf("%i",&escolha);
    }
    return 0;
}

void menu()
{
    printf("1. Programa.\n");
    printf("2. Fun��o.\n");
    printf("3. Fun��o recursiva.\n");
}

void main_01()
{
    int a=0,b=0,resto=0;

    printf("Escreva um n�mero:\n");
    scanf("%i",&a);
    printf("Escreva outro n�mero:\n");
    scanf("%i",&b);
    printf("O resto da divis�o entre %i e %i �: ",a,b);
    if (a<b) {
        resto=0;
    } else {
        while (a>=b) {
            resto=a-b;
            a=resto;
        }
    }
    printf("%i",resto);
}

void main_02()
{
    int a=0,b=0;

    printf("Escreva um n�mero:\n");
    scanf("%i",&a);
    printf("Escreva outro n�mero:\n");
    scanf("%i",&b);
    printf("O resto da divis�o entre %i e %i �: %i",a,b,resto_divisao(a,b));
}

int resto_divisao(int a, int b)
{
    int resto=0;

    if (a<b) {
        resto=0;
    } else {
        while (a>=b) {
            resto=a-b;
            a=resto;
        }
    }
    return resto;
}

void main_03()
{
    int a=0,b=0;

    printf("Escreva um n�mero:\n");
    scanf("%i",&a);
    printf("Escreva outro n�mero:\n");
    scanf("%i",&b);
    printf("O resto da divis�o entre %i e %i �: %i",a,b,resto_divisao_recursividade(a,b));
}

int resto_divisao_recursividade(int a, int b)
{
    if (a<b) {
        return a;
    } else {
        return resto_divisao_recursividade(a-b,b);
    }
}
