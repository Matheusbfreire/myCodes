#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float b,h,a;

    printf("f) Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo.\n");
    printf("Qual a base do triângulo?\n");
    scanf("%f",&b);
    printf("Qual a altura do triângulo?\n");
    scanf("%f",&h);
    a = (b*h)/2;
    printf("A área de um triângulo de base %.0f e altura %.0f é igual a %.2f!",b,h,a);
    return 0;
}
