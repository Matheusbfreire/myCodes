#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,soma;
    printf("Digite o primeiro valor:\n");
    scanf("%i",&a);
    printf("Digite o segundo valor:\n");
    scanf("%i",&b);
    soma=a+b;
    printf("A soma entre %i e %i é igual a %i\n",a,b,soma);
    return 0;
}
