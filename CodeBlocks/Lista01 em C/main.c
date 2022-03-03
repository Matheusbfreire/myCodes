#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int ex00();
int ex01();
int ex02();
int ex03();
int ex04();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Execuss�o do programa 00:\n");
    printf("\n");
    ex00();
    printf("Execuss�o do programa 01:\n");
    printf("\n");
    ex01();
    printf("Execuss�o do programa 02:\n");
    printf("\n");
    ex02();
    printf("Execuss�o do programa 03:\n");
    printf("\n");
    ex03();
    printf("Execuss�o do programa 04:\n");
    printf("\n");
    ex04();
    return 0;
}

//Exerc�cio Soma

int ex00()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Vou calcular a soma de dois n�meros!\n");
    printf("\n");

    int a,b,soma;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i",&a);
    printf("Digite o segundo n�mero:\n");
    scanf("%i",&b);
    soma=(a+b);
    printf("A soma entre os valores %i e %i digitados � %i\n",a,b,soma);
    printf("-----------------------------------------------------\n");
    return 0;
}

//Exerc�cio M�dia

int ex01()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Vou calcular a m�dia entre dois n�meros!\n");
    printf("\n");

    int a,b;
    float media;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i",&a);
    printf("Digite o segundo n�mero:\n");
    scanf("%i",&b);
    media=(a+b)/2;
    printf("A m�dia entre os valores %i e %i digitados � %.1f\n",a,b,media);
    printf("-----------------------------------------------------\n");
    return 0;
}

//Exerc�cio Volume Cilindro

int ex02()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("1.Escreva um programa que solicite ao usu�rio a altura\ne o raio de um cilindro circular e imprima o volume do cilindro.\n");
    printf("\n");

    int h,r,r2;
    float pi,volume;

    pi=3.14;
    printf("Qual a altura do cilindro?\n");
    scanf("%i",&h);
    printf("Qual o raio do cilindro?\n");
    scanf("%i",&r);
    r2=pow(r,2);
    volume=pi*r2*h;
    printf("O volume de um cilindro de altura %i e raio %i � igual a %5.2f\n",h,r,volume);
    printf("-----------------------------------------------------\n");
    return 0;
}

//Exerc�cio Encanador

int ex03()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("2.Uma empresa contrata um encanador a R$ 20.00 por dia.\nCrie um programa que solicite o n�mero de dias trabalhados\n");
    printf("pelo encanador e imprima a quantia l�quida que dever� ser paga,\nsabendo-se que s�o descontados 8/100 de impostos.\n");
    printf("\n");

    int dias;
    float ql;

    printf("Quantos dias o encanador vai trabalhar?\n");
    scanf("%i",&dias);
    ql=20*dias*0.92;
    printf("A quantia que dever� ser paga ao encanador por %i dias de trabalho � %5.2f\n",dias,ql);
    printf("-----------------------------------------------------\n");
    return 0;
}

//Exerc�cio Lanchonete

int ex04()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Prepare um programa que leia a quantidade de cada item que voc�\n");
    printf("\n");

    int qh,qc,qf,qr,qm,qi;
    float valor_total;

    printf("Segue a baixo card�pio da lanchonete:\n");
    printf("\n");
    printf("Hamb�rguer...............  R$ 30,00\nFritas.................... R$ 20,50\nRefrigerante.............. R$ 10,00\nMilkshake................. R$ 30,00\n");
    printf("Quantos hamb�rgueres voc� pediu?\n");
    scanf("%i",&qh);
    printf("Quantos cheeseburgueres voc� pediu?\n");
    scanf("%i",&qc);
    printf("Quantas fritas voc� pediu?\n");
    scanf("%i",&qf);
    printf("Quantos refrigerantes voc� pediu?\n");
    scanf("%i",&qr);
    printf("Quantos milkshakes voc� pediu?\n");
    scanf("%i",&qm);
    qi=qh+qc+qf+qr+qm;
    valor_total=qh*30+qc*35.5+qf*20.5+qr*10+qm*30;
    printf("Voc� comprou um total de %i produtos e sua conta final � %3.2f\n",qi,valor_total);
    return 0;
}
