#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char produto[51];
    int venda;
    float preco,valor_venda=0,desconto=0;

    printf("Qual o nome do produto?\n");
    fflush(stdin);
    scanf("%[^\n]",produto);
    printf("Quantas unidades você vendeu desse produto?\n");
    scanf("%i",&venda);
    printf("Qual o preço unitário desse produto?\n");
    scanf("%f",&preco);
    valor_venda=venda*preco;
    printf("-------------------------------------------\n");
    printf("PRODUTO: %s\n",produto);
    if (valor_venda<=200) {
        printf("VALOR A PAGAR: R$%.2f\n",valor_venda);
    } else {
        if (valor_venda<=1000) {
            desconto=valor_venda*0.95;
            printf("VALOR A PAGAR: R$%.2f\n",desconto);
        } else {
            if (valor_venda<=2000) {
                desconto=valor_venda*0.9;
                printf("VALOR A PAGAR: R$%.2f\n",desconto);
            } else {
                desconto=valor_venda*0.85;
                printf("VALOR A PAGAR: R$%.2f\n",desconto);
            }
        }
    }
    printf("-------------------------------------------\n");
    return 0;
}
