#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a,b,soma;

    printf("Digite o primeiro n�mero:\n");
    scanf("%i",&a);
    printf("Digite o segundo n�mero:\n");
    scanf("%i",&b);
    soma=(a+b);
    printf("A soma entre os valores %i e %i digitados � %i",a,b,soma);
    return 0;
}
