#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "Matheus.h"

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n=0;
    float h=0;

    printf("Quantos termos de H você quer calcular?\n");
    scanf("%i",&n);
    h=valorDeH(n);
    printf("\n");
    printf("H = %.2f",h);
    printf("\n\n");

    return 0;
}
