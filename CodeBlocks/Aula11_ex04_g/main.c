#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float kg,g1,g2,conta_final;

    printf("g) Pedro comprou um saco de Ra��o com peso em quilos. Pedro\npossui 2 (dois) gatos para os quais fornece a quantidade de\nra��o em gramas. Fa�a um algoritmo que receba o peso do Saco\nde ra��o e a quantidade de ra��o fornecida para cada gato.\nCalcule e mostre quanto restar� de ra��o no saco ap�s 5 (cinco) dias.\n");
    printf("\n");
    printf("Quantos Kg tem no saco de ra��o?\n");
    scanf("%f",&kg);
    printf("Quantas gramas o primeiro gato come?\n");
    scanf("%f",&g1);
    printf("Quantas gramas o segundo gato come?\n");
    scanf("%f",&g2);
    conta_final=kg-(((g1/1000)+(g2/1000))*5);
    printf("Ap�s 5 dias restar� %.2fKg de ra��o no saco!",conta_final);
    return 0;
}
