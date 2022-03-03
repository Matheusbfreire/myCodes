#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float kg,g1,g2,conta_final;

    printf("g) Pedro comprou um saco de Ração com peso em quilos. Pedro\npossui 2 (dois) gatos para os quais fornece a quantidade de\nração em gramas. Faça um algoritmo que receba o peso do Saco\nde ração e a quantidade de ração fornecida para cada gato.\nCalcule e mostre quanto restará de ração no saco após 5 (cinco) dias.\n");
    printf("\n");
    printf("Quantos Kg tem no saco de ração?\n");
    scanf("%f",&kg);
    printf("Quantas gramas o primeiro gato come?\n");
    scanf("%f",&g1);
    printf("Quantas gramas o segundo gato come?\n");
    scanf("%f",&g2);
    conta_final=kg-(((g1/1000)+(g2/1000))*5);
    printf("Após 5 dias restará %.2fKg de ração no saco!",conta_final);
    return 0;
}
