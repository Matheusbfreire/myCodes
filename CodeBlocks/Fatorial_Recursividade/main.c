#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int fat(int n);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n=0;

    printf("Digite um número:\n");
    scanf("%i",&n);
    printf("Fatorial de %i é: %i\n",n,fat(n));
    return 0;
}

int fat(int n)
{
    if (n==1) {
        return 1;
    } else {
        return n*fat(n-1);
    }
}
