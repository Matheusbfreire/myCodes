#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
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
    printf("O novo salário desse funcionário é R$%.2f!",sn);
    return 0;
}
