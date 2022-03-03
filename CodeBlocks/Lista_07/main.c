#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void menu();
void main_01();
void num();
int fatorial(int n);
void main_02();
int fibonacci(int n);
void main_03();
int soma_fibonacci(int n);
void main_04();
void nums();
int impar1(int n1, int n2);
void main_05();
int impar2(int n1, int n2);

int n=0,n1=0,n2=0;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha=0;

    menu();
    printf("--------------------------------------\n");
    printf("Escolha um programa para ser executado\n(DIGITE -1 PARA PARAR O PROGRAMA)\n");
    printf("--------------------------------------\n");
    scanf("%i",&escolha);
    printf("--------------------------------------\n");
    while (escolha>=0) {
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
            case 4:
                main_04();
                break;
            case 5:
                main_05();
                break;
            default:
                printf("ERRO: O exerc�cio escolhido n�o existe\n");
                printf("--------------------------------------\n");
                break;
        }
        printf("\n\n");
        system("pause");
        system("cls");
        menu();
        printf("--------------------------------------\n");
        printf("Escolha um programa para ser executado\n(DIGITE -1 PARA PARAR O PROGRAMA)\n");
        printf("--------------------------------------\n");
        scanf("%i",&escolha);
        printf("--------------------------------------\n");
    }
    return 0;
}

void menu()
{
    printf("1. Fatorial.\n");
    printf("2. Fibonacci.\n");
    printf("3. Soma fibonacci.\n");
    printf("4. �mpares em um intervalo.\n");
    printf("5. Soma �mpares em um intervalo.\n");
}

void main_01()
{
    int fat=0;

    printf("1 -Elabore uma fun��o para calcular e retornar o Fatorial de um n�mero passado por par�metro. Fa�a tamb�m um programa principal que chame esse procedimento.\n");
    printf("--------------------------------------\n");
    num();
    fat=fatorial(n);
    printf("Fatorial de %i: %i\n",n,fat);
}

void num()
{
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&n);
}

int fatorial(int n)
{
    int fat=1,c=0;

    for (c=n;c>1;c--) {
        fat*=c;
    }

    return fat;
}

void main_02()
{
    int fib=0;

    printf("2 �Elabore uma fun��o que receba um valor passado por par�metro e retorne o termo correspondente ao valor passado da serie de Fibonacci. Exemplo suponha que seja passado o valor 6, ent�o dever� retorna o 6� termo da s�rie ou seja 1,1,2,3,5,8, ou seja, dever� atribuir a vari�vel Fibo valor 8. \n");
    printf("--------------------------------------\n");
    num();
    fib=fibonacci(n);
    printf("%i� termo da s�rie de fibonacci: %i\n",n,fib);
}

int fibonacci(int n)
{
    int fib=0,c=0,t1=0,t2=1;

    if (n==1) {
        fib=1;
    }
    for (c=1;c<n;c++) {
        fib=t1+t2;
        t1=t2;
        t2=fib;
    }

    return fib;
}

void main_03()
{
    int soma_fib=0;

    printf("3 �Elabore uma fun��o que receba um valor passado por par�metro e retorne a soma dos termos da serie de Fibonacci do primeiro termo at� o termo passado. Exemplo suponha que seja passado o valor 6, ent�o dever� devolver a soma de 1+1+2+3+5+8, ou seja,  20.\n");
    printf("--------------------------------------\n");
    num();
    soma_fib=soma_fibonacci(n);
    printf("Soma dos %i primeiros termos da s�rie de fibonacci: %i",n,soma_fib);
}

int soma_fibonacci(int n)
{
    int soma_fib=1,fib=0,c=0,t1=0,t2=1;

    for (c=1;c<n;c++) {
        fib=t1+t2;
        t1=t2;
        t2=fib;
        soma_fib+=fib;
    }

    return soma_fib;
}

void main_04()
{
    int impar=0;

    printf("4 �Elabore uma fun��o que receba dois valores passados por par�metro e retorne a quantidade de n�meros �mpares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, dever� devolver 2, pois existem os n�meros impares 3 e 5 no intervalo.\n");
    printf("--------------------------------------\n");
    nums();
    impar=impar1(n1,n2);
    printf("O intervalo %i<x<%i possui %i n�meros �MPARES.\n",n1,n2,impar);
}

void nums()
{
    int troca=0;

    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&n1);
    printf("Digite outro n�mero inteiro qualquer:\n");
    scanf("%i",&n2);
    if (n2<n1) {
        troca=n1;
        n1=n2;
        n2=troca;
    }
}

int impar1(int n1, int n2)
{
    int c=0,impar=0;

    for (c=n1;c<=n2;c++) {
        if (c%2!=0) {
            impar++;
        }
    }

    return impar;
}

void main_05()
{
    int impar=0;

    printf("5 -Elabore uma fun��o que receba dois valores passados por par�metro e retorne soma dos n�meros �mpares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, dever� devolver 8, pois a soma dos n�meros impares 3 e 5 no intervalo � 8.\n");
    printf("--------------------------------------\n");
    nums();
    impar=impar2(n1,n2);
    printf("Soma dos n�meros �MPARES do intervalo %i<x<%i: %i",n1,n2,impar);
}

int impar2(int n1, int n2)
{
    int c=0,impar=0;

    for (c=n1;c<=n2;c++) {
        if (c%2!=0) {
            impar+=c;
        }
    }

    return impar;
}
