#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float f,c;

    printf("d) Leia uma temperatura dada na escala Celsius (C)\ne imprima o equivalente em Fahrenheit (F).\n");
    printf("Qual grau na escala Celsius você quer analisar?\n");
    scanf("%f",&c);
    f=(9*c)/5+32;
    printf("A temperatura %.0f em Celsius, equivale a %.2f em Fahrenheit!",c,f);
    return 0;
}
