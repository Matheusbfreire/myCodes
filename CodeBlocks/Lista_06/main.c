#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

void menu();
void main_01();
void lernum();
void fatorial(int n);
void main_02();
void fibonacci(int n);
void main_03();
void soma_fibonacci(int n);
void main_04();
void lernum2();
void verificar_impar(int n1, int n2);
void main_05();
void verificar_impar2(int n1, int n2);

int num=0,num2=0,fib=0,impar=0,fat=0;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha=0;

    printf("----------------------------------\n");
    printf("Escolha um exercício para executar:\n");
    printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
    printf("----------------------------------\n");
    menu();
    printf("----------------------------------\n");
    scanf("%i",&escolha);
    printf("----------------------------------\n");
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
            case 4:
                main_04();
                break;
            case 5:
                main_05();
                break;
            default:
                printf("-----------------------------------------\n");
                printf("ERRO: Esse exercício não existe na lista!\n");
                printf("-----------------------------------------\n");
        }
        printf("\n\n");
        system("pause");
        system("cls");
        printf("----------------------------------\n");
        printf("Escolha um exercício para executar:\n");
        printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
        printf("----------------------------------\n");
        menu();
        printf("----------------------------------\n");
        scanf("%i",&escolha);
        printf("----------------------------------\n");
    }
    return 0;
}

void menu()
{
    printf("1. Fatorial.\n");
    printf("2. Fibonacci.\n");
    printf("3. Soma Fibonacci.\n");
    printf("4. Números ímpares.\n");
    printf("5. Soma números ímpares.\n");
}

void main_01()
{
    printf("1 -Elabore um procedimento para calcular o Fatorial de um número passado por parâmetro. A resposta deverá ser retornada em uma variável definida como global de nome FAT. Faça também um programa principal que chame esse procedimento.\n");
    printf("----------------------------------\n");
    lernum();
    fatorial(num);
    printf("Fatorial de %i: %i",num,fat);
}

void lernum()
{
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&num);
}

void fatorial(int n)
{
    fat=1;

    for (;n>1;n--) {
        fat*=n;
    }
}

void main_02()
{
    printf("2 –Elabore um procedimento que receba um valor passado por parâmetro. Esse procedimento deverá devolver na variável global Fibo termo correspondente ao valor passado da serie de Fibonacci. Exemplo suponha que seja passado o valor 6, então deverá retorna o 6º termo da série ou seja 1,1,2,3,5,8, ou seja, deverá atribuir a variável Fibo valor 8. \n");
    printf("----------------------------------\n");
    lernum();
    fibonacci(num);
    printf("%iº termo da série de Fibonacci: %i",num,fib);
}

void fibonacci(int n)
{
    int t1=0,t2=0;

    t1=0;
    t2=1;

    if (n==1) {
        fib=1;
    } else {
        for (;n>1;n--) {
            fib=t1+t2;
            t1=t2;
            t2=fib;
        }
    }
}

void main_03()
{
    printf("3 –Elabore um procedimento que receba um valor passado por parâmetro. Esse procedimento deverá devolver na variável global Fiba soma dos termos da serie de Fibonacci do primeiro termo até o termo passado. Exemplo suponha que seja passado o valor 6, então deverá atribuir a variável Fiba soma de 1+1+2+3+5+8, ou seja, Fib= 20.\n");
    printf("----------------------------------\n");
    lernum();
    soma_fibonacci(num);
    if (num==1) {
        printf("Soma do %iº termo da série de Fibonacci: %i",num,fib);
    } else {
        printf("Soma dos %i primeiros termos da série de Fibonacci: %i",num,fib);
    }
}

void soma_fibonacci(int n)
{
    int t1=0,t2=0,soma=0;

    t1=0;
    t2=1;
    fib=1;

    for (;n>1;n--) {
        soma=t1+t2;
        t1=t2;
        t2=soma;
        fib+=soma;
    }
}

void main_04()
{
    printf("4 –Elabore um procedimento que receba dois valores passados por parâmetro. Esse procedimento  deverá atribuir a variável impar, a quantidade de números ímpares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, deverá devolver impar=2, pois existem os números impares 3 e 5 no intervalo.\n");
    printf("----------------------------------\n");
    lernum2();
    verificar_impar(num, num2);
    printf("Total de números ÍMPARES entre %i e %i: %i",num,num2,impar);
}

void lernum2()
{
    int troca=0;

    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&num);
    printf("Digite outro número inteiro qualquer:\n");
    scanf("%i",&num2);
    if (num>num2) {
        troca=num;
        num=num2;
        num2=troca;
    }
}

void verificar_impar(int n1, int n2)
{
    int c=0;

    impar=0;

    for (c=n1;c<=n2;c++) {
        if (c%2!=0) {
            impar++;
        }
    }
}

void main_05()
{
    printf("5 -Elabore um procedimento que receba dois valores passados por parâmetro. Esse procedimento  deverá atribuir a variável impar, a soma dos números ímpares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, deverá devolver impar=8, pois a soma dos números impares 3 e 5 no intervalo é 8.\n");
    printf("----------------------------------\n");
    lernum2();
    verificar_impar2(num, num2);
    printf("Soma dos números ÍMPARES entre %i e %i: %i",num,num2,impar);
}

void verificar_impar2(int n1, int n2)
{
    int c=0;

    impar=0;

    for (c=n1;c<=n2;c++) {
        if (c%2!=0) {
            impar+=c;
        }
    }
}
