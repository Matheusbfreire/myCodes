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
void ex07();
void ex08();
void ex09();
void ex10();
void ex11();
void ex12();
void ex13();
void ex14();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int esc;

    printf("Escolha um número entre 1 e 14:\n(DIGITE UM NÚMERO NEGATIVO OU 0 PARA PARAR O PROGRAMA)\n");
    scanf("%i",&esc);
    if (esc<=0) {
        printf("--------------------------------------\n");
        printf("Obrigado por usar meu programa! :)\n");
        printf("--------------------------------------\n");
    } else {
        while (esc>=15) {
            printf("--------------------------------------\n");
            printf("O exercício não existe na lista!\nTente novamente!\n");
            printf("--------------------------------------\n");
            printf("Escolha um número entre 1 e 14:\n(DIGITE UM NÚMERO NEGATIVO OU 0 PARA PARAR O PROGRAMA)\n");
            scanf("%i",&esc);
            if (esc<=0) {
                printf("--------------------------------------\n");
                printf("Obrigado por usar meu programa! :)");
                printf("--------------------------------------\n");
            }
        }
        switch (esc) {
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
            case 7:
                ex07();
                break;
            case 8:
                ex08();
                break;
            case 9:
                ex09();
                break;
            case 10:
                ex10();
                break;
            case 11:
                ex11();
                break;
            case 12:
                ex12();
                break;
            case 13:
                ex13();
                break;
            case 14:
                ex14();
                break;
        }
    }
    return 0;
}

void ex01()
{
    int n,li,men,c1,c2,c,x;

    printf("Digite um número inteiro para ser usada nas linhas e colunas de uma matriz quadrada:\n");
    scanf("%i",&n);
    li=n*n;
    char lista[li];
    c1=1;
    c2=1;
    for (c=0;0<=c && c<=li;c++) {
        printf("a%i%i = ",c1,c2);
        scanf("%i",&x);
        c2++;
        if (c2%n==1) {
            c1++;
            c2=1;
        }
        if (c1==1) {
            lista[c]=x;
        } else {
            for (cont=0;0<=cont && cont<=n-1;cont++) {
                if ()
            }
        }
    }
}

void ex02()
{

}

void ex03()
{

}

void ex04()
{

}

void ex05()
{

}

void ex06()
{

}

void ex07()
{

}

void ex08()
{

}

void ex09()
{

}

void ex10()
{

}

void ex11()
{

}

void ex12()
{

}

void ex13()
{

}

void ex14()
{

}
