#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a,b,c;

    printf("h) Ler dois n�meros inteiros para vari�veis a e b. Trocar o valor de b com o de a, e imprimi-los.\n");
    printf("Qual o valor de A?\n");
    scanf("%i",&a);
    printf("Qual o valor de B?\n");
    scanf("%i",&b);
    c=b;
    b=a;
    a=c;
    printf("O valor de a � %i e o valor de b � %i!",a,b);
    return 0;
}
