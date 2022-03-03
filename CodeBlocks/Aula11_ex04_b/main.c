#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n1,n2,n3,n4;
    float media;

    printf("b) Calcule a média aritmética de quatro números inteiros dados.\n");
    printf("Digite o primeiro número:\n");
    scanf("%i",&n1);
    printf("Digite o segundo número:\n");
    scanf("%i",&n2);
    printf("Digite o terceiro número:\n");
    scanf("%i",&n3);
    printf("Digite o quarto número:\n");
    scanf("%i",&n4);
    media=(n1+n2+n3+n4)/4;
    printf("A média entre os 4 números dados é %.2f!",media);
    return 0;
}
