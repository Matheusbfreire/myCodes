#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float media(float *ma, float *me);

float ma=0, me=0;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float med=0;

    med=media(&ma, &me);
    printf("A média entre os valores digitados é: %.2f\n",med);
    printf("O maior número digitado é: %.2f\n",ma);
    printf("O menor número digitado é: %.2f\n",me);
    return 0;
}

float media(float *ma, float *me)
{
    int n=0;
    float soma=0,c=0,med=0;

    printf("Digite um número qualquer\n");
    scanf("%i",&n);
    *ma=*me=n;
    while (n>=0) {
        soma+= (float) n;
        c++;
        if (n>*ma) {
            *ma=n;
        }
        if (n<*me) {
            *me=n;
        }
        printf("Digite um número qualquer\n");
        scanf("%i",&n);
    }
    med=soma/c;

    return  med;
}
