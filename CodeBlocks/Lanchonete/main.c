#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    //3.O card�pio de uma lanchonete � dado abaixo. Prepare um programa que leia a quantidade de cada item que voc�
    //consumiu e calcule a conta final.
    //Hamb�rguer...............  R$ 30,00
    //Cheeseburger.............. R$ 35,50
    //Fritas.................... R$ 20,50
    //Refrigerante.............. R$ 10,00
    //Milkshake................. R$ 30,00

    int qh,qc,qf,qr,qm,qi;
    float valor_total;

    printf("Quantos hamb�rgueres voc� pediu?\n");
    scanf("%i",&qh);
    printf("Quantos cheeseburgueres voc� pediu?\n");
    scanf("%i",&qc);
    printf("Quantas fritas voc� pediu?\n");
    scanf("%i",&qf);
    printf("Quantos refrigerantes voc� pediu?\n");
    scanf("%i",&qr);
    printf("Quantos milkshakes voc� pediu?\n");
    scanf("%i",&qm);
    qi=qh+qc+qf+qr+qm;
    valor_total=qh*30+qc*35.5+qf*20.5+qr*10+qm*30;
    printf("Voc� comprou um total de %i produtos e sua conta final � %3.2f",qi,valor_total);
    return 0;
}
