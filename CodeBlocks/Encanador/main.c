#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    //2.Uma empresa contrata um encanador a R$ 20.00 por dia. Crie um programa que solicite o n�mero de dias trabalhados
    //pelo encanador e imprima a quantia l�quida que dever� ser paga, sabendo-se que s�o descontados 8% de impostos.

    int dias;
    float ql;

    printf("Quantos dias o encanador vai trabalhar?\n");
    scanf("%i",&dias);
    ql=20*dias*0.92;
    printf("A quantia que dever� ser paga ao encanador por %i dias de trabalho � %5.2f",dias,ql);
    return 0;
}
