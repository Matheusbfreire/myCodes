#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int item;

    printf("3.O cardápio de uma lanchonete é dado abaixo. Prepare um programa que o código correspondente ao item da lanchonete e mostre a descrição do item e seu valor. Caso for digitado um valor não existente mostre a mensagem código inválido.\n");
    printf("1 -Hambúrguer...............  R$ 30,00\n2 -Cheeseburger............. R$ 35,50\n3 -Fritas................... R$ 20,50 \n4 -Refrigerante............. R$ 10,00\n5 -Milk-shake............... R$ 30,00\n");
    printf("Qual item do cardápio você quer?\n(DIGITE O NÙMERO CORRESPONDENTE AO ITEM)\n");
    scanf("%i",&item);
    if (item==1) {
        printf("Você escolheu o Hambúrguer, ele custa R$30,00!");
    } else {
        if (item==2) {
            printf("Você escolheu o Cheeseburguer, ele custa R$35,50!");
        } else {
            if (item==3) {
                printf("Você escolheu a Fritas, ela custa R$20,50!");
            } else {
                if (item==4) {
                    printf("Você escolheu o Refrigerante, ele custa R$10,00!");
                }else {
                    if (item==5) {
                        printf("Você escolheu o Milk-Shake, ele custa R$30,00!");
                    } else {
                        printf("O item escolhido não existe no cardápio!");
                    }
                }
            }
        }
    }
    return 0;
}
