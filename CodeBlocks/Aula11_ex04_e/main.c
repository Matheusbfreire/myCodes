#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float s,sn,p;

    printf("e) Fa�a um algoritmo que receba o sal�rio de um funcion�rio\ne o percentual de aumento, calcule e mostre o novo sal�rio.\n");
    printf("Qual o sal�rio do funcion�rio?\n");
    printf("R$");
    scanf("%f",&s);
    printf("Qual o percentual de aumento desse sal�rio?\n");
    scanf("%f",&p);
    sn=(s*(1+(p/100)));
    printf("O novo sal�rio desse funcion�rio � R$%.2f!",sn);
    return 0;
}
