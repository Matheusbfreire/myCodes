#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float a,b,c;

    printf("l) ler tr�s valores reais do teclado e dizer se o primeiro n�o est� entre os outros dois.\n");
    printf("Digite um primeiro n�mero real qualquer:\n");
    scanf("%f",&a);
    printf("Digite um segundo n�mero real qualquer:\n");
    scanf("%f",&b);
    printf("Digite um terceiro n�mero real qualquer:\n");
    scanf("%f",&c);
    if (b==c && a!=b || b==c && a==b) {
        printf("O primeiro n�mero digitado n�o est� entre  os outros dois!");
    } else {
        if (b<a && a<c || c<a &&  a<b) {
            printf("O primeiro n�mero digitado est� entre  os outros dois!");
        } else {
            printf("O primeiro n�mero digitado n�o est� entre  os outros dois!");
        }
    }
    return 0;
}
