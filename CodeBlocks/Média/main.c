#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a,b;
    float media;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i",&a);
    printf("Digite o segundo n�mero:\n");
    scanf("%i",&b);
    media=(a+b)/2;
    printf("A m�dia entre os valores %i e %i digitados � %.1f",a,b,media);
    return 0;
}
