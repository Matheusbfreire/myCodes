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

    printf("Execussão do programa 00:\n");
    printf("\n");
    ex00();
    printf("Execussão do programa 01:\n");
    printf("\n");
    ex01();
    printf("Execussão do programa 02:\n");
    printf("\n");
    ex02();
    printf("Execussão do programa 03:\n");
    printf("\n");
    ex03();
    printf("Execussão do programa 04:\n");
    printf("\n");
    ex04();
    return 0;
}

//Exercício Soma

int ex00()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Vou calcular a soma de dois números!\n");
    printf("\n");

    int a,b,soma;

    printf("Digite o primeiro número:\n");
    scanf("%i",&a);
    printf("Digite o segundo número:\n");
    scanf("%i",&b);
    soma=(a+b);
    printf("A soma entre os valores %i e %i digitados é %i\n",a,b,soma);
    printf("-----------------------------------------------------\n");
    return 0;
}

//Exercício Média

int ex01()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Vou calcular a média entre dois números!\n");
    printf("\n");

    int a,b;
    float media;

    printf("Digite o primeiro número:\n");
    scanf("%i",&a);
    printf("Digite o segundo número:\n");
    scanf("%i",&b);
    media=(a+b)/2;
    printf("A média entre os valores %i e %i digitados é %.1f\n",a,b,media);
    printf("-----------------------------------------------------\n");
    return 0;
}

//Exercício Volume Cilindro

int ex02()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("1.Escreva um programa que solicite ao usuário a altura\ne o raio de um cilindro circular e imprima o volume do cilindro.\n");
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
    printf("O volume de um cilindro de altura %i e raio %i é igual a %5.2f\n",h,r,volume);
    printf("-----------------------------------------------------\n");
    return 0;
}

//Exercício Encanador

int ex03()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("2.Uma empresa contrata um encanador a R$ 20.00 por dia.\nCrie um programa que solicite o número de dias trabalhados\n");
    printf("pelo encanador e imprima a quantia líquida que deverá ser paga,\nsabendo-se que são descontados 8/100 de impostos.\n");
    printf("\n");

    int dias;
    float ql;

    printf("Quantos dias o encanador vai trabalhar?\n");
    scanf("%i",&dias);
    ql=20*dias*0.92;
    printf("A quantia que deverá ser paga ao encanador por %i dias de trabalho é %5.2f\n",dias,ql);
    printf("-----------------------------------------------------\n");
    return 0;
}

//Exercício Lanchonete

int ex04()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Prepare um programa que leia a quantidade de cada item que você\n");
    printf("\n");

    int qh,qc,qf,qr,qm,qi;
    float valor_total;

    printf("Segue a baixo cardápio da lanchonete:\n");
    printf("\n");
    printf("Hambúrguer...............  R$ 30,00\nFritas.................... R$ 20,50\nRefrigerante.............. R$ 10,00\nMilkshake................. R$ 30,00\n");
    printf("Quantos hambúrgueres você pediu?\n");
    scanf("%i",&qh);
    printf("Quantos cheeseburgueres você pediu?\n");
    scanf("%i",&qc);
    printf("Quantas fritas você pediu?\n");
    scanf("%i",&qf);
    printf("Quantos refrigerantes você pediu?\n");
    scanf("%i",&qr);
    printf("Quantos milkshakes você pediu?\n");
    scanf("%i",&qm);
    qi=qh+qc+qf+qr+qm;
    valor_total=qh*30+qc*35.5+qf*20.5+qr*10+qm*30;
    printf("Você comprou um total de %i produtos e sua conta final é %3.2f\n",qi,valor_total);
    return 0;
}
