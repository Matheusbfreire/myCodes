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
        printf("Qual exercício você quer executar?\n(ESCOLHA UM NÚMERO ENTRE 1 E 3)\n(PARA PARAR O PROGRAMA ESCREVA UM NÚMERO NEGATIVO)\n");
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
                    printf("O exercício não existe na lista!\n");
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

    printf("1.Escrever um algoritmo, para calcular e imprimir o fatorial de um número lido do teclado.\n");
    printf("Digite um número inteiro positivo qualquer:\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("ERRO: Digite um número POSITIVO!\n");
        printf("-------------------------------------------\n");
        printf("Digite um número inteiro positivo qualquer:\n");
        scanf("%i",&n);
    }
    printf("O fatorial de %i é igual a ",n);
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

    printf("2.A série de Fibonacci é formada pela sequência:\n1,1,2,3,5,8,13,21,34,...\nEscreva um algoritmo que peça um número N maior que 2. Gere e imprima a série de 1 até este enésimo termo.\n");
    printf("Você quer ver a série de Fibonacci até qual termo?\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("ERRO: Digite um número POSITIVO!\n");
        printf("-------------------------------------------\n");
        printf("Você quer ver a série de Fibonacci até qual termo?\n");
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

    printf("3.O numero 3025 possui a seguinte característica:\n30 + 25 = 55\n55^2 = 3025\nQuantos e quais são os números de 4 dígitos possuem essa característica?\n");
    printf("São eles:\n");
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
