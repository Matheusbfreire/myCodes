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
                printf("ERRO: O exercício escolhido não existe\n");
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
    printf("4. Ímpares em um intervalo.\n");
    printf("5. Soma ímpares em um intervalo.\n");
}

void main_01()
{
    int fat=0;

    printf("1 -Elabore uma função para calcular e retornar o Fatorial de um número passado por parâmetro. Faça também um programa principal que chame esse procedimento.\n");
    printf("--------------------------------------\n");
    num();
    fat=fatorial(n);
    printf("Fatorial de %i: %i\n",n,fat);
}

void num()
{
    printf("Digite um número inteiro qualquer:\n");
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

    printf("2 –Elabore uma função que receba um valor passado por parâmetro e retorne o termo correspondente ao valor passado da serie de Fibonacci. Exemplo suponha que seja passado o valor 6, então deverá retorna o 6º termo da série ou seja 1,1,2,3,5,8, ou seja, deverá atribuir a variável Fibo valor 8. \n");
    printf("--------------------------------------\n");
    num();
    fib=fibonacci(n);
    printf("%iº termo da série de fibonacci: %i\n",n,fib);
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

    printf("3 –Elabore uma função que receba um valor passado por parâmetro e retorne a soma dos termos da serie de Fibonacci do primeiro termo até o termo passado. Exemplo suponha que seja passado o valor 6, então deverá devolver a soma de 1+1+2+3+5+8, ou seja,  20.\n");
    printf("--------------------------------------\n");
    num();
    soma_fib=soma_fibonacci(n);
    printf("Soma dos %i primeiros termos da série de fibonacci: %i",n,soma_fib);
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

    printf("4 –Elabore uma função que receba dois valores passados por parâmetro e retorne a quantidade de números ímpares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, deverá devolver 2, pois existem os números impares 3 e 5 no intervalo.\n");
    printf("--------------------------------------\n");
    nums();
    impar=impar1(n1,n2);
    printf("O intervalo %i<x<%i possui %i números ÍMPARES.\n",n1,n2,impar);
}

void nums()
{
    int troca=0;

    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&n1);
    printf("Digite outro número inteiro qualquer:\n");
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

    printf("5 -Elabore uma função que receba dois valores passados por parâmetro e retorne soma dos números ímpares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, deverá devolver 8, pois a soma dos números impares 3 e 5 no intervalo é 8.\n");
    printf("--------------------------------------\n");
    nums();
    impar=impar2(n1,n2);
    printf("Soma dos números ÍMPARES do intervalo %i<x<%i: %i",n1,n2,impar);
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
