#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n1,n2,n3,n4;
    float media;

    printf("b) Calcule a m�dia aritm�tica de quatro n�meros inteiros dados.\n");
    printf("Digite o primeiro n�mero:\n");
    scanf("%i",&n1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i",&n2);
    printf("Digite o terceiro n�mero:\n");
    scanf("%i",&n3);
    printf("Digite o quarto n�mero:\n");
    scanf("%i",&n4);
    media=(n1+n2+n3+n4)/4;
    printf("A m�dia entre os 4 n�meros dados � %.2f!",media);
    return 0;
}
