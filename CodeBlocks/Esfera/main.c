#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int d,r,r2,r3;
    float pi,a,v;

    printf("1.Escreva um programa que solicite ao usu�rio o di�metro de uma esfera calcule\ne imprima:\n-a �rea da superf�cie esf�rica e o volume da esfera.\n");
    printf("\n");
    printf("Qual o di�metro da esfera?\n");
    scanf("%i",&d);
    pi=3.14;
    r=d/2;
    r2=pow(r,2);
    r3=pow(r,3);
    a=4*pi*r2;
    v=(4/3)*pi*r3;
    printf("A �rea da superf�cie dessa esfera � %.2f e o volume da esfera � %.2f!\n",a,v);
    printf("-----------------------------------------------------\n");
    return 0;
}
