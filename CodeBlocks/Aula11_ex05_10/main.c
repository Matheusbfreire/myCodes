#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float x,y;

    printf("j) Ler dois valores reais do teclado e dizer se o primeiro � maior, menor ou igual ao segundo.\n");
    printf("Digite um n�mero real qualquer:\n");
    scanf("%f",&x);
    printf("Digite um segundo n�mero real qualquer:\n");
    scanf("%f",&y);
    if (x<y) {
        printf("O primeiro n�mero � menor que o segundo!");
    } else {
        if (x>y) {
            printf("O primeiro n�mero � maior que o segundo!");
        } else {
            printf("O primeiro n�mero � igual ao segundo!");
        }
    }
    return 0;
}
