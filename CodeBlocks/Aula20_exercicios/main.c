#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void ex01();
void ex02();
void ex03();
void ex04();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha;

    escolha=0;

    while (escolha>=0) {
        printf("Qual exerc�cio voc� quer executar?\n(ESCOLHA UM N�MERO ENTRE 1 E 3)\n(PARA PARAR O PROGRAMA ESCREVA UM N�MERO NEGATIVO)\n");
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
    int n,fat;

    printf("1.Escrever um algoritmo, para calcular e imprimir o fatorial de um n�mero lido do teclado.\n");
    printf("Digite um n�mero inteiro positivo qualquer:\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("ERRO: Digite um n�mero POSITIVO!\n");
        printf("-------------------------------------------\n");
        printf("Digite um n�mero inteiro positivo qualquer:\n");
        scanf("%i",&n);
    }
    printf("O fatorial de %i � igual a ",n);
    for (fat=1;n>0;n--) {
        fat*=n;
    }
    printf("%i!\n",fat);
    printf("-------------------------------------------\n");
}

void ex02()
{
    int n,c,t1,t2,soma;

    t1=0;
    t2=1;

    printf("2.A s�rie de Fibonacci � formada pela sequ�ncia:\n1,1,2,3,5,8,13,21,34,...\nEscreva um algoritmo que pe�a um n�mero N maior que 2. Gere e imprima a s�rie de 1 at� este en�simo termo.\n");
    printf("Voc� quer ver a s�rie de Fibonacci at� qual termo?\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("ERRO: Digite um n�mero POSITIVO!\n");
        printf("-------------------------------------------\n");
        printf("Voc� quer ver a s�rie de Fibonacci at� qual termo?\n");
        scanf("%i",&n);
    }
    printf("1,");
    for (c=2;c<=n;c++) {
        soma=t1+t2;
        t1=t2;
        t2=soma;
        printf("%i,",soma);
    }
    printf("...\n");
    printf("-------------------------------------------\n");
}

void ex03()
{
    int n,p1,p2,soma,c;

    p1=0;
    p2=0;
    soma=0;
    c=0;

    printf("3.O numero 3025 possui a seguinte caracter�stica:\n30 + 25 = 55\n55^2 = 3025\nQuantos e quais s�o os n�meros de 4 d�gitos possuem essa caracter�stica?\n");
    printf("S�o eles:\n");
    for (n=1000;1000<=n && n<=9999;n++) {
        p1=floor(n/100);
        p2=n%100;
        soma=p1+p2;
        soma=soma*soma;
        if (soma==n) {
            c++;
            printf("%i- %i\n",c,n);
        }
    }
    printf("-------------------------------------------\n");
}
