#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a,b;
    float media;

    printf("Digite o primeiro número:\n");
    scanf("%i",&a);
    printf("Digite o segundo número:\n");
    scanf("%i",&b);
    media=(a+b)/2;
    printf("A média entre os valores %i e %i digitados é %.1f",a,b,media);
    return 0;
}
