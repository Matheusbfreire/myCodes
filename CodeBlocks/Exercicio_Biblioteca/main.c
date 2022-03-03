#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "MB_Matheus.h"

void menu();
void parametros();
void parametros_intervalo();

int n1=0,n2=0;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha=0;

    menu();
    printf("----------------------------------------\n");
    printf("Escolha um exercício para ser executado:\n");
    printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
    printf("----------------------------------------\n");
    scanf("%i",&escolha);
    while (escolha!=-1) {
        if (escolha!=-1){
            switch (escolha) {
                case 1:
                    parametros();
                    printf("%i x %i = %i",n1,n2,multiplicacao(n1,n2));
                    break;
                case 2:
                    parametros_intervalo();
                    printf("Soma dos números do itervalo %i <= X <= %i: %i",n1,n2,soma_intervalo(n1,n2));
                    break;
                case 3:
                    parametros_intervalo();
                    printf("Número de ímpares do itervalo %i <= X <= %i: %i",n1,n2,impares_intervalo(n1,n2));
                    break;
                default:
                    printf("ERRO: Programa não existe.\n");
                    printf("--------------------------\n");
                    break;
            }
            printf("\n\n");
            system("pause");
            system("cls");
            menu();
            printf("----------------------------------------\n");
            printf("Escolha um exercício para ser executado:\n");
            printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
            printf("----------------------------------------\n");
            scanf("%i",&escolha);
        }
    }

    return 0;
}

void menu()
{
    printf("1. Multiplicação.\n");
    printf("2. Soma de um intervalo.\n");
    printf("3. Ímpares de um intervalo.\n");
}

void parametros()
{
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&n1);
    printf("Digite outro número inteiro qualquer:\n");
    scanf("%i",&n2);
}

void parametros_intervalo()
{
    int troca=0;

    printf("Limite inicial do intervalo:\n");
    scanf("%i",&n1);
    printf("Limite final do intervalo:\n");
    scanf("%i",&n2);
    if (n2<n1) {
        troca=n1;
        n1=n2;
        n2=troca;
    }
}
