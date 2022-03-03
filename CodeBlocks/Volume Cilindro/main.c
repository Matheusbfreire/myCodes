#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    //1.Escreva um programa que solicite ao usuário a altura e o raio de um cilindro circular e imprima o volume do cilindro.

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
    return 0;
}
