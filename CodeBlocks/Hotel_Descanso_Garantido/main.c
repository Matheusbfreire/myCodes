#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "Matheus.h"

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int ex=0, codQuartos=0;

    printf("------------------------\n");
    printf("Hotel Descanso Garantido\n");
    printf("------------------------\n");
    printf("======\n");
    printf("OPÇÕES\n");
    printf("======\n");
    printf("[1]Clientes.\n");
    printf("[2]Funcionários.\n");
    printf("[3]Estadias.\n");
    printf("[4]Gerenciar Quartos.\n");
    printf("[5]Sair.\n");
    printf("------------------------\n");

    while (ex!=5) {
        scanf("%i",&ex);
        switch (ex) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                escolha();
                break;
            case 5:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Exercício inexistente.\n");
                break;
        }

        if (ex!=5) {
            printf("\n\n");
            system("pause");
            system("cls");
            printf("======\n");
            printf("OPÇÕES\n");
            printf("======\n");
            printf("------------------------\n");
            printf("[1]Clientes.\n");
            printf("[2]Funcionários.\n");
            printf("[3]Estadias.\n");
            printf("[4]Gerencias quartos.\n");
            printf("[5]Sair.\n");
            printf("------------------------\n");
        }
    }

    return 0;
}
