#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int d,r,r2,r3;
    float pi,a,v;

    printf("1.Escreva um programa que solicite ao usuário o diâmetro de uma esfera calcule\ne imprima:\n-a área da superfície esférica e o volume da esfera.\n");
    printf("\n");
    printf("Qual o diâmetro da esfera?\n");
    scanf("%i",&d);
    pi=3.14;
    r=d/2;
    r2=pow(r,2);
    r3=pow(r,3);
    a=4*pi*r2;
    v=(4/3)*pi*r3;
    printf("A área da superfície dessa esfera é %.2f e o volume da esfera é %.2f!\n",a,v);
    printf("-----------------------------------------------------\n");
    return 0;
}
