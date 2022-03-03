#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int pot(int n, int p);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n=0,p=0;

    printf("Digite um número:\n");
    scanf("%i",&n);
    printf("Digite a potência:\n");
    scanf("%i",&p);
    printf("%i elevado a %i é: %i",n,p,pot(n,p));
    return 0;
}

int pot(int n, int p)
{
    if (p==0) {
        return 1;
    } else {
        return n*pot(n,p-1);
    }
}
