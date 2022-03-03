#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int xa,ya,xb,yb,x,y;
    float h;

    printf("4.Escreva um algoritmo para determinar a distância entre dois pontos em uma reta.\n");
    printf("Escolha dois pontos entre que irei calcular a distancia entre eles em linha reta!\n");
    printf("X do ponto A:\n");
    scanf("%i",&xa);
    printf("Y do ponto A:\n");
    scanf("%i",&ya);
    printf("X do ponto B:\n");
    scanf("%i",&xb);
    printf("Y do ponto B:\n");
    scanf("%i",&yb);
    x=abs(xa-xb);
    y=abs(ya-yb);
    h=sqrt(pow(x,2)+pow(y,2));
    printf("A distância entre esses dois pontos é de %.2f",h);
    return 0;
}
