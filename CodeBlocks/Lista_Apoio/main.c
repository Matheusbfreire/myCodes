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

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha;

    escolha=0;

    while (escolha>=0) {
        printf("Qual exercício você quer executar?\n(ESCOLHA UM NÚMERO ENTRE 1 E 10)\n(PARA PARAR O PROGRAMA ESCREVA UM NÚMERO NEGATIVO)\n");
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
    int n,n1,n2;

    printf("1. Escreva um programa que:\na)Imprima os números inteiros entre 10 e 50 [10, 50]:\n");
    for (n=10;10<=n && n<=50;n++) {
        printf("%i ",n);
    }
    printf("\nb)Leia dois valores e imprima os números inteiros neste intervalo o primeiro valor deverá ser menor que o segundo valor\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&n1);
    printf("Digite outro número interio qualquer:\n(MENOR QUE O PRIMEIRO VALOR DIGITADO)\n");
    scanf("%i",&n2);
    while (n2>n1 || n1==n2) {
        printf("ERRO: Digite um número menor que o primeiro número digitado!\n");
        printf("-------------------------------------------\n");
        printf("Digite outro número interio qualquer:\n(MENOR QUE O PRIMEIRO VALOR DIGITADO)\n");
        scanf("%i",&n2);
    }
    for (n=n2;n2<=n && n<=n1;n++) {
        printf("%i ",n);
    }
    printf("\nc)Leia dois valores e imprima os números inteiros neste intervalo pode ser crescente ou decrescente\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&n1);
    printf("Digite outro número interio qualquer:\n");
    scanf("%i",&n2);
    while (n1==n2) {
        printf("ERRO: Digite um número diferente que o primeiro número digitado!\n");
        printf("-------------------------------------------\n");
        printf("Digite outro número interio qualquer:\n");
        scanf("%i",&n2);
    }
    if (n2>n1) {
        for (n=n1;n1<=n && n<=n2;n++) {
        printf("%i ",n);
        }
    } else {
        for (n=n1;n1>=n && n>=n2;n--) {
        printf("%i ",n);
        }
    }
    printf("\n-------------------------------------------\n");
}

void ex02()
{
    float n,rad,tang,coss,sen;

    printf("2. Crie a tabela do seno, cosseno e tangente dos valores entre 1 e 90 considere PI com 6 casas decimais\n");
    printf("-------------------------------------------\n");
    printf("   SENO   COSSENO  TANGENTE\n");
    for (n=1;1<=n && n<=90;n++) {
        rad=n*(3.141592/180);
        sen=sin(rad);
        coss=cos(rad);
        tang=tan(rad);
        printf("%.0f  %.4f  %.4f  %.4f\n",n,sen,coss,tang);
    }
    printf("-------------------------------------------\n");
}

void ex03()
{
    int i;

    printf("3. Mostre a tabela ASCII (código decimal, caracter para os códigos de 0 a 127\n");
    for (i=0;i<=127;i++) {
        printf("%3i - %c\n",i,i);
    }
    printf("-------------------------------------------\n");
}

void ex04()
{
    int n,n1,soma;

    n=3;

    printf("4. Escreva um programa que mostre a soma dos valores de 1 a 10 mostrando os resultados parciais\n1. 1 + 2 = 3\n2. 3 + 3 = 6...\n");
    printf("-------------------------------------------\n");
    printf("1 + 2 = 3\n");
    for (soma=3;3<=n && n<=10;n++) {
        n1=soma+n;
        printf("%i + %i = %i\n",soma,n,n1);
        soma=n1;
    }
    printf("-------------------------------------------\n");
}

void ex05()
{
    int n,n1,n2,c;

    c=0;

    printf("5. Escrever um programa que leia dois valores e imprima a soma de todos os números inteiros impares neste intervalo\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&n1);
    printf("Digite outro número interio qualquer:\n");
    scanf("%i",&n2);
    while (n1==n2) {
        printf("ERRO: Digite um número diferente que o primeiro número digitado!\n");
        printf("-------------------------------------------\n");
        printf("Digite outro número interio qualquer:\n");
        scanf("%i",&n2);
    }
    printf("Irei mostrar os números ímpares de forma crescente no intervalo fornecido e a soma deles:\n");
    if (n1>n2) {
        for (n=n2;n2<=n && n<=n1;n++) {
            if (n%2!=0) {
                printf("%i ",n);
                c+=n;
            }
        }
        printf("\nA soma desses núemros é: %i\n",c);
    } else {
        for (n=n1;n1<=n && n<=n2;n++) {
            if (n%2!=0) {
                printf("%i ",n);
                c+=n;
            }
        }
        printf("\nA soma desses núemros é: %i\n",c);
    }
    printf("-------------------------------------------\n");
}

void ex06()
{
    int n,n1,n2,c;

    c=0;

    printf("6. Escrever um programa que leia dois valores e imprima a soma de todos os números inteiros impares e que sejam múltiplos de três neste intervalo\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&n1);
    printf("Digite outro número interio qualquer:\n");
    scanf("%i",&n2);
    while (n1==n2) {
        printf("ERRO: Digite um número diferente que o primeiro número digitado!\n");
        printf("-------------------------------------------\n");
        printf("Digite outro número interio qualquer:\n");
        scanf("%i",&n2);
    }
    printf("Irei mostrar os números ímpares de forma crescente no intervalo fornecido e a soma deles:\n");
    if (n1>n2) {
        for (n=n2;n2<=n && n<=n1;n++) {
            if (n%2!=0 && n%3==0) {
                printf("%i ",n);
                c+=n;
            }
        }
        printf("\nA soma desses núemros é: %i\n",c);
    } else {
        for (n=n1;n1<=n && n<=n2;n++) {
            if (n%2!=0 && n%3==0) {
                printf("%i ",n);
                c+=n;
            }
        }
        printf("\nA soma desses núemros é: %i\n",c);
    }
    printf("-------------------------------------------\n");
}

void ex07()
{
    int n,c,a,b;

    c=0;

    printf("7. Ler dois valores (a,b). Mostrar entre 1 e 1000 quantos e quais números são divisíveis por a e b ao mesmo tempo\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&a);
    printf("Digite outro número interio qualquer:\n");
    scanf("%i",&b);
    printf("----------------------------------------------\n");
    printf("Valores divisíveis por %i e %i ao mesmo tempo\n",a,b);
    printf("----------------------------------------------\n");
    for (n=1;1<=n && n<=1000;n++) {
        if (n%a==0 && n%b==0) {
            c++;
            printf("%i. %i\n",c,n);
        }
    }
    printf("-------------------------------------------\n");
}

void ex08()
{
    int n,c;

    printf("8. Ler um valor e mostrar todos seus divisores\n");
    printf("Digite um valor qualquer:\n");
    scanf("%i",&n);
    printf("-------------------------------------------\n");
    printf("Os divisores de %i são:\n",n);
    printf("-------------------------------------------\n");
    for (c=1;1<=c && c<=n;c++) {
        if (n%c==0) {
            printf("%i ",c);
        }
    }
    printf("\n-------------------------------------------\n");
}

void ex09()
{
    int n,c,n1,n2;

    n=1;

    printf("9. Ler dois valores e mostrar para cada número, neste intervalo seus divisores.\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&n1);
    printf("Digite outro número interio qualquer:\n");
    scanf("%i",&n2);
    while (n1==n2) {
        printf("ERRO: Digite um número diferente que o primeiro número digitado!\n");
        printf("-------------------------------------------\n");
        printf("Digite outro número interio qualquer:\n");
        scanf("%i",&n2);
    }
    printf("-------------------------------------------\n");
    if (n1>n2) {
        for (c=n2;n2<=c && c<=n1;c++) {
                printf("Divisores de %i: ",c);
                for (n=1;1<=n && n<=c;n++) {
                    if (c%n==0) {
                        printf("%i ",n);
                    }
                }
                printf("\n");
        }
    } else {
        for (c=n1;n1<=c && c<=n2;c++) {
                printf("Divisores de %i: ",c);
                for (n=1;1<=n && n<=c;n++) {
                    if (c%n==0) {
                        printf("%i ",n);
                    }
                }
                printf("\n");
        }
    }
    printf("-------------------------------------------\n");
}

void ex10()
{
    int n,c,cont;

    cont=0;

    printf("10. Mostrar quais números são primos em um intervalo de valores.\n");
    printf("(INTERVALO ENTRE 1 E 1000)\n");
    printf("-------------------------------------------\n");
    printf("Os números primos entre 1 e 1000 são:\n");
    printf("-------------------------------------------\n");
    for (n=1;1<=n && n<=1000;n++) {
        for (c=1;1<=c && c<=n;c++) {
            if (n%c==0) {
                cont++;
            }
        }
        if (cont<3) {
            printf("%i ",n);
        }
        cont=0;
    }
    printf("\n-------------------------------------------\n");
}
