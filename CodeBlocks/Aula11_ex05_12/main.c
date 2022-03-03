#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float a,b,c;

    printf("l) ler três valores reais do teclado e dizer se o primeiro não está entre os outros dois.\n");
    printf("Digite um primeiro número real qualquer:\n");
    scanf("%f",&a);
    printf("Digite um segundo número real qualquer:\n");
    scanf("%f",&b);
    printf("Digite um terceiro número real qualquer:\n");
    scanf("%f",&c);
    if (b==c && a!=b || b==c && a==b) {
        printf("O primeiro número digitado não está entre  os outros dois!");
    } else {
        if (b<a && a<c || c<a &&  a<b) {
            printf("O primeiro número digitado está entre  os outros dois!");
        } else {
            printf("O primeiro número digitado não está entre  os outros dois!");
        }
    }
    return 0;
}
