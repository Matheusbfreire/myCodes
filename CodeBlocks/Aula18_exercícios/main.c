#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void ex01();
void ex02();
void ex03();
void ex04();
void ex05();
void ex06();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha;

    escolha=0;

    while (escolha>=0) {
        printf("Qual exerc�cio voc� quer executar?\n(ESCOLHA UM N�MERO ENTRE 1 E 6)\n(PARA PARAR O PROGRAMA ESCREVA UM N�MERO NEGATIVO)\n");
        scanf("%i",&escolha);
        printf("-------------------------------------------\n");
        if (escolha>=0) {
            switch (escolha) {
                case 1:
                    ex01();
                    break;
                case 2:
                    ex02();
                    break;
                case 3:
                    ex03();
                    break;
                case 4:
                    ex04();
                    break;
                case 5:
                    ex05();
                    break;
                case 6:
                    ex06();
                    break;
                default:
                    printf("O exerc�cio n�o existe na lista!\n");
                    printf("-------------------------------------------\n");
            }
         } else {
            printf("Obrigado por usar meu programa! :)\n");
            printf("-------------------------------------------\n");
        }
    }
    return 0;
}

void ex01()
{
    int n;

    n = 1;

    printf("1.Escrever a sequencia de 1 at� 10.\n");
    while (n<=10) {
        printf("%i\n",n);
        n++;

    }
    printf("-------------------------------------------\n");
}

void ex02()
{
    int n;

    n=10;

    printf("2.Escrever a sequencia de 10 at� 1.\n");
    while (n>=1) {
        printf("%i\n",n);
        n--;
    }
    printf("-------------------------------------------\n");
}

void ex03()
{
    int n,c;

    c=1;

    printf("3.Leia um n�mero e imprima os n�meros impares de 1 at� esse n�mero.\n");
    printf("Digite um n�mero inteiro positivo qualquer:\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("ERRO: Digite um n�mero positivo!\n");
        printf("-------------------------------------------\n");
        printf("Digite um n�mero inteiro positivo qualquer:\n");
        scanf("%i",&n);
    }
    printf("Os n�meros �mpares de 1 at� %i s�o:\n",n);
    while (c<=n) {
        printf("%i\n",c);
        c+=2;
    }
    printf("-------------------------------------------\n");
}

void ex04()
{
    int n,fat;

    fat=1;

    printf("4.Escrever um algoritmo, para calcular e imprimir o fatorial de um n�mero lido do teclado.\n");
    printf("Escreva um n�mero inteiro qualquer:\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("ERRO: Digite um n�mero positivo!\n");
        printf("-------------------------------------------\n");
        printf("Escreva um n�mero inteiro qualquer:\n");
        scanf("%i",&n);
    }
    printf("O fatorial de %i � igual a ",n);
    while (n>1) {
        fat*=n;
        n--;
    }
    printf("%i!\n",fat);
    printf("-------------------------------------------\n");
}

void ex05()
{
    int n,c,cont,t1,t2;

    cont=2;
    t1=0;
    t2=1;

    printf("5.A s�rie de Fibonacci � formada pela sequ�ncia:\n1,1,2,3,5,8,13,21,34,...\nEscreva um algoritmo que pe�a um n�mero N maior que 2. Gere e imprima a s�rie de 1 at� este en�simo termo.\n");
    printf("At� qual termo voc� quer ver a sequ�ncia de Fibonacci?\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("ERRO: Digite um n�mero positivo!\n");
        printf("-------------------------------------------\n");
        printf("At� qual termo voc� quer ver a sequ�ncia de Fibonacci?\n");
        scanf("%i",&n);
    }
    printf("1,");
    while (cont<=n) {
        c=t1+t2;
        t1=t2;
        t2=c;
        printf("%i,",c);
        cont+=1;
    }
    printf("...");
    printf("\n-------------------------------------------\n");
}

void ex06()
{
    int n,p1,p2,soma,soma2,cont;

    cont=0;
    n=1000;

    printf("6.O numero 3025 possui a seguinte caracter�stica:\n30 + 25 = 55\n55^2 = 3025\nQuantos e quais s�o os n�meros de 4 d�gitos possuem essa caracter�stica?\n");
    printf("S�o eles:\n");
    while (n>=1000 && n<=9999) {
        p1=floor(n/100);
        p2=n%100;
        soma=p1+p2;
        soma2=soma*soma;
        if (soma2==n) {
                cont+=1;
                printf("%i- %i\n",cont,n);
        }
        n+=1;
    }
    printf("-------------------------------------------\n");
}
