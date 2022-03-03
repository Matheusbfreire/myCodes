#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    //2.Uma empresa contrata um encanador a R$ 20.00 por dia. Crie um programa que solicite o número de dias trabalhados
    //pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% de impostos.

    int dias;
    float ql;

    printf("Quantos dias o encanador vai trabalhar?\n");
    scanf("%i",&dias);
    ql=20*dias*0.92;
    printf("A quantia que deverá ser paga ao encanador por %i dias de trabalho é %5.2f",dias,ql);
    return 0;
}
