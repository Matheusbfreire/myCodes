#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n=0;
    float t1=1,t2=1,operacao=0.5,soma=1;

    printf("Calcule o resultado da seguinte série para os N primeiros termos, o valor de N deverá ser lido pelo teclado:\n1/2 + 1/4 - 2/6 + 3/8 - 5/10 + 8/12 - 13/14 + 21/16 - ...\nFaça esse exercício em um programa principal:\n");
    printf("Digite o valor de N:\n");
    scanf("%i",&n);
    if (n>1) {
        for (int i=2;i<=n;i++) {
            if (i%2==0) {
                operacao+=soma/(2*i);
                soma=t1+t2;
                t1=t2;
                t2=soma;
            } else {
                operacao-=soma/(2*i);
                soma=t1+t2;
                t1=t2;
                t2=soma;
            }
        }
    }
    printf("Resultado: %.2f\n",operacao);

    return 0;
}
