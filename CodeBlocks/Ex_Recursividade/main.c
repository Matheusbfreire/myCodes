#include <stdio.h>
#include <stdlib.h>


void main_01();
int fat(int n);
void main_02();
int fib(int n);

int main()
{


    int escolha=0;

    printf("Escolha um exercício:\n");
    printf("1. Fatorial.\n");
    printf("2. Fibonacci.\n");
    scanf("%i",&escolha);
    while (escolha!=-1) {
        switch (escolha) {
            case 1:
                main_01();
                break;
            case 2:
                main_02();
                break;
            default:
                printf("ERRO: Exercício não existe!");
                break;
        printf("Escolha um exercício:\n");
        printf("1. Fatorial.\n");
        printf("2. Fibonacci.\n");
        scanf("%i",&escolha);
        }
    }

    return 0;
}

void main_01()
{

}

int fat(int n)
{

}

void main_02()
{

}

int fib(int n)
{

}
