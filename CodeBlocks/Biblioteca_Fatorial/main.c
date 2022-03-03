#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "MB_Fatorial.h"

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n=5;

    printf("Fatorial de %i: %i",n,fatorial(n));

    return 0;
}
