#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float b,h,a;

    printf("f) Fa�a um algoritmo que pe�a ao usu�rio a base e a altura e calcule a �rea de um triangulo.\n");
    printf("Qual a base do tri�ngulo?\n");
    scanf("%f",&b);
    printf("Qual a altura do tri�ngulo?\n");
    scanf("%f",&h);
    a = (b*h)/2;
    printf("A �rea de um tri�ngulo de base %.0f e altura %.0f � igual a %.2f!",b,h,a);
    return 0;
}
