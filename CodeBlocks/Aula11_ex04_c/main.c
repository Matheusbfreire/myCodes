#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n1,p1,n2,p2,n3,p3;
    float media;

    printf("c) Faça um algoritmo que receba 3 (três) notas e seus\nrespectivos pesos, calcule e mostre a média ponderada dessas notas.\n");
    printf("Escreva a primeira nota:\n");
    scanf("%i",&n1);
    printf("O peso referente a essa nota:\n");
    scanf("%i",&p1);
    printf("Escreva a segunda nota:\n");
    scanf("%i",&n2);
    printf("O peso referente a essa nota:\n");
    scanf("%i",&p2);
    printf("Escreva a terceira nota:\n");
    scanf("%i",&n3);
    printf("O peso referente a essa nota:\n");
    scanf("%i",&p3);
    media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    printf("A média ponderada, de acorco com as notas e seus respectivos pesos é %.2f!",media);
    return 0;
}
