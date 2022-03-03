#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    //3.O cardápio de uma lanchonete é dado abaixo. Prepare um programa que leia a quantidade de cada item que você
    //consumiu e calcule a conta final.
    //Hambúrguer...............  R$ 30,00
    //Cheeseburger.............. R$ 35,50
    //Fritas.................... R$ 20,50
    //Refrigerante.............. R$ 10,00
    //Milkshake................. R$ 30,00

    int qh,qc,qf,qr,qm,qi;
    float valor_total;

    printf("Quantos hambúrgueres você pediu?\n");
    scanf("%i",&qh);
    printf("Quantos cheeseburgueres você pediu?\n");
    scanf("%i",&qc);
    printf("Quantas fritas você pediu?\n");
    scanf("%i",&qf);
    printf("Quantos refrigerantes você pediu?\n");
    scanf("%i",&qr);
    printf("Quantos milkshakes você pediu?\n");
    scanf("%i",&qm);
    qi=qh+qc+qf+qr+qm;
    valor_total=qh*30+qc*35.5+qf*20.5+qr*10+qm*30;
    printf("Você comprou um total de %i produtos e sua conta final é %3.2f",qi,valor_total);
    return 0;
}
