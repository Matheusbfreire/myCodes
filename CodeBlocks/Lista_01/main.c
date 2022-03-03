#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int a();
int b();
int c();
int d();
int e();
int f();
int g();
int h();
int i();
int j();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Exercício A:\n");
    a();
    printf("Exercício B:\n");
    b();
    printf("Exercício C:\n");
    c();
    printf("Exercício D:\n");
    d();
    printf("Exercício E:\n");
    e();
    printf("Exercício F:\n");
    f();
    printf("Exercício G:\n");
    g();
    printf("Exercício H:\n");
    h();
    printf("Exercício I:\n");
    i();
    printf("Exercício J\n");
    j();
    return 0;
}

int a()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,suc;

    printf("a) Leia um número e imprima seu sucessor.\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&x);
    suc=x+1;
    printf("O sucessor do número %i é o %i!\n",x,suc);
    printf("----------------------------\n");
    return 0;
}

int b()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float media,n1,n2,n3,n4;

    printf("b) Calcule a média aritmética de quatro números inteiros dados.\n");
    printf("Digite o primeiro número:\n");
    scanf("%f",&n1);
    printf("Digite o segundo número:\n");
    scanf("%f",&n2);
    printf("Digite o terceiro número:\n");
    scanf("%f",&n3);
    printf("Digite o quarto número:\n");
    scanf("%f",&n4);
    media=(n1+n2+n3+n4)/4;
    printf("A média entre os 4 números dados é %.2f!\n",media);
    printf("----------------------------\n");
    return 0;
}

int c()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float media,n1,p1,n2,p2,n3,p3;

    printf("c) Faça um algoritmo que receba 3 (três) notas e seus\nrespectivos pesos, calcule e mostre a média ponderada dessas notas.\n");
    printf("Escreva a primeira nota:\n");
    scanf("%f",&n1);
    printf("O peso referente a essa nota:\n");
    scanf("%f",&p1);
    printf("Escreva a segunda nota:\n");
    scanf("%f",&n2);
    printf("O peso referente a essa nota:\n");
    scanf("%f",&p2);
    printf("Escreva a terceira nota:\n");
    scanf("%f",&n3);
    printf("O peso referente a essa nota:\n");
    scanf("%f",&p3);
    media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    printf("A média ponderada, de acorco com as notas e seus respectivos pesos é %.2f!\n",media);
    printf("----------------------------\n");
    return 0;
}

int d()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float f,c;

    printf("d) Leia uma temperatura dada na escala Celsius (C)\ne imprima o equivalente em Fahrenheit (F).\n");
    printf("Qual grau na escala Celsius você quer analisar?\n");
    scanf("%f",&c);
    f=(9*c)/5+32;
    printf("A temperatura %.0f em Celsius, equivale a %.2f em Fahrenheit!\n",c,f);
    printf("----------------------------\n");
    return 0;
}

int e()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float s,sn,p;

    printf("e) Faça um algoritmo que receba o salário de um funcionário\ne o percentual de aumento, calcule e mostre o novo salário.\n");
    printf("Qual o salário do funcionário?\n");
    printf("R$");
    scanf("%f",&s);
    printf("Qual o percentual de aumento desse salário?\n");
    scanf("%f",&p);
    sn=(s*(1+(p/100)));
    printf("O novo salário desse funcionário é R$%.2f!\n",sn);
    printf("----------------------------\n");
    return 0;
}

int f()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float b,h,a;

    printf("f) Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo.\n");
    printf("Qual a base do triângulo?\n");
    scanf("%f",&b);
    printf("Qual a altura do triângulo?\n");
    scanf("%f",&h);
    a = (b*h)/2;
    printf("A área de um triângulo de base %.0f e altura %.0f é igual a %.2f!\n",b,h,a);
    printf("----------------------------\n");
    return 0;
}

int g()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float kg,g1,g2,conta_final;

    printf("g) Pedro comprou um saco de Ração com peso em quilos. Pedro\npossui 2 (dois) gatos para os quais fornece a quantidade de\nração em gramas. Faça um algoritmo que receba o peso do Saco\nde ração e a quantidade de ração fornecida para cada gato.\nCalcule e mostre quanto restará de ração no saco após 5 (cinco) dias.\n");
    printf("\n");
    printf("Quantos Kg tem no saco de ração?\n");
    scanf("%f",&kg);
    printf("Quantas gramas o primeiro gato come?\n");
    scanf("%f",&g1);
    printf("Quantas gramas o segundo gato come?\n");
    scanf("%f",&g2);
    conta_final=kg-(((g1/1000)+(g2/1000))*5);
    printf("Após 5 dias restará %.2fKg de ração no saco!\n",conta_final);
    printf("----------------------------\n");
    return 0;
}

int h()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a,b,c;

    printf("h) Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.\n");
    printf("Qual o valor de A?\n");
    scanf("%i",&a);
    printf("Qual o valor de B?\n");
    scanf("%i",&b);
    c=b;
    b=a;
    a=c;
    printf("O valor de A é %i e o valor de B é %i!\n",a,b);
    printf("----------------------------\n");
    return 0;
}

int i()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,resto;

    printf("i) Leia um número e imprima o resto da divisão por 7. Utilize o comando resto (a,b) na linguagem C (a % b).\n");
    printf("Digite um número inteiro qualquer:\n");
    scanf("%i",&x);
    resto=(x%7);
    printf("O resto da divisão de %i por 7 é %i!\n",x,resto);
    printf("----------------------------\n");
    return 0;
}

int j()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a1,a2,n,an,r,sn;

    printf("j) Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos.\n");
    printf("Qual o primeiro termo dessa P.A.?\n");
    scanf("%i",&a1);
    printf("Qual o segundo termo dessa P.A.?\n");
    scanf("%i",&a2);
    printf("Quantos termos tem essa P.A.?\n");
    scanf("%i",&n);
    r=a2-a1;
    an=((n-1)*r)+a1;
    sn=((a1+an)*n)/2;
    printf("A soma da P.A. cujo primeiro termo é %i e o segundo é %i e tem um total de %i termos é %i!\n",a1,a2,n,sn);
    printf("----------------------------\n");
    return 0;
}
