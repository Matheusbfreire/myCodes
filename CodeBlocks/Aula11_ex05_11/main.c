#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>

int main ( )
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float a,b,c;

    printf("k) Ler tr�s valores reais do teclado e dizer se o primeiro est� entre os outros dois.\n");
    printf("Digite um n�mero real qualquer:\n");
    scanf("%f",&a);
    printf("Digite outro n�mero real qualquer:\n");
    scanf("%f",&b);
    printf("Digite outro n�mero real qualquer:\n");
    scanf("%f",&c);
    if (b==c && a==b || b==c && a==c) {
        printf("O primeiro n�mero n�o est� entre os outros dois!");
    } else {
        if (b<a && a<c || c<a && a<b) {
            printf("O primeiro n�mero est� entre os outros dois!");
        } else {
            printf("O primeiro n�mero n�o est� entre os outros dois!");
        }
    }
    return ( 0 );
}
