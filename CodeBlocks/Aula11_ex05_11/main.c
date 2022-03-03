#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>

int main ( )
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float a,b,c;

    printf("k) Ler três valores reais do teclado e dizer se o primeiro está entre os outros dois.\n");
    printf("Digite um número real qualquer:\n");
    scanf("%f",&a);
    printf("Digite outro número real qualquer:\n");
    scanf("%f",&b);
    printf("Digite outro número real qualquer:\n");
    scanf("%f",&c);
    if (b==c && a==b || b==c && a==c) {
        printf("O primeiro número não está entre os outros dois!");
    } else {
        if (b<a && a<c || c<a && a<b) {
            printf("O primeiro número está entre os outros dois!");
        } else {
            printf("O primeiro número não está entre os outros dois!");
        }
    }
    return ( 0 );
}
