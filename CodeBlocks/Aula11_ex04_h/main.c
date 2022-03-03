#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a,b,c;

    printf("h) Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.\n");
    printf("Qual o valor de A?\n");
    scanf("%i",&a);
    printf("Qual o valor de B?\n");
    scanf("%i",&b);
    c=b;
    b=a;
    a=c;
    printf("O valor de a é %i e o valor de b é %i!",a,b);
    return 0;
}
