#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,resto;

    printf("i) Leia um n�mero e imprima o resto da divis�o por 7. Utilize o comando resto (a,b) na linguagem C (a % b).\n");
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&x);
    resto=(x%7);
    printf("O resto da divis�o de %i por 7 � %i!",x,resto);
    return 0;
}
