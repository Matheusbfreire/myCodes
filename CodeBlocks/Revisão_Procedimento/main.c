#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void proc();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    proc();

    return 0;
}

void proc()
{
    int n=0;
    float t1=1,t2=1,operacao=0.5,soma=1;

    printf("Calcule o resultado da seguinte s�rie para os N primeiros termos, o valor de N dever� ser lido pelo teclado:\n1/2 + 1/4 - 2/6 + 3/8 - 5/10 + 8/12 - 13/14 + 21/16 - ...\nFa�a esse exerc�cio utilizando um procedimento:\n");
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
}
