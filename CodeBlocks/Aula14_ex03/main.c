#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int item;

    printf("3.O card�pio de uma lanchonete � dado abaixo. Prepare um programa que o c�digo correspondente ao item da lanchonete e mostre a descri��o do item e seu valor.\n");
    printf("1 -Hamb�rguer...............  R$ 30,00\n2 -Cheeseburger............. R$ 35,50\n3 -Fritas................... R$ 20,50 \n4 -Refrigerante............. R$ 10,00\n5 -Milk-shake............... R$ 30,00\n");
    printf("Qual item do card�pio voc� quer?\n(DIGITE O N�MERO CORRESPONDENTE AO ITEM)\n");
    scanf("%i",&item);
    if (item==1){
        printf("Voc� escolheu o Hamb�rguer, ele custa R$30,00!");
    }
    if (item==2) {
        printf("Voc� escolheu o Cheeseburguer, ele custa R$35,50!");
    }
    if (item==3) {
        printf("Voc� escolheu a Fritas, ela custa R$20,50!");
    }
    if (item==4) {
        printf("Voc� escolheu o Refrigerante, ele custa R$10,00!");
    }
    if (item==5) {
        printf("Voc� escolheu o Milk-Shake, ele custa R$30,00!");
    }
    if (item>5 || item<1) {
        printf("O item escolhido n�o existe no card�pio!");
    }
    return 0;
}
